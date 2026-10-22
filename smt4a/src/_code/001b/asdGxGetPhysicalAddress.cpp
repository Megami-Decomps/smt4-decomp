#include "common.h"

extern "C" u32 FUN_001a2638(u32 address);

extern "C" u32 asdGxGetPhysicalAddress(u32 address)
{
    return FUN_001a2638(address);
}
