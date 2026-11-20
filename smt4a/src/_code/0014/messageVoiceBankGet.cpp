#include "shard/GlobalBlocks.h"
#include "code/Code0014.h"

extern "C" {

/* Returns the byte at 0x1E5 of the global at 0x61978C. */
u8 messageVoiceBankGet(void)
{
    return g_soundObjectTable.unk1E5;
}

} /* extern "C" */
