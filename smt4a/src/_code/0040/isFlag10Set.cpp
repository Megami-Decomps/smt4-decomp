#include "shard/Shard0040.h"

extern "C" {

extern Flag10Obj *gameDataBlocksGetStats(void);

u8 isFlag10Set(void)
{
    return gameDataBlocksGetStats()->unk10 != 0;
}

} /* extern "C" */
