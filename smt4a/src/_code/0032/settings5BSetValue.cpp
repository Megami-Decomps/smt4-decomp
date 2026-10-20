#include "shard/Shard0032.h"

extern "C" {

extern Settings5B DAT_005b3bf4;

void settings5BSetValue(s8 value)
{
    DAT_005b3bf4.value = value;
}

} /* extern "C" */
