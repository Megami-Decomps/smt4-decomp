#include "common.h"

extern "C" {

/* The counter block: current values at 0 and maximum values at 0x200, one word per counter. */
struct GameCounters {
    /* 0x000 */ u32 current[128];
    /* 0x200 */ u32 maximum[128];
};

GameCounters *gameGetCounters(void);
u32 scrGetArg(u32 index);

static __inline u32 *counterCurrent(u8 counter)
{
    return &gameGetCounters()->current[counter];
}

static __inline u32 *counterMaximum(u8 counter)
{
    return &gameGetCounters()->maximum[counter];
}

/* Script command: raises counter #arg0 (and its maximum) to arg1 when it is lower. */
u32 FUN_00331550(void)
{
    u32 counter = scrGetArg(0);
    u32 value = scrGetArg(1);

    if (*counterCurrent(counter) < value) {
        *counterCurrent(counter) = value;
    }
    u8 index = counter;
    gameGetCounters();
    if (*counterMaximum(index) < value) {
        *counterMaximum(index) = value;
    }
    return 1;
}

} /* extern "C" */
