#include "shard/GlobalBlocks.h"
#include "code/Code0014.h"

extern "C" {

/* Returns the voice load queue's voice-bank byte (0x1E5). */
u8 messageVoiceBankGet(void)
{
    return g_soundObjectTable.voiceBank;
}

} /* extern "C" */
