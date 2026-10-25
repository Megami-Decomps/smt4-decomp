#include "common.h"
extern "C" {
struct SavedMapSub { u8 unk00[0x24B27]; u8 flags; };
struct SavedMapFlags { u8 unk00[0x88]; SavedMapSub sub; };
struct SavedMapGlobals { u32 unk00; SavedMapFlags *image; };
extern SavedMapGlobals g_gameDataBlocks;
/* Set or clear the requested bits in the saved map flag byte. */
void saveGetMapFlag(u32 mask, s32 enabled)
{
    SavedMapSub *sub = &g_gameDataBlocks.image->sub;
    if (enabled)
        sub->flags |= mask;
    else
        sub->flags &= ~mask;
}
}
