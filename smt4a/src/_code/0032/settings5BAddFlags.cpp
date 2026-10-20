#include "shard/Shard0032.h"

extern "C" {

extern Settings5B g_gfxSettings;

void settings5BAddFlags(u32 flags)
{
    g_gfxSettings.flags |= flags;
}

} /* extern "C" */
