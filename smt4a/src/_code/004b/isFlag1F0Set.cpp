#include "shard/Shard004B.h"

extern "C" {

extern u8 asdTMTexTableNodeIsLoaded(u32 group, u32 index);

u8 isFlag1F0Set(void)
{
    return asdTMTexTableNodeIsLoaded(0x1F, 0) != 0;
}

} /* extern "C" */
