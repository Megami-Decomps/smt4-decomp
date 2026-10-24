/* NON_MATCHING: retail recomputes the masked counter index (and #255) before each counter access instead of once; the nop{0} positions follow from that. */
#include "common.h"

extern "C" {

/* The counter block: current values at 0 and maximum values at 0x200, one word per counter. */
struct GameCounters {
    /* 0x000 */ u32 current[128];
    /* 0x200 */ u32 maximum[128];
};

GameCounters *gameGetCounters(void);
u32 scrGetArg(u32 index);

/* Script command: raises counter #arg0 (and its maximum) to arg1 when it is lower. */
u32 FUN_00331550(void)
{
    u32 counter = scrGetArg(0);
    u32 value = scrGetArg(1);

    if (gameGetCounters()->current[counter & 0xFF] < value) {
        gameGetCounters()->current[counter & 0xFF] = value;
    }
    gameGetCounters();
    if (gameGetCounters()->maximum[counter & 0xFF] < value) {
        gameGetCounters()->maximum[counter & 0xFF] = value;
    }
    return 1;
}

} /* extern "C" */
