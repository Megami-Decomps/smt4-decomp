#include "shard/Shard0038.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

void FUN_003847d4(u32 value)
{
    gameFlagsGetBlock()->unk18 = value;
}

} /* extern "C" */
