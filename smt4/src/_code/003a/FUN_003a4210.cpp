/* NON_MATCHING: readable rebuild of the item-sale list builder; retail hoists the list base (+0x9FFC), the counter address and the price accumulator address into callee-saved registers and builds the packed item word in a stack slot with piece moves, which armcc here allocates differently. */
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"

/* The sale list window: slot 2 of its vtable attaches a list. */
class SaleWindow {
public:
    virtual ~SaleWindow();
    virtual void unk04();
    virtual void attach(void *list);
    /* 0x04 */ u16 flags;
    /* 0x06 */ u8 unk06[0x5E];
    /* 0x64 */ void *owner;
};

/* One sale entry: item, chosen result and quantity (6 bytes). */
struct SaleEntry {
    u16 item;
    u16 result;
    u16 count;
};

/* The sale menu's work area (only the fields the list builder touches). */
struct SaleMenu {
    /* 0x00000 */ u8 unk00000[0x14];
    /* 0x00014 */ u8 rank;
    /* 0x00015 */ u8 unk00015[3];
    /* 0x00018 */ u32 seed;
    /* 0x0001C */ u8 unk0001C[0x364];
    /* 0x00380 */ u8 owner[4];
    /* 0x00384 */ u8 unk00384[0x4A4];
    /* 0x00828 */ u8 header[0x10];
    /* 0x00838 */ u8 headerShown;
    /* 0x00839 */ u8 unk00839[0x23];
    /* 0x0085C */ SaleWindow *window;
    /* 0x00860 */ u8 unk00860[0x8448];
    /* 0x09CA8 */ u8 list[0x74];
    /* 0x09D1C */ SaleEntry entries[0x2000];
    /* 0x15D1C */ u16 entryCount;
    /* 0x15D1E */ u8 unk15D1E[2];
    /* 0x15D20 */ s32 total;
};

/* A packed item word: id, flags (bit 1: percentage priced) and the percentage. */
struct PackedItem {
    u16 id;
    u16 flags;
};

extern "C" {
s32 sortCompareKeyPair(const void *left, const void *right);

u16 *FUN_002c0a2c(u8 rank, u32 seed);
s32 FUN_0028e9d0(u32 flag);
s32 FUN_0028fb3c(u32 flag);
void aocRecordLookup83(u32 flag);
u32 resolveWeightedItemChoice(u32 a, u32 b, u32 c, u32 d);
s32 FUN_0022f1b8(u32 item);
s32 aocItemGetPrice(PackedItem *item);
void FUN_002306f8(PackedItem *item, s32 count, s32 charge);
void FUN_002b7bca(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
void FUN_00233730(void *list, s32 a, u32 b, s32 c);
void listCursorSetPage(void *list, s32 page);
void FUN_00233670(void *p, s32 a, s32 b, s32 c);

/* Builds the sale list: every owned item between flags 0x3B7 and 0x47E is turned into a resolved
 * choice (counting duplicates), priced and removed from the inventory, then the list is sorted and
 * shown. */
void FUN_003a4210(SaleMenu *menu)
{
    menu->entryCount = 0;
    menu->total = 0;
    memClear(menu->entries, 0xC000);
    u16 *discount = FUN_002c0a2c(menu->rank, menu->seed);
    for (u32 flag = 0x3B7; flag < 0x47F; flag++) {
        if (!FUN_0028e9d0(flag))
            continue;
        s32 owned = FUN_0028fb3c(flag);
        for (s32 n = 0; n < owned; n++) {
            aocRecordLookup83(flag);
            u32 choice = resolveWeightedItemChoice(flag, 0xFFFF, 0xFFFF, 1);
            if (choice == 0)
                continue;
            u16 result = (u16)choice;
            if ((u16)flag != 0) {
                u32 index = 0;
                for (; index < menu->entryCount; index++) {
                    if (menu->entries[index].item == (u16)flag && menu->entries[index].result == result) {
                        menu->entries[index].count++;
                        break;
                    }
                }
                if (index == menu->entryCount) {
                    menu->entries[menu->entryCount].item = (u16)flag;
                    menu->entries[menu->entryCount].result = result;
                    menu->entries[menu->entryCount].count++;
                    menu->entryCount++;
                }
            }
            if (FUN_0022f1b8(choice)) {
                PackedItem packed;
                packed.id = result;
                packed.flags = 0;
                if (*discount != 0)
                    packed.flags = 2 | ((*discount & 0xFF) << 2);
                menu->total += aocItemGetPrice(&packed);
            }
        }
        PackedItem removed;
        removed.id = (u16)flag;
        removed.flags = 0;
        FUN_002306f8(&removed, -owned, 0);
    }
    FUN_002b7bca(menu->entries, menu->entryCount, 6, sortCompareKeyPair);
    FUN_00233730(menu->list, 10, menu->entryCount, 0);
    ((u8 *)menu)[0x9CB5] = 1;
    listCursorSetPage(menu->list, 1);
    menu->window->attach(menu->list);
    menu->window->flags |= 0x1000;
    menu->window->owner = menu->owner;
    FUN_00233670(menu->header, 0x2B, 0x28, 10);
    menu->headerShown = 1;
}

} /* extern "C" */
