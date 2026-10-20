#include "shard/Shard0037.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

s32 FUN_00376f84(void)
{
    return gameFlagsGetBlock()->unk20;
}

} /* extern "C" */
