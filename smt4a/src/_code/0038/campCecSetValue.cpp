#include "shard/Shard0038.h"

extern "C" {

extern u8 g_campCec;

void campCecSetValue(u8 value)
{
    g_campCec = value;
}

} /* extern "C" */
