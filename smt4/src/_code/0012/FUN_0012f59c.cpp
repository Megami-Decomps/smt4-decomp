#include "common.h"

extern "C" {

extern struct {
    u8 unk00;
    s8 unk01;
} g_nwSoundSystemInitFlags;

s32 FUN_0012f59c(void)
{
    return g_nwSoundSystemInitFlags.unk01;
}

} /* extern "C" */
