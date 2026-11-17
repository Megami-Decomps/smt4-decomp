#include "shard/Shard0032.h"
#include "gfx/GfxSettings.h"

extern "C" {

void settings5BClearFlags(u32 mask)
{
    g_gfxSettings.flags &= ~mask;
}

} /* extern "C" */
