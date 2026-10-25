#include "shard/Shard003A.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {


u8 FUN_003ae848(void)
{
    return asdTMTexTableNodeIsLoaded(0x24, 0) != 0;
}

} /* extern "C" */
