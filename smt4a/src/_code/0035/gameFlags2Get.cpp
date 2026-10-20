#include "shard/Shard0035.h"

extern "C" {

extern Flags0C0C *gameFlagsGetBlock(void);

u8 gameFlags2Get(s32 index)
{
    return gameFlagsGetBlock()->flags2[index];
}

} /* extern "C" */
