#include "shard/Shard0031.h"

extern "C" {

extern void FUN_002e7674(void *string, u32 value, u32 count);

void stringSetValue4(void *string, u32 value)
{
    FUN_002e7674(string, value, 4);
}

} /* extern "C" */
