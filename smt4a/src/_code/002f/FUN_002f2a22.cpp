#include "common.h"
extern "C" {
struct MutexGuard { u8 storage[0x10]; };
MutexGuard *FUN_002e6e34(MutexGuard *guard, void *mutex);
void _ZN9Obj55b28cD1Ev(MutexGuard *guard);
void FUN_002f9fd4(void *object, void *argument);
/* Executes the operation while holding the object's mutex. */
void FUN_002f2a22(u32 *object, u32 argument) {
    MutexGuard guard;
    FUN_002e6e34(&guard, object + 1);
    FUN_002f9fd4((void *)*object, (void *)&argument);
    _ZN9Obj55b28cD1Ev(&guard);
}
}
