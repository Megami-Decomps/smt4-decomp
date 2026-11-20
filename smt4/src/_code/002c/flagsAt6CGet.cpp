#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0x6C];
    u8 unk6C;
} g_quadColorState;

u8 flagsAt6CGet(void)
{
    return g_quadColorState.unk6C;
}

} /* extern "C" */
