#include "shard/Shard0040.h"

extern "C" {

extern Flag10Obj *gameDataBlocksGetStats(void);

void setFlag10(void)
{
    gameDataBlocksGetStats()->unk10 = 1;
}

} /* extern "C" */
