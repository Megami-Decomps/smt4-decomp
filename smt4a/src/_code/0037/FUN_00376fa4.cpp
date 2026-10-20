#include "shard/Shard0037.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

void FUN_00376fa4(u16 value)
{
    gameFlagsGetBlock()->unk20 = value;
}

} /* extern "C" */
