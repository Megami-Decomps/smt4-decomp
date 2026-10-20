#include "shard/Shard003A.h"

extern "C" {

extern u8 asdTMTexTableNodeIsLoaded(s32 a, s32 b);

u8 FUN_003ae848(void)
{
    return asdTMTexTableNodeIsLoaded(0x24, 0) != 0;
}

} /* extern "C" */
