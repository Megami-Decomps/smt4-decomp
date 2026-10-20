#include "common.h"

extern "C" {

extern struct {
    u8 unk000[0x1C8];
    u32 unk1C8;
} g_asdGxPresets;

u32 FUN_002c5210(void)
{
    return g_asdGxPresets.unk1C8;
}

} /* extern "C" */
