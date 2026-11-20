#include "shard/GlobalBlocks.h"
#include "code/Code0015.h"

extern "C" {

/* Returns the byte at 0x1E4 of the global at 0x61978C. */
u8 messageVoiceFlagsGet(void)
{
    return g_soundObjectTable.unk1E4;
}

} /* extern "C" */
