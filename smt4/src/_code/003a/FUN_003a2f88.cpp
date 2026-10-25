/* NON_MATCHING: only the two coordinate-offset saved registers (x/y in r6/r7) are swapped. */
#include "camp/RenderCtx.h"
struct SceneArrowDrawWork {
    u8 unk00[0x10];
    u32 mode;
    u8 unk14[8];
    u8 secondArrow;
    u8 firstArrow;
};
struct SpriteInfo;
/* SpriteInfo's header also defines the incompatible Apocalypse RenderCtx. */
struct SpriteOriginView {
    u8 unk00[8];
    s16 x, y;
};
struct ArrowSpritePositions { u32 ids[2]; };
extern "C" {
extern RenderCtx *g_titleScene;
extern const ArrowSpritePositions DAT_00407540;
void renderCtxSelectStereoLayout(RenderCtx *context);
void FUN_002bed3c(void);
s32 FUN_002c5d80(u32 mode, u32 flags);
void FUN_003a37dc(SceneArrowDrawWork *work);
s32 placeWinGetValue(void);
s32 FUN_001dd910(void);
const SpriteInfo *asdTMTexTableEntryAt(u32 table, u32 sprite);
u32 FUN_002bf380(u32 flags, u32 table, u32 spriteId, s32 x, s32 y, s32 z);
void FUN_002c198c(RenderCtx *context);
void FUN_002c18e4(RenderCtx *context);

void FUN_003a2f88(SceneArrowDrawWork *work)
{
    renderCtxSelectStereoLayout(g_titleScene);
    FUN_002bed3c();
    RenderCtx *context = g_titleScene;
    s32 state = FUN_002c5d80(1, 0);
    renderStackPush(&context->stackA, state);
    if (work->mode != 1) {
        FUN_003a37dc(work);
        if (placeWinGetValue()) {
            s32 depth = 13;
            s32 x = FUN_001dd8f0();
            s32 y = FUN_001dd910();
            ArrowSpritePositions positions = DAT_00407540;
            u32 position = 0;
            if (work->firstArrow) {
                const SpriteOriginView *origin = reinterpret_cast<const SpriteOriginView *>(asdTMTexTableEntryAt(0x2B, positions.ids[position]));
                s32 arrowX = origin->x + x;
                s32 arrowY = origin->y + y;
                FUN_002bf380(2, 0x2B, 6, arrowX, arrowY, depth);
                ++position;
            }
            if (work->secondArrow) {
                const SpriteOriginView *origin = reinterpret_cast<const SpriteOriginView *>(asdTMTexTableEntryAt(0x2B, positions.ids[position]));
                s32 arrowX = origin->x + x;
                s32 arrowY = origin->y + y;
                FUN_002bf380(2, 0x2B, 7, arrowX, arrowY, depth);
            }
        }
    }
    renderStackPop(&g_titleScene->stackA);
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
}
}
