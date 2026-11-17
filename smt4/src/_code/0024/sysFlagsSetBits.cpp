#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"
#include "gfx/GfxSettings.h"

extern "C" {

/* Sets the bits of `mask` in the system flags word. */
void sysFlagsSetBits(u32 mask)
{
    g_gfxSettings.flags = mask | g_gfxSettings.flags;
}

} /* extern "C" */
