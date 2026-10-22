/* NON_MATCHING: retail 63 vs built 60 rows; render-stack push/pop lowering and saved-register allocation differ. */
#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
void mapEplUpdateEntriesIfAny(void);
void FUN_001f9f64(void);
void MapMain_DrawMinimapIcons(void);
s32 FUN_002c5d80(u32, u32);

u32 FUN_001e9508(void)
{
    // Adding a word inside MapMain's byte-aligned padding at 0x0d would shift it.
    struct MapDrawSelectionView {
        u8 unk00[0x24];
        s32 id;
    };
    extern MapDrawSelectionView *g_mapMain;
    RenderCtx *context = g_titleScene;
    s32 id = g_mapMain->id;
    if (id >= 21 && id < 110 && static_cast<u32>(id - 84) >= 12 && id != 24) {
        renderStackPush(&context->stackA, FUN_002c5d80(5, 0));
        FUN_001f9f64();
        MapMain_DrawMinimapIcons();
        renderStackPop(&g_titleScene->stackA);
        mapEplUpdateEntriesIfAny();
    }
    return 0;
}
}
