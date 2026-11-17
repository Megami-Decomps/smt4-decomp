#include "shard/Shard0032.h"
#include "gfx/GfxSettings.h"

extern "C" {

void settings5BSetValue(s8 value)
{
    g_gfxSettings.ready = value;
}

} /* extern "C" */
