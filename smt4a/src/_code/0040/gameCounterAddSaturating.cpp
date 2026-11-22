#include "common.h"

extern "C" {

typedef struct CounterTables {
    /* 0x000 */ u32 total[0x80];
    /* 0x200 */ u32 session[0x80];
} CounterTables;

extern CounterTables *gameGetCounters(void);
extern void questCenterCounterAddSaturating1A(u32 amount);
extern void gameAddPointsClamped(u32 amount);
extern void questCenterCounterAddSaturating14(u32 amount);
extern void questCenterAddPoints(u32 amount);

/* Adds `amount` to counter `index` in both tables (saturating) and notifies the feature that
 * tracks the counters 2, 9, 0x13 and 0x26. */
void gameCounterAddSaturating(s32 index, u32 amount)
{
    u32 *total = &gameGetCounters()->total[index];
    if (~*total > amount) {
        *total = *total + amount;
    } else {
        *total = 0xFFFFFFFF;
    }
    u32 *session = &gameGetCounters()->session[index];
    if (~*session > amount) {
        *session = *session + amount;
    } else {
        *session = 0xFFFFFFFF;
    }
    switch (index) {
    case 2:
        questCenterCounterAddSaturating14(amount);
        return;
    case 9:
        questCenterAddPoints(amount);
        return;
    case 0x13:
        questCenterCounterAddSaturating1A(amount);
        return;
    case 0x26:
        gameAddPointsClamped(amount);
        return;
    }
}

} /* extern "C" */
