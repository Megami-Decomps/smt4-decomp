#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "gfx/GfxSettings.h"

extern "C" {

/* Clears the bits of `mask` in the system flags word. */
void settings5BClearFlags(u32 mask)
{
    g_gfxSettings.flags = g_gfxSettings.flags & ~mask;
}

} /* extern "C" */
