#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {


/* 1 when both entries of table 0x22 are loaded. */
u32 spriteTable22AllLoaded(void)
{
    int i = 0;

    do {
        if (asdTMTexTableNodeIsLoaded(0x22, i) == 0) {
            return 0;
        }
        i = i + 1;
    } while (i < 2);
    return 1;
}

} /* extern "C" */
