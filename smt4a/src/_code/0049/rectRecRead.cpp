#include "shard/Shard0049.h"
#include "gfx/RenderStateStack.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* Reads the entry's position and size (its placement's size, or its own with bit 15 masked off). */
void rectRecRead(u32 file, u32 index, s32 *x, s32 *y, u32 *width, u32 *height)
{
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(file, index);
    u32 value;

    *x = entry->x;
    *y = entry->y;
    if (entry->placement != NULL) {
        *width = entry->placement->width;
        value = entry->placement->height;
    } else {
        *width = entry->width & 0xFFFF7FFF;
        value = entry->height & 0xFFFF7FFF;
    }
    *height = value;
}

} /* extern "C" */
