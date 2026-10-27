/* NON_MATCHING: frame, pushed registers and control flow match; remaining: the kind-1 path (slot-record tail call) is placed after the common call in retail but inline here, and two loads are scheduled in another order. */
#include "ui/ItemListSelection.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"

struct ItemListDetailRecord {
    u32 unk00;
    u16 id;
    u8 unk06[0x1a];
};
// The record ID and array lie beyond the shared selection-owner prefix.
struct ItemListDetailOwnerView {
    u8 unk000[0x20];
    FlaggedValueHolder selection;
    u8 unk094[0x7cc];
    s8 useSlotRecord;
    s8 detailKind;
    u8 unk862[2];
    ItemListDetailRecord records[1];
};
typedef char ItemListDetailLayoutCheck[sizeof(ItemListDetailRecord) == 0x20 &&
    offsetof(ItemListDetailRecord, id) == 4 &&
    offsetof(ItemListDetailOwnerView, selection) == 0x20 &&
    offsetof(ItemListDetailOwnerView, useSlotRecord) == 0x860 &&
    offsetof(ItemListDetailOwnerView, detailKind) == 0x861 &&
    offsetof(ItemListDetailOwnerView, records) == 0x864 ? 1 : -1];

extern "C" {
s32 flaggedValueHolderGetTotal(FlaggedValueHolder *holder);
SlotTableEntry *slotRecordFindById(u32 id);
void FUN_0035ad50(u32 id, SlotTableEntry *record);
u32 FUN_002a4b28(u16 id);
void FUN_0032d0c8(u32 screen, u32 kind, u16 id, const SlotTableEntry *record);

static inline u16 itemListGetSelectedDetailId(ItemListDetailRecord *records, FlaggedValueHolder *selection)
{
    return records[flaggedValueHolderGetTotal(selection)].id;
}

void FUN_0032cfe0(ItemListSelectionOwner *owner)
{
    ItemListDetailOwnerView *work = (ItemListDetailOwnerView *)owner;
    ItemListDetailRecord *records = work->records;
    SlotTableEntry record;
    s16 id = (s16)itemListGetSelectedDetailId(records, &work->selection);
    if (work->useSlotRecord) {
        id = (s16)itemListGetSelectedDetailId(records, &work->selection);
        if (work->detailKind == 1) {
            SlotTableEntry *slot = slotRecordFindById((u16)id);
            // Retail's corresponding tail call falls through into the adjacent renderer.
            FUN_0032d0c8(0, 1, (u16)id, slot);
            return;
        }
        FUN_0035ad50((u16)id, &record);
    } else {
        FUN_0035ad50((u16)id, &record);
        if (FUN_002a4b28((u16)id) == 0) {
            FUN_0032d0c8(0, 2, (u16)id, &record);
            return;
        }
    }
    FUN_0032d0c8(0, 1, (u16)id, &record);
}
}
