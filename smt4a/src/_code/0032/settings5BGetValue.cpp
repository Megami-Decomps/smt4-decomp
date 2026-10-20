#include "shard/Shard0032.h"

extern "C" {

extern Settings5B g_gfxSettings;

s32 settings5BGetValue(void)
{
    return g_gfxSettings.value;
}

} /* extern "C" */
