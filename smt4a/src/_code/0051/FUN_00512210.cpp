/* NON_MATCHING: everything matches retail except that for the last registration retail loads the atexit arguments (r2, r1) after the event's two zero stores; the build loads them first (same residue as FUN_0050e2e0). */
#include "common.h"
#include "classes/KernelHandle.h"

struct ThreadState { u32 state; u8 active; };
struct AsdFileEvent { u32 first; u32 second; };

extern "C" {
extern KernelHandle DAT_006416a8[3];
extern ThreadState DAT_005b4454;
extern AsdFileEvent DAT_005b445c;
extern u8 entry;
void FUN_001f3e64(void *array);
void _ZN12KernelHandleC1Ev(void *object);
void _ZN9Obj2fd02aD1Ev(void *object);
void FUN_0042cd08(void *object);
void __aeabi_vec_ctor_nocookie_nodtor(void *array, void (*construct)(void *), u32 size, u32 count);
s32 __aeabi_atexit(void *object, void (*destroy)(void *), void *module);
}

/* Initializes the file module's handle array, thread state and event and registers their finalizers. */
extern "C" void FUN_00512210(void)
{
    __aeabi_vec_ctor_nocookie_nodtor(DAT_006416a8, _ZN12KernelHandleC1Ev, 4, 3);
    __aeabi_atexit(0, FUN_001f3e64, &entry);
    DAT_005b4454.state = 0;
    DAT_005b4454.active = 1;
    __aeabi_atexit(&DAT_005b4454, _ZN9Obj2fd02aD1Ev, &entry);
    DAT_005b445c.first = 0;
    DAT_005b445c.second = 0;
    __aeabi_atexit(&DAT_005b445c, FUN_0042cd08, &entry);
}
