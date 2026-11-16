/* NON_MATCHING: the reset block now matches through its sub-struct pointer; retail copies current to previous through one pooled 0x986C offset (ldr [r2, r0], add #4), this build forms both addresses with separate add pairs. */
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
extern void FUN_00334e18(void *state);

/* Saves the current history value, clears the reset region and refreshes it. */
void FUN_001dd930(void)
{
    HistoryData *data = g_gameDataBlocks.data;
    data->previous = data->current;
    HistoryReset *reset = &data->reset;
    reset->first = 0;
    reset->second = 0;
    reset->third = 0;
    reset->fourth = 0;
    reset->count = 0;
    FUN_00334e18(reset);
}

} /* extern "C" */
