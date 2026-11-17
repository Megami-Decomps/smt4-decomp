#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"
struct SceneArrowDrawWork {
    u8 unk00[0x10];
    u32 mode;
    u8 unk14[8];
    u8 secondArrow;
    u8 firstArrow;
};
struct SpriteInfo;
struct ArrowSpritePositions { u32 ids[2]; };
extern "C" {
extern const ArrowSpritePositions DAT_00407540;
void gxResetColorQuadToWhite(void);
s32 renderCtxPackPassFlags(u32 mode, u32 flags);
void FUN_003a37dc(SceneArrowDrawWork *work);
s32 placeWinGetValue(void);
s32 FUN_001dd910(void);
u32 texDrawCompositeSprite(u32 flags, u32 table, u32 spriteId, s32 x, s32 y, s32 z);
void renderCtxResetColorScale(RenderCtx *context);

void hintWindowDrawArrows(SceneArrowDrawWork *work)
{
    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    RenderCtx *context = g_titleScene;
    s32 state = renderCtxPackPassFlags(1, 0);
    renderStackPush(&context->stackA, state);
    if (work->mode != 1) {
        FUN_003a37dc(work);
        if (placeWinGetValue()) {
            s32 depth = 13;
            struct { s32 x, y; } offset;
            offset.x = FUN_001dd8f0();
            offset.y = FUN_001dd910();
            ArrowSpritePositions positions = DAT_00407540;
            u32 position = 0;
            if (work->firstArrow) {
                const TextureTableEntryIV *origin = asdTMTexTableEntryAt(0x2B, positions.ids[position]);
                s32 arrowX = origin->x + offset.x;
                s32 arrowY = origin->y + offset.y;
                texDrawCompositeSprite(2, 0x2B, 6, arrowX, arrowY, depth);
                ++position;
            }
            if (work->secondArrow) {
                const TextureTableEntryIV *origin = asdTMTexTableEntryAt(0x2B, positions.ids[position]);
                s32 arrowX = origin->x + offset.x;
                s32 arrowY = origin->y + offset.y;
                texDrawCompositeSprite(2, 0x2B, 7, arrowX, arrowY, depth);
            }
        }
    }
    renderStackPop(&g_titleScene->stackA);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}
}
