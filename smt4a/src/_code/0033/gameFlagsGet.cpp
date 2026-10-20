#include "shard/Shard0033.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

u8 gameFlagsGet(s32 index)
{
    return gameFlagsGetBlock()->flags[index];
}

} /* extern "C" */
