#include "common.h"

extern "C" {

extern u8 DAT_004dace0[];
extern void FUN_00361a14(void *record);
extern void FUN_002c66c4(void *array, void (*initialize)(void *), u32 stride, u32 count);

/* Initializes the static array of sixty-four-byte records. */
void FUN_0017f6cc(void)
{
    FUN_002c66c4(DAT_004dace0, FUN_00361a14, 64, 2);
}

} /* extern "C" */
