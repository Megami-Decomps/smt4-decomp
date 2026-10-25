#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {


u8 spriteTable2aIsLoaded(void)
{
    return asdTMTexTableNodeIsLoaded(0x2a, 0) != 0;
}

} /* extern "C" */
