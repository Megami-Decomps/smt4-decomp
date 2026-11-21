#include "shard/GlobalBlocks.h"
#include "code/Code0015.h"

extern "C" {

/* Returns the voice load queue's voice-flags byte (0x1E4). */
u8 messageVoiceFlagsGet(void)
{
    return g_soundObjectTable.voiceFlags;
}

} /* extern "C" */
