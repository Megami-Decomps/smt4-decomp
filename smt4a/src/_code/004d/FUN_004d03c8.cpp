#include "shard/Shard004D.h"

extern "C" {

extern u32 FUN_00167c14(u32 *a, u32 *b, s32 mode);

void FUN_004d03c8(u32 *a, u32 *b)
{
    FUN_00167c14(a, b, 1);
}

} /* extern "C" */
