#include "shard/Shard0032.h"

extern "C" {

extern Settings5B DAT_005b3bf4;

void settings5BClearFlags(u32 mask)
{
    DAT_005b3bf4.flags &= ~mask;
}

} /* extern "C" */
