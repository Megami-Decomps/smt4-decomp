#include "shard/Shard003D.h"

extern "C" {

extern GameBlock2830C *gameDataBlocksGetSaveData(void);

s32 FUN_003dfd44(void)
{
    return gameDataBlocksGetSaveData()->unk2830E;
}

} /* extern "C" */
