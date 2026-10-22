#include "common.h"

extern "C" u32 osConvertToPhysicalAddress(u32 address);

extern "C" u32 asdGxGetPhysicalAddress(u32 address)
{
    return osConvertToPhysicalAddress(address);
}
