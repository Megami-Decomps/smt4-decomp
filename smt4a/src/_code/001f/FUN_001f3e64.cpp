#include "common.h"

extern "C" {

extern u8 DAT_006416a8[];
extern void _ZN12KernelHandleD1Ev(void *record);
extern void FUN_002e56f8(void *array, void (*initialize)(void *), u32 stride, u32 count);

/* Initializes the static array of four-byte records. */
void FUN_001f3e64(void)
{
    FUN_002e56f8(DAT_006416a8, _ZN12KernelHandleD1Ev, 4, 3);
}

} /* extern "C" */
