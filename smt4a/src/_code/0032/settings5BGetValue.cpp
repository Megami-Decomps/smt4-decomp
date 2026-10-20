#include "shard/Shard0032.h"

extern "C" {

extern Settings5B DAT_005b3bf4;

s32 settings5BGetValue(void)
{
    return DAT_005b3bf4.value;
}

} /* extern "C" */
