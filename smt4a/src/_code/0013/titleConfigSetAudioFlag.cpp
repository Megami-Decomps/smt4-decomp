#include "shard/GlobalBlocks.h"

extern "C" {

/* Stores `value` in the byte at 0x1E5 of the global at 0x61978C. */
void titleConfigSetAudioFlag(u8 value)
{
    g_soundObjectTable.unk1E5 = value;
}

} /* extern "C" */
