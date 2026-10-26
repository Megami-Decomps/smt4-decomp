#include "AsdSDK/AsdMemCopy.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" {
void partyCopyRecord100(const void *record)
{
    u8 *block = gameFlagBlockGet();
    rt_memcpy(&block[0x100], record, 0x44);
}
}
