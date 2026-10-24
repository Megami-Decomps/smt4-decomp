/* NON_MATCHING: readable rebuild of the item-sale list builder; retail hoists the list base (+0x9FFC), the counter address and the price accumulator address into callee-saved registers and builds the packed item word in a stack slot with piece moves, which armcc here allocates differently. */
#include "common.h"

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
    /* 0x00000 */ u8 unk00000[0x18];
    /* 0x00018 */ u8 rank;
    /* 0x00019 */ u8 unk00019[3];
    /* 0x0001C */ u32 seed;
    /* 0x00020 */ u8 unk00020[0xA88];
    /* 0x00AA8 */ u8 unk0AA8[0x60];
    /* 0x00B08 */ u8 unk0B08[0x10];
    /* 0x00B18 */ u8 unk0B18;
    /* 0x00B19 */ u8 unk0B19[0x23];
    /* 0x00B3C */ SaleWindow *window;
    /* 0x00B40 */ u8 unk0B40[0x9448];
    /* 0x09F88 */ u8 list[0x74];
    /* 0x09FFC */ SaleEntry entries[0x2000];
    /* 0x15FFC */ u16 entryCount;
    /* 0x15FFE */ u8 unk15FFE[2];
    /* 0x16000 */ s32 total;
};

/* A packed item word: id, flags (bit 1: percentage priced) and the percentage. */
struct PackedItem {
    u16 id;
    u16 flags;
};

extern "C" {
extern u8 LAB_00494398;

void sysMemClear(void *block, u32 bytes);
u16 *FUN_00145f04(u8 rank, u32 seed);
s32 FUN_00481100(u32 flag);
s32 FUN_001ba3d0(u32 flag);
void aocRecordLookup83(u32 flag);
u32 resolveWeightedItemChoice(u32 a, u32 b, u32 c, u32 d);
s32 FUN_0049cab8(u32 item);
s32 aocItemGetPrice(PackedItem *item);
void FUN_0049cd18(PackedItem *item, s32 count, s32 charge);
void qsort(void *base, u32 count, u32 size, void *compare);
void FUN_004cfeb0(void *list, s32 a, u32 b, s32 c);
void listCursorSetPage(void *list, s32 page);
void FUN_004d05c4(void *p, s32 a, s32 b, s32 c);

/* Builds the sale list: every owned item between flags 0x3B7 and 0x47E is turned into a resolved
 * choice (counting duplicates), priced and removed from the inventory, then the list is sorted and
 * shown. */
void FUN_0049a5b4(SaleMenu *menu)
{
    menu->entryCount = 0;
    menu->total = 0;
    sysMemClear(menu->entries, 0xC000);
    u16 *discount = FUN_00145f04(menu->rank, menu->seed);
    for (u32 flag = 0x3B7; flag < 0x47F; flag++) {
        if (!FUN_00481100(flag))
            continue;
        s32 owned = FUN_001ba3d0(flag);
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
            if (FUN_0049cab8(choice)) {
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
        FUN_0049cd18(&removed, -owned, 0);
    }
    qsort(menu->entries, menu->entryCount, 6, &LAB_00494398);
    FUN_004cfeb0(menu->list, 10, menu->entryCount, 0);
    ((u8 *)menu)[0x9F95] = 1;
    listCursorSetPage(menu->list, 1);
    menu->window->attach(menu->list);
    menu->window->flags |= 0x1000;
    menu->window->owner = (u8 *)menu + 0x3A4;
    FUN_004d05c4((u8 *)menu + 0xB08, 0x20, 0x28, 10);
    menu->unk0B18 = 1;
}

} /* extern "C" */
