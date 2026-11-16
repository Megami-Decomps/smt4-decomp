#include "common.h"

extern "C" {

extern struct {
    u8 unk0[4];
    s8 unk4;
} g_sndSystemState;

s32 FUN_0015e8ec(void)
{
    return g_sndSystemState.unk4;
}

} /* extern "C" */
