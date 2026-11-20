/* NON_MATCHING: the duration add, the element base address and the clamp match retail, and the branch layout too (category 8 tested with ==); retail keeps no zero register (state/frame zeros materialised where stored, the last four words as two stm pairs) where the build hoists one zero into r8. */
#include "gamedata/EquipmentSortPower.h"
#include "shard/W6_W6Match4_FlaggedValueHolder.h"

struct SelectionRollGroup {
    u16 values[0x801];
};
struct SelectionRollWork {
    u32 unk00;
    u32 mode;
    u32 state;
    u8 unk0C[0x854];
    s32 category;
    u32 unk864;
    u32 hasResult;
    s32 result;
    u32 frame;
    s32 duration;
    u8 unk878[8];
    FlaggedValueHolder holders[9];
    SelectionRollGroup groups[9];
};
extern "C" {
s32 flaggedEntryGetValueByState(FlaggedValueHolder *);
s32 flaggedValueHolderGetTotal(FlaggedValueHolder *);
u32 shopSlotGetPrice(u16 *);
s32 btlRollClamped(u16, u32);
s32 playerSlotHoldsEntry(SelectionRollWork *, u16);
}

/* Enters `mode` and sets up the quantity selection for the highlighted item: up to the owned count
 * (category 8) or the affordable count. */
extern "C" void FUN_0022e648(SelectionRollWork *work, u32 mode)
{
    work->state = 0;
    work->mode = mode;
    s32 duration = flaggedEntryGetValueByState(&work->holders[work->category]);
    duration = (work->category == 7 || work->category == 8) ? duration + 1 : duration + 2;
    u16 *values = work->groups[work->category].values;
    s32 selected = flaggedValueHolderGetTotal(&work->holders[work->category]);
    u16 *entry = &values[selected * 2];
    s32 result;
    if (work->category == 8) {
        s32 value = itemGetOwnedCount(*entry);
        if (value < 0) {
            value = 0;
        } else if (value > 99) {
            value = 99;
        }
        result = value;
        if (playerSlotHoldsEntry(work, *entry)) {
            --result;
        }
    } else {
        result = btlRollClamped(*entry, shopSlotGetPrice(entry));
    }
    work->hasResult = result != 0;
    work->result = result;
    work->frame = 0;
    work->duration = duration;
}
