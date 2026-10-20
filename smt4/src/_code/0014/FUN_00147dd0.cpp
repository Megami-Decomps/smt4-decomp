#include "common.h"

extern "C" {

extern struct {
    u8 unk00[2];
    s8 unk02;
} DAT_00471a70;

s32 FUN_00147dd0(void)
{
    return DAT_00471a70.unk02;
}

} /* extern "C" */
