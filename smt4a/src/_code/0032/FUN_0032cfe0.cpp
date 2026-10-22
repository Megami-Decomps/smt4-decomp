/* NON_MATCHING: record-table base loads and slot-record tail-call placement differ from retail. */
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
    u8 useSlotRecord;
    u8 detailKind;
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

static inline u16 itemListGetSelectedDetailId(ItemListDetailOwnerView *work)
{
    return work->records[flaggedValueHolderGetTotal(&work->selection)].id;
}

void FUN_0032cfe0(ItemListSelectionOwner *owner)
{
    ItemListDetailOwnerView *work = (ItemListDetailOwnerView *)owner;
    s16 id = (s16)itemListGetSelectedDetailId(work);
    if (work->useSlotRecord) {
        id = (s16)itemListGetSelectedDetailId(work);
        if (work->detailKind == 1) {
            SlotTableEntry *slot = slotRecordFindById((u16)id);
            // Retail's corresponding tail call falls through into the adjacent renderer.
            FUN_0032d0c8(0, 1, (u16)id, slot);
        } else {
            SlotTableEntry record;
            FUN_0035ad50((u16)id, &record);
            FUN_0032d0c8(0, 1, (u16)id, &record);
        }
    } else {
        SlotTableEntry record;
        FUN_0035ad50((u16)id, &record);
        if (FUN_002a4b28((u16)id) == 0) {
            FUN_0032d0c8(0, 2, (u16)id, &record);
        } else {
            FUN_0032d0c8(0, 1, (u16)id, &record);
        }
    }
}
}
