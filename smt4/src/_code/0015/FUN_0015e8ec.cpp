#include "common.h"

extern "C" {

extern struct {
    u8 unk0[4];
    s8 unk4;
} DAT_0044e7c0;

s32 FUN_0015e8ec(void)
{
    return DAT_0044e7c0.unk4;
}

} /* extern "C" */
