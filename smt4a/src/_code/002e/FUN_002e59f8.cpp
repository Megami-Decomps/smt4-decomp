#include "AsdSDK/AsdMemCopy.h"

extern "C" {

void FUN_002e59f8(const void *source, void *destination, u32 bytes)
{
    rt_memcpy(destination, source, bytes);
}

} /* extern "C" */
