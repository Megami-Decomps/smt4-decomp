#include "shard/Shard0031.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
extern OverlayRef g_campCec;

void cecCardDrawBackgroundAndLabel(u32 handle, void *data, void *layout, s32 value, s32 option);
void saveSlotDrawSummary(u32 handle, void *data, void *layout, s32 width, s32 height, s32 option);

/* Draws the camp CEC summary after its texture has loaded. */
u32 FUN_0025cf44(void)
{
    OverlayObj *work = g_campCec.instance;
    if (work == NULL)
        return 0;
    if (textureGetIndexedResource(46) == 0)
        return 0;
    if (asdTMTexTableNodeIsLoaded(46, 0) == 0)
        return 0;
    const TextureTableEntryIV *dimensions = asdTMTexTableEntryAt(46, 151);
    void *data = g_campCec.instance->block40;
    cecCardDrawBackgroundAndLabel(work->unk174, data, work->slides, 0, 0);
    data = g_campCec.instance->block40;
    saveSlotDrawSummary(work->unk174, data, work->slides + 1, dimensions->x, dimensions->y, 0);
    return 0;
}
}
