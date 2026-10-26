#include "camp/RenderCtx.h"

extern "C" {
extern RenderCtx *g_titleScene;
void mapEplUpdateEntriesIfAny(void);
void FUN_001f9f64(void);
void MapMain_DrawMinimapIcons(void);
s32 FUN_002c5d80(u32, u32);

u32 mapMainDrawOrdinaryPass(u32 job)
{
    // Adding a word inside MapMain's byte-aligned padding at 0x0d would shift it.
    struct MapDrawSelectionView {
        u8 unk00[0x24];
        s32 id;
    };
    extern MapDrawSelectionView *g_mapMain;
    s32 id = g_mapMain->id;
    if (id < 21)
        return 0;
    if (id >= 110)
        return 0;
    if (static_cast<u32>(id - 84) <= 11)
        return 0;
    if (id == 24)
        return 0;
    RenderCtx *context = g_titleScene;
    renderCtxPushA(context, FUN_002c5d80(5, 0));
    FUN_001f9f64();
    MapMain_DrawMinimapIcons();
    renderStackPop(&g_titleScene->stackA);
    mapEplUpdateEntriesIfAny();
    return 0;
}
}
