#include "shard/Shard0032.h"

extern "C" {

extern Settings5B g_gfxSettings;

void settings5BClearFlags(u32 mask)
{
    g_gfxSettings.flags &= ~mask;
}

} /* extern "C" */
