/* NON_MATCHING: compiler schedules both constant loads before the stores instead of reusing r1. */
#include "common.h"
struct WorkState { u32 value; u8 active; };
/* Resets the stored value and activates the work. */
extern "C" void FUN_002fd020(WorkState *work) {
    work->value = 0;
    work->active = 1;
}
