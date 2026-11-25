#include "gfx/TextureBindingBuckets.h"
#include "shard/W6_W6Match7_DefaultTextureWork.h"

extern "C" {
extern DriverTextureRelease *g_gfxReleaseCallback;

/* Returns an entry's main and sub blocks to the driver, then clears both pointers. */
void gfxReleaseEntryBlocks(TextureBindingNode *target)
{
    GfxReleaseEntry *entry = (GfxReleaseEntry *)target->resource;
    switch (entry->kind) {
    case 0x2020000:
    case 0x2030000:
        if (entry->mainData != NULL && g_gfxReleaseCallback != NULL)
            g_gfxReleaseCallback(entry->mainKind, 0x102, target->address, entry->mainData);
        break;
    case 0x1010000:
        if (entry->subData != NULL && g_gfxReleaseCallback != NULL)
            g_gfxReleaseCallback(0x10000, 0x102, target->address, entry->subData);
        break;
    case 0x1020000:
    case 0x1030000:
        if (entry->mainData != NULL && g_gfxReleaseCallback != NULL)
            g_gfxReleaseCallback(entry->mainKind, 0x102, target->address, entry->mainData);
        if (entry->subData != NULL && g_gfxReleaseCallback != NULL)
            g_gfxReleaseCallback(0x10000, 0x102, target->address, entry->subData);
        break;
    case 0x2010000:
        break;
    }
    entry->mainData = NULL;
    entry->subData = NULL;
}
} /* extern "C" */
