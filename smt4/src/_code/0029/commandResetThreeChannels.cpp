#include "shard/Shard0034.h"

extern "C" void FUN_00294450(void *commands, u32 channel, u32 value);

/* Reset the main command channel and the two auxiliary selectors. */
extern "C" void commandResetThreeChannels(CommandOwner4394 *owner)
{
    FUN_00294450(owner->commands, 0, 7);
    FUN_00294450(owner->commands, 1, 7);
    FUN_00294450(owner->commands, 2, 7);
}
