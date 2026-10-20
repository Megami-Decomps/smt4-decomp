#include "shard/Shard0031.h"

extern "C" {

extern void strHolderAssignBytes(void *string, u32 value, u32 count);

void stringSetValue1(void *string, u32 value)
{
    strHolderAssignBytes(string, value, 1);
}

} /* extern "C" */
