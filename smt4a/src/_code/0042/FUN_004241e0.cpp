/* NON_MATCHING: armcc hoists the 500000 ns sleep constant into r5 out of the loop; retail reloads it from the pool each iteration (everything else matches). */
#include "shard/ThreadControl.h"

extern "C" {
void svcSleepThread(s64 nanoseconds);
void nn_os_LightEvent_Signal(void *event);
void nn_os_CriticalSection_Enter(void *criticalSection);
void nn_os_CriticalSection_Leave(void *criticalSection);

// Request the worker's next active state and wait for success or a terminal state.
u32 FUN_004241e0(ThreadControl *control)
{
    if (control->state == 1 || control->state == 8) {
        s32 requested = 5;

        nn_os_CriticalSection_Enter(control->criticalSection);
        control->state = requested;
        nn_os_CriticalSection_Leave(control->criticalSection);
        nn_os_LightEvent_Signal(control->wakeEvent);
        for (;;) {
            if (control->state == 3) {
                return 1;
            }
            if (control->state == 7 || control->state == 1) {
                return 0;
            }
            svcSleepThread(500000);
        }
    }
    return 0;
}
}
