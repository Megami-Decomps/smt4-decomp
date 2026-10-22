/* NON_MATCHING: Mirrored-rectangle screen-width selection and state-stack address formation differ. */
#include "common.h"
#include "camp/RenderCtx.h"
#include "shard/W9_W9Match8_WorkRecords.h"

extern "C" {
extern TitleSceneRectanglePrefixIV *g_titleScene;

void FUN_0029a17c(s32 x, s32 y, u32 width, s32 height,
                  s32 useNarrowScreen)
{
    const u32 screenWidth = useNarrowScreen == 0 ? 400u : 320u;
    u32 left = screenWidth - (static_cast<u32>(x) + width);
    u32 top = 240u - static_cast<u32>(height) - static_cast<u32>(y);
    u32 clippedWidth = width;
    u32 clippedHeight = static_cast<u32>(height);

    if (static_cast<s32>(left) < 0) {
        clippedWidth += left;
        if (static_cast<s32>(clippedWidth) < 0)
            clippedWidth = 0;
        left = 0;
    }
    if (static_cast<s32>(top) < 0) {
        clippedHeight += top;
        if (static_cast<s32>(clippedHeight) < 0)
            clippedHeight = 0;
        top = 0;
    }

    renderStackSet(&g_titleScene->rectangleOrigin,
                   static_cast<s32>(left | (top << 16)));

    // The first callback may replace the global scene pointer.
    renderStackSet(&g_titleScene->rectangleExtent,
                   static_cast<s32>(clippedWidth | (clippedHeight << 16)));
}
}
