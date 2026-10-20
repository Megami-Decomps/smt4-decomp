#include "shard/Shard0032.h"

extern "C" {

extern Settings5B g_gfxSettings;

void settings5BSetValue(s8 value)
{
    g_gfxSettings.value = value;
}

} /* extern "C" */
