#include "AsdSDK/AsdMemCopy.h"

extern "C" {

void memcpySrcFirst(const void *source, void *destination, u32 bytes)
{
    __aeabi_memcpy(destination, source, bytes);
}

} /* extern "C" */
