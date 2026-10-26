#include "common.h"

extern "C" {

u8 *_ZN9Obj421f54C1Ev(u8 *object);
void FUN_00376968(u8 *item);
u8 *__aeabi_vec_ctor_nocookie_nodtor(u8 *member, void (*constructor)(u8 *), s32 size, s32 count);

/* Initializes the owner, then constructs its eight embedded work items (0x20 onwards, 4 bytes each); returns the owner. */
u8 *FUN_0034068c(u8 *owner)
{
    u8 *object = _ZN9Obj421f54C1Ev(owner);

    return __aeabi_vec_ctor_nocookie_nodtor(object + 0x20, FUN_00376968, 4, 8) - 0x20;
}

} /* extern "C" */
