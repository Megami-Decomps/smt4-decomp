/* NON_MATCHING: register allocation only: retail keeps the index in r5 and the amount in r4 (built: r4/r5). */
#include "common.h"

extern "C" {

typedef struct CounterTables {
    /* 0x000 */ u32 total[0x80];
    /* 0x200 */ u32 session[0x80];
} CounterTables;

extern CounterTables *gameGetCounters(void);
extern void FUN_0040a378(u32 amount);
extern void FUN_0040a3a0(u32 amount);
extern void FUN_0040a3c8(u32 amount);
extern void questCenterAddPoints(u32 amount);

static __inline void counterAdd(u32 *counter, u32 amount)
{
    if (amount < ~*counter) {
        *counter = *counter + amount;
    } else {
        *counter = 0xFFFFFFFF;
    }
}

/* Adds `amount` to counter `index` in both tables (saturating) and notifies the feature that
 * tracks the counters 2, 9, 0x13 and 0x26. */
void FUN_00408184(s32 index, u32 amount)
{
    counterAdd(&gameGetCounters()->total[index], amount);
    counterAdd(&gameGetCounters()->session[index], amount);
    if (index == 2) {
        FUN_0040a3c8(amount);
    } else if (index == 9) {
        questCenterAddPoints(amount);
    } else if (index == 0x13) {
        FUN_0040a378(amount);
    } else if (index == 0x26) {
        FUN_0040a3a0(amount);
    }
}

} /* extern "C" */
