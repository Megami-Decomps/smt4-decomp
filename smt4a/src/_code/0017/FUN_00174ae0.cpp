#include "nw/snd/TaskThreadState.h"
#include <new>

extern "C" {

extern u32 DAT_005c0f94;
extern TaskThreadState DAT_0064717c;
extern u8 entry;

s32 __cxa_guard_acquire(u32 *guard);
__weak void __cxa_guard_release(u32 *guard);
s32 __aeabi_atexit(void *object, void (*destructor)(void *), void *module);
void FUN_001906cc(void *object);

/* Returns the sound task thread, constructing it and registering its destructor on first use. */
TaskThreadState *FUN_00174ae0(void)
{
    if ((DAT_005c0f94 & 1) == 0 && __cxa_guard_acquire(&DAT_005c0f94) != 0) {
        new (&DAT_0064717c) TaskThreadState;
        __aeabi_atexit(&DAT_0064717c, FUN_001906cc, &entry);
        __cxa_guard_release(&DAT_005c0f94);
    }
    return &DAT_0064717c;
}

} /* extern "C" */
