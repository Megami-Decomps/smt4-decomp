/* NON_MATCHING: retail loads the current value into r2 (offset in r2, previous address in r1) and keeps it there to the tail call;
 * this build swaps r1/r2. The twin smt4a FUN_00284fdc has the same swap (it matched only by passing (reset, 0, current)
 * to a callee that takes no arguments, a one-caller prototype; it is NON_MATCHING again). */
#include "common.h"

__packed struct HistoryReset {
    u32 first, second, third, fourth;
    u16 count;
};
struct HistoryData {
    /* 0x0000 */ u8 unk0000[0x981E];
    /* 0x981E */ HistoryReset reset;
    /* 0x9830 */ u8 unk9830[0x3C];
    /* 0x986C */ u32 current;
    /* 0x9870 */ u32 previous;
};
struct HistoryGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ HistoryData *data;
};

extern "C" {

extern HistoryGlobals g_gameDataBlocks;
void FUN_00334e18(void);

/* Zeroes the reset words and count (the twin, smt4a FUN_00284fdc, clears through the same helper). */
static __inline void resetClear(HistoryReset *state)
{
    state->first = 0;
    state->second = 0;
    state->third = 0;
    state->fourth = 0;
    state->count = 0;
}

/* Saves the current history value, clears the reset region and refreshes it. */
void FUN_001dd930(void)
{
    HistoryData *data = g_gameDataBlocks.data;
    data->previous = data->current;
    resetClear(&data->reset);
    FUN_00334e18();
}

} /* extern "C" */
