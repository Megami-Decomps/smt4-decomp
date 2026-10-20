#include "shard/Shard0039.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

void FUN_00398004(s32 enabled)
{
    gameFlagsGetBlock()->unk1C = enabled != 0;
}

} /* extern "C" */
