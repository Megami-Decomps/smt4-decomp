#include "shard/Shard003D.h"

extern "C" {

extern GameBlock2830C *gameDataBlocksGetSaveData(void);

s32 FUN_003dfe88(void)
{
    return gameDataBlocksGetSaveData()->unk2830C;
}

} /* extern "C" */
