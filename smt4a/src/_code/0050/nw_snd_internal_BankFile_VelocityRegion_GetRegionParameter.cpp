#include "shard/Shard0050.h"

extern "C" {

u8 *nw_snd_internal_BankFile_VelocityRegion_GetRegionParameter(u8 *region)
{
    if (*(s32 *)(region + 4) != 0x21F) {
        return NULL;
    }
    return region + 8;
}

} /* extern "C" */
