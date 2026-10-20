#include "shard/Shard0031.h"

extern "C" {

extern void strHolderAssignBytes(void *string, u32 value, u32 count);

void stringSetValue4(void *string, u32 value)
{
    strHolderAssignBytes(string, value, 4);
}

} /* extern "C" */
