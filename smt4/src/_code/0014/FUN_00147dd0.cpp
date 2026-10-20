#include "common.h"

extern "C" {

extern struct {
    u8 unk00[2];
    s8 unk02;
} g_nngxState;

s32 FUN_00147dd0(void)
{
    return g_nngxState.unk02;
}

} /* extern "C" */
