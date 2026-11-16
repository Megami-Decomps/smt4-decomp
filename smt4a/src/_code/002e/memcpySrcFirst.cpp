#include "AsdSDK/AsdMemCopy.h"

extern "C" {

void memcpySrcFirst(const void *source, void *destination, u32 bytes)
{
    rt_memcpy(destination, source, bytes);
}

} /* extern "C" */
