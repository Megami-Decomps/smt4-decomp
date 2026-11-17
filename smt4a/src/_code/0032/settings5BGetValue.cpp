#include "shard/Shard0032.h"
#include "gfx/GfxSettings.h"

extern "C" {

s32 settings5BGetValue(void)
{
    return g_gfxSettings.ready;
}

} /* extern "C" */
