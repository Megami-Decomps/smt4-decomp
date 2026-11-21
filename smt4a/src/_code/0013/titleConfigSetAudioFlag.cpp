#include "shard/GlobalBlocks.h"

extern "C" {

/* Sets the voice load queue's voice-bank byte (0x1E5). */
void titleConfigSetAudioFlag(u8 value)
{
    g_soundObjectTable.voiceBank = value;
}

} /* extern "C" */
