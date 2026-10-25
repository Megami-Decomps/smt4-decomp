/* NON_MATCHING: kind/amount registers swapped (r4/r5) and the first saturating add uses r2/r3 instead of r0/r2 */
#include "common.h"
#include "shard/W6_W6Match3_FilterTexture.h"

extern "C" {

typedef struct GameCounters {
    u32 current[128]; /* 0x000 */
    u32 total[128];   /* 0x200 */
} GameCounters;

GameCounters *gameGetCounters(void);
s32 scrGetArg(u32 index);
void FUN_0040a3c8(u32 amount);
void questCenterAddPoints(u32 amount);
void gameAddPointsClamped(u32 amount);

/* Adds amount to a counter, saturating at 0xFFFFFFFF. */
static __inline void gameCounterAdd(u32 *counter, u32 amount)
{
    if (~*counter > amount) {
        *counter += amount;
    } else {
        *counter = 0xFFFFFFFF;
    }
}

/* Adds amount to counter kind (current and total), forwarding some counters to their systems. */
static __inline void gameCountersAddPoints(u8 kind, u32 amount)
{
    gameCounterAdd(&gameGetCounters()->current[kind], amount);
    gameCounterAdd(&gameGetCounters()->total[kind], amount);
    switch (kind) {
    case 2:
        FUN_0040a3c8(amount);
        break;
    case 9:
        questCenterAddPoints(amount);
        break;
    case 19:
        FUN_0040a378(amount);
        break;
    case 38:
        gameAddPointsClamped(amount);
        break;
    }
}

/* Script command: adds arg1 to game counter arg0. */
s32 FUN_002c5214(void)
{
    u32 kind = scrGetArg(0);
    u32 amount = scrGetArg(1);

    gameCountersAddPoints(kind, amount);
    return 1;
}

} /* extern "C" */
