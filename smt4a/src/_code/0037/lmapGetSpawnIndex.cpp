#include "shard/Shard0037.h"
#include "shard/lmapGetSpawnIndex.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

u8 lmapGetSpawnIndex(void)
{
    return gameFlagsGetBlock()->unk03;
}

} /* extern "C" */
