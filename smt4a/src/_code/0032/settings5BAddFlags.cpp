#include "shard/Shard0032.h"
#include "gfx/GfxSettings.h"

extern "C" {

void settings5BAddFlags(u32 flags)
{
    g_gfxSettings.flags |= flags;
}

} /* extern "C" */
