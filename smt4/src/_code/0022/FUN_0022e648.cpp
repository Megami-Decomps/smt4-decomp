/* NON_MATCHING: selection-roll result stores are combined and category address registers differ. */
#include "nn/Result.h"
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
u32 FUN_00230e04(u16 *);
s32 btlRollClamped(u16, u32);
s32 FUN_0028fb3c(u16);
s32 FUN_00230b90(SelectionRollWork *, u16);
}

extern "C" void FUN_0022e648(SelectionRollWork *work, u32 mode)
{
    work->state = 0;
    work->mode = mode;
    s32 duration = flaggedEntryGetValueByState(&work->holders[work->category]);
    s32 category = work->category;
    duration += (category == 7 || category == 8) ? 1 : 2;
    s32 selected = flaggedValueHolderGetTotal(&work->holders[category]);
    u16 *entry = &work->groups[category].values[selected * 2];
    s32 result;
    if (work->category != 8) {
        result = btlRollClamped(*entry, FUN_00230e04(entry));
    } else {
        result = FUN_0028fb3c(*entry);
        if (nnResultIsFailure(result)) {
            result = 0;
        } else if (result >= 100) {
            result = 99;
        }
        if (FUN_00230b90(work, *entry)) {
            --result;
        }
    }
    work->hasResult = result != 0;
    work->result = result;
    work->frame = 0;
    work->duration = duration;
}
