#include "common.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

extern "C" {

extern struct {
    u8 unk000[0x1C0];
    u32 unk1C0;
} g_asdGxPresets;

u32 FUN_0010ec60(void)
{
    return g_asdGxPresets.unk1C0;
}

} /* extern "C" */
