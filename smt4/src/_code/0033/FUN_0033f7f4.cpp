/* NON_MATCHING: retail address formation or grouped state stores differ. */
#include "common.h"
__packed struct SaveCounters {
    u32 first;
    u32 second;
    u32 third;
    u32 fourth;
    u16 fifth;
};
__packed struct SaveState {
    /* 0x00000 */ u8 unk00[0x1f872];
    /* 0x1f872 */ SaveCounters counters;
};
extern "C" {
SaveState *gameDataBlocksGetSaveData();
/* Clears the packed save counters. */
void FUN_0033f7f4()
{
    SaveCounters *counters = &gameDataBlocksGetSaveData()->counters;
    counters->first = 0;
    counters->second = 0;
    counters->third = 0;
    counters->fourth = 0;
    counters->fifth = 0;
}
}
