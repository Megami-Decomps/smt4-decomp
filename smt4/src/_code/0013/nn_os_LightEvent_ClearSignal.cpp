/* NON_MATCHING: strex status register in the state == 0 loop */
#include "shard/S1NnOs.h"

extern "C" {

void nn_os_SimpleLock_Lock(s32 *lock);
void FUN_00139650(s32 *lock);

/* Clear a light event; a signaled one is cleared under its lock. */
void nn_os_LightEvent_ClearSignal(LightEvent *event)
{
    if (event->state == 1) {
        s32 *lock = &event->lock;
        nn_os_SimpleLock_Lock(lock);
        do {
            __ldrex(&event->state);
        } while (__strex(-2, &event->state));
        FUN_00139650(lock);
    } else if (event->state == 0) {
        do {
            __ldrex(&event->state);
        } while (__strex(-1, &event->state));
    }
}

} /* extern "C" */
