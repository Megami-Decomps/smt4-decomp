#include "shard/GlobalBlocks.h"
#include "ui/MessageMainA.h"

extern "C" {

/* Sets the voice load queue's disabled byte (0x1E6). */
void FUN_0015059c(u8 value)
{
    g_soundObjectTable.disabled = value;
}

} /* extern "C" */
