#include "shard/Shard0045.h"

extern "C" {

extern s32 vtblHandleInit55C11C(s32 address);

s32 FUN_0045c350(s32 base)
{
    return vtblHandleInit55C11C(base + 0xC) - 0xC;
}

} /* extern "C" */
