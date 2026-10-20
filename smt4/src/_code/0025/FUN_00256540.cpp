#include "common.h"

extern "C" {

extern struct {
    u8 unk00[0x18];
    u32 unk18;
} g_titleFlags;

u32 FUN_00256540(void)
{
    return g_titleFlags.unk18;
}

} /* extern "C" */
