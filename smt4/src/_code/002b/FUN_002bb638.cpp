#include "common.h"

extern "C" {

extern struct {
    u8 unk0[2];
    s8 unk2;
} DAT_0044e360;

s32 FUN_002bb638(void)
{
    return DAT_0044e360.unk2;
}

} /* extern "C" */
