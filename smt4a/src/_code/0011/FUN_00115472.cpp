#include "common.h"

extern "C" {

/* Adds the value (offset 0x10) of `dx` to the field at 8 of `self` and that of `dy` to the field at 0xC. */
void FUN_00115472(u32 self, u32 dx, u32 dy)
{
    *(s32 *)(self + 8) = *(s32 *)(dx + 0x10) + *(s32 *)(self + 8);
    *(s32 *)(self + 0xc) = *(s32 *)(dy + 0x10) + *(s32 *)(self + 0xc);
}

} /* extern "C" */
