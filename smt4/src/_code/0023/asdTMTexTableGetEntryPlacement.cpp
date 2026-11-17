#include "common.h"
#include "AsdSDK/TexTableEntryRange.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

/* Reads the entry's position and size (its placement's size, or its own with bit 15 masked off). */
void asdTMTexTableGetEntryPlacement(u32 file, s32 index, int *x, int *y, int *width, int *height)
{
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(file, index);
    u32 value;

    *x = entry->x;
    *y = entry->y;
    if (entry->placement != NULL) {
        *width = entry->placement->width;
        value = entry->placement->height;
    } else {
        *width = entry->width & 0xffff7fff;
        value = entry->height & 0xffff7fff;
    }
    *height = value;
}

} /* extern "C" */
