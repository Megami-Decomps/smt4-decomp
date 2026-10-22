#include "shard/Shard0034.h"

extern "C" void playerModelLoadPart(void *commands, u32 channel, u32 value);

/* Reset the main command channel and the two auxiliary selectors. */
extern "C" void commandResetThreeChannels(CommandOwner4394 *owner)
{
    playerModelLoadPart(owner->commands, 0, 7);
    playerModelLoadPart(owner->commands, 1, 7);
    playerModelLoadPart(owner->commands, 2, 7);
}
