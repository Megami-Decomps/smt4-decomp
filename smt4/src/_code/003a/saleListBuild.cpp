/* NON_MATCHING: 259 lines. The entry search is written in place (a single-use add helper with the quantity as a
 * parameter scored 190, but had no evidence besides the diff, wave 74). The flow, the item references and the list calls are retail's. Retail reaches the sale entries through a base at +0x9D1C (count at that base + 0xC000), keeps the menu, the discount counter and the total's address in stack slots (a 72-byte frame, the menu pushed with the saved registers) where this build keeps them in registers. */
#include "code/Code0022_Smt4.h"
#include "gamedata/EquipmentSortPower.h"
#include "common.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "gamedata/AocItemRef.h"

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

/* The cursor of the sale list window (0x74 bytes). */
struct SaleListCursor {
    /* 0x00 */ u8 unk00[0xD];
    /* 0x0D */ u8 enabled;
    /* 0x0E */ u8 unk0E[0x66];
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
    /* 0x09CA8 */ SaleListCursor list;
    /* 0x09D1C */ SaleEntry entries[0x2000];
    /* 0x15D1C */ u16 entryCount;
    /* 0x15D1E */ u8 unk15D1E[2];
    /* 0x15D20 */ s32 total;
};

extern "C" {
s32 sortCompareKeyPair(const void *left, const void *right);

u16 *statisticsGetCounter(u8 bank, u32 row, u32 column);
s32 FUN_0028e9d0(u32 flag);
void aocRecordLookup83(u32 flag);
u32 resolveWeightedItemChoice(u32 a, u32 b, u32 c, u32 d);
s32 aocItemGetPrice(const AocItemRef *item);
void inventoryApplyTransaction(const AocItemRef *item, s32 quantity, s32 settleMoney);
void qsort(void *base, u32 count, u32 size, s32 (*compare)(const void *, const void *));
void listScrollerInitialize(SaleListCursor *list, s32 rows, s32 count, s32 current, s32 first, s32 second);
void listCursorSetPage(SaleListCursor *list, s32 page);
void messageIdListInit(void *p, s32 a, s32 b, s32 c);

/* Builds the sale list: every owned item between flags 0x3B7 and 0x47E is turned into a resolved
 * choice (counting duplicates), priced and removed from the inventory, then the list is sorted and
 * shown. */
void saleListBuild(SaleMenu *menu)
{
    menu->entryCount = 0;
    menu->total = 0;
    memClear(menu->entries, 0xC000);
    u16 *discount = statisticsGetCounter(menu->rank, menu->seed, menu->rank == 0 ? 6 : 1);
    for (u32 flag = 0x3B7; flag <= 0x47E; flag++) {
        if (!FUN_0028e9d0(flag))
            continue;
        s32 owned = itemGetOwnedCount(flag);
        for (s32 n = 0; n < owned; n++) {
            aocRecordLookup83(flag);
            u32 choice = resolveWeightedItemChoice(flag, 0xFFFF, 0xFFFF, 1);
            if (choice == 0)
                continue;
            u16 result = (u16)choice;
            /* count it into its entry, or append a new one */
            s32 index;
            for (index = 0; index < menu->entryCount; index++) {
                if (menu->entries[index].item == flag && menu->entries[index].result == result) {
                    menu->entries[index].count++;
                    break;
                }
            }
            if (index == menu->entryCount) {
                menu->entries[menu->entryCount].item = flag;
                menu->entries[menu->entryCount].result = result;
                menu->entries[menu->entryCount].count++;
                menu->entryCount++;
            }
            if (aocEntryIsKindTen(choice)) {
                AocItemRef item;
                item.unk02Bit0 = 0;
                item.scaled = 0;
                item.percent = 0;
                item.id = result;
                if (*discount != 0) {
                    item.scaled = 1;
                    item.percent = *discount;
                }
                menu->total += aocItemGetPrice(&item);
            }
        }
        AocItemRef removed;
        removed.unk02Bit0 = 0;
        removed.scaled = 0;
        removed.percent = 0;
        removed.id = flag;
        inventoryApplyTransaction(&removed, -owned, 0);
    }
    qsort(menu->entries, menu->entryCount, 6, sortCompareKeyPair);
    listScrollerInitialize(&menu->list, 10, menu->entryCount, 0, 1, 1);
    asdDebugHookPtrInt(&menu->list, 1);
    menu->list.enabled = 1;
    listCursorSetPage(&menu->list, 1);
    menu->window->attach(&menu->list);
    menu->window->flags |= 0x1000;
    menu->window->owner = menu->owner;
    messageIdListInit(menu->header, 0x2B, 0x28, 10);
    menu->headerShown = 1;
}

} /* extern "C" */
