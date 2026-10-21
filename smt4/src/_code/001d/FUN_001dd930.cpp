/* NON_MATCHING: instruction selection/order differs: retail add r1, r2, #4; compiler push {r4, r5, r6, r7}. */
#include "common.h"

__packed struct HistoryReset {
    u32 first, second, third, fourth;
    u16 count;
};
__packed struct HistoryData {
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
    data->reset.first = 0;
    data->reset.second = 0;
    data->reset.third = 0;
    data->reset.fourth = 0;
    data->reset.count = 0;
    FUN_00334e18(&data->reset);
}

} /* extern "C" */
