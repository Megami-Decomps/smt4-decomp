#include "common.h"

extern "C" {

int nw_snd_internal_BankFile_VelocityRegion_GetRegionParameter(int region)
{
    if (*(int *)(region + 4) != 0x21f) {
        region = 0;
    } else {
        region = region + 8;
    }
    return region;
}

} /* extern "C" */
