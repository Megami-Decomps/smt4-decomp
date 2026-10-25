#include "shard/Sys464af0.h"
#include "AsdSDK/Source/Gfx/EffectEditor/EffectEditor.h"

extern "C" {

/* Sets the bits of `mask` in the system flags word. */
void sysFlagsSetBits(u32 mask)
{
    g_gfxSettings.unk08 = mask | g_gfxSettings.unk08;
}

} /* extern "C" */
