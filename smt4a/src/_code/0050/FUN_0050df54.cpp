#include "common.h"
struct GlobalState { u32 state; u8 active; };
extern "C" {
extern GlobalState DAT_005b3fa8;
extern u32 DAT_005b3f9c;
extern u8 entry;
void _ZN9Obj2fd02aD1Ev(void *object);
void _ZN12KernelHandleD1Ev(void *object);
s32 __aeabi_atexit(void *object, void (*destroy)(void *), void *module);

/* Initializes both module states and registers their finalizers. */
void FUN_0050df54(void)
{
    DAT_005b3f9c = 0;
    __aeabi_atexit(&DAT_005b3f9c, _ZN12KernelHandleD1Ev, &entry);
    DAT_005b3fa8.state = 0;
    DAT_005b3fa8.active = 1;
    __aeabi_atexit(&DAT_005b3fa8, _ZN9Obj2fd02aD1Ev, &entry);
}
}
