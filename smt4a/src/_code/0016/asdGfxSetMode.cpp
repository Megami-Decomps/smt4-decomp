#include "shard/Block61a470.h"

extern "C" {

/* Maps an input code to the state: 0x400 and 0x401 select 0 and 1, 0x410 selects 2. */
void asdGfxSetMode(s32 code, u32 unused, s32 offset)
{
    if (code == 0x400 || (offset = code - 0x401) == 0) {
        DAT_0061a470.state = code - 0x400;
    } else if (offset == 0xF) {
        DAT_0061a470.state = 2;
    }
}

} /* extern "C" */
