/* NON_MATCHING: compiler uses different stack-frame allocation and instruction scheduling. */
#include "common.h"
extern "C" {
struct MutexGuard { u8 storage[0x10]; };
MutexGuard *_ZN9Obj55b28cC1EPv(MutexGuard *guard, void *mutex);
void _ZN9Obj55b28cD1Ev(MutexGuard *guard);
void FUN_002fbb38(void *object, void *argument);
/* Executes the operation while holding the object's mutex. */
void FUN_002ff78c(u32 *object, void *argument) {
    MutexGuard guard;
    _ZN9Obj55b28cC1EPv(&guard, object + 1);
    FUN_002fbb38(argument, (u8 *)object + 0x34);
    _ZN9Obj55b28cD1Ev(&guard);
}
}
