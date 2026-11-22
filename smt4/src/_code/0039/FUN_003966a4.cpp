#include "common.h"

extern "C" {

int mapObjectPoolSpawnFromLocations(u32 *flags);

void FUN_003966a4(u32 *flags)
{
    if ((*flags & 1) == 0) {
        mapObjectPoolSpawnFromLocations(flags);
        return;
    }
}

} /* extern "C" */
