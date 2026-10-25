#include "shard/Shard0037.h"
#include "util/CalleeContracts.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

u8 lmapGetSpawnIndex(void)
{
    return gameFlagsGetBlock()->unk03;
}

} /* extern "C" */
