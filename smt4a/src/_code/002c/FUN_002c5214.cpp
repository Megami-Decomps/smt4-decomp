#include "common.h"
#include "shard/W6_W6Match3_FilterTexture.h"
#include "code/Code0040_Smt4a.h"

extern "C" {

typedef struct GameCounters {
    u32 current[128]; /* 0x000 */
    u32 total[128];   /* 0x200 */
} GameCounters;

GameCounters *gameGetCounters(void);
s32 scrGetArg(u32 index);
void questCenterAddPoints(u32 amount);
void gameAddPointsClamped(u32 amount);

/* gameCounterAddSaturating's body, inlined here: adds amount to counter kind in both tables (saturating) and
 * notifies the systems that track the counters 2, 9, 19 and 38. */
static __inline void gameCountersAddPoints(s32 kind, u32 amount)
{
    u32 *current = &gameGetCounters()->current[kind];
    if (~*current > amount) {
        *current = *current + amount;
    } else {
        *current = 0xFFFFFFFF;
    }
    u32 *total = &gameGetCounters()->total[kind];
    if (~*total > amount) {
        *total = *total + amount;
    } else {
        *total = 0xFFFFFFFF;
    }
    switch (kind) {
    case 2:
        questCenterCounterAddSaturating14(amount);
        return;
    case 9:
        questCenterAddPoints(amount);
        return;
    case 19:
        questCenterCounterAddSaturating1A(amount);
        return;
    case 38:
        gameAddPointsClamped(amount);
        return;
    }
}

/* Script command: adds arg1 to game counter arg0. */
s32 FUN_002c5214(void)
{
    u32 kind = scrGetArg(0);
    u32 amount = scrGetArg(1);

    gameCountersAddPoints((u8)kind, amount);
    return 1;
}

} /* extern "C" */
