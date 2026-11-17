#include "gamedata/MapSaveBlockA.h"
#include "shard/Shard0039.h"

extern "C" {


void FUN_00398004(s32 enabled)
{
    gameFlagsGetBlock()->unk001C = enabled != 0;
}

} /* extern "C" */
