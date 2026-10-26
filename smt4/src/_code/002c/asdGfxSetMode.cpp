#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpersSmt4.h"

extern "C" {

extern AsdGfxContext g_asdGfxContext;

/* Stores a mode in the graphics context: 0x400 and 0x401 store their offset from 0x400, 0x410 stores 2. */
void asdGfxSetMode(s32 mode)
{
    switch (mode) {
    case 0x400:
    case 0x401:
        g_asdGfxContext.unk124 = mode - 0x400;
        break;
    case 0x410:
        g_asdGfxContext.unk124 = 2;
        break;
    }
}

} /* extern "C" */
