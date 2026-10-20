/* NON_MATCHING: register allocation of the two exclusive-store loops (retail ldrex into r0, strex status r3) and the lock pointer copy */
#include "shard/S1NnOs.h"

extern "C" {

void FUN_001bd354(s32 *lock);
void FUN_001a09f4(s32 *lock);

/* Clear a light event; a signaled one is cleared under its lock. */
void nn_os_LightEvent_ClearSignal(LightEvent *event)
{
    if (event->state == 1) {
        s32 *lock = &event->lock;
        FUN_001bd354(lock);
        do {
            __ldrex(&event->state);
        } while (__strex(-2, &event->state));
        FUN_001a09f4(lock);
    } else if (event->state == 0) {
        do {
            __ldrex(&event->state);
        } while (__strex(-1, &event->state));
    }
}

} /* extern "C" */
