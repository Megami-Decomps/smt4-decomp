#include "shard/Block61a470.h"
#include "shard/asdGfxSetMode.h"

extern "C" {

/* Maps an input code to the state: 0x400 and 0x401 select 0 and 1, 0x410 selects 2. */
void asdGfxSetMode(s32 code, u32 unused, s32 offset)
{
    if (code == 0x400 || (offset = code - 0x401) == 0) {
        g_asdGfxContext.state = code - 0x400;
    } else if (offset == 0xF) {
        g_asdGfxContext.state = 2;
    }
}

} /* extern "C" */
