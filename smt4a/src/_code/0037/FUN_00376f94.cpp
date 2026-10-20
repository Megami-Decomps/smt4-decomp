#include "shard/Shard0037.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

u8 FUN_00376f94(void)
{
    return gameFlagsGetBlock()->unk03;
}

} /* extern "C" */
