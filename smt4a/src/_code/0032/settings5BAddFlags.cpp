#include "shard/Shard0032.h"

extern "C" {

extern Settings5B DAT_005b3bf4;

void settings5BAddFlags(u32 flags)
{
    DAT_005b3bf4.flags |= flags;
}

} /* extern "C" */
