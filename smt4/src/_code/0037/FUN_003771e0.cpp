#include "common.h"

extern "C" {

extern u8 DAT_004219c4;
extern const void **FUN_0037b4b0(u32 a, u32 b);

void FUN_003771e0(u32 a)
{
    const void **object = FUN_0037b4b0(a, 0);

    *object = &DAT_004219c4;
}

} /* extern "C" */
