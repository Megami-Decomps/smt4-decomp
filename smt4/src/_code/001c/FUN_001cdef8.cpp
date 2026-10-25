/* NON_MATCHING: native animation speed getters and render-context push recovered; initial global/stack clears and final early-return epilogue schedule differ. */
#include "shard/GameGlobals.h"
#include "camp/RenderCtx.h"
#include "ui/UiSpriteState.h"
/* Float aliases in the shared byte padding at +0x301 would shift its alignment. */
struct GameIconAnimationView {
    u8 prefix[0x418];
    UiSpriteState second;
    UiSpriteState third;
    UiSpriteState first;
};
typedef char GameIconAnimationOffsets[
    offsetof(GameIconAnimationView, third) == 0x4A4 &&
    offsetof(GameIconAnimationView, first) == 0x530 ? 1 : -1];
extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002c39a4(RenderCtx *context);
s32 FUN_002c5d80(u32 mode, u32 flags);
void unitGetStereoScreenPosition(s32 *x, s32 *y, s32 location, f32 depth);
void efctSetSpeed(f32 speed);
void FUN_002bf288(u32 flags, u32 table, u32 sprite, s32 x, s32 y, s32 z);
f32 vec2GetSpeed(const void *object);

u8 FUN_001cdef8(void)
{
    s32 x = 0, y = 0;
    GameData *game = g_gameGlobals.data;
    if (game->unk1E61 && (game->unk1E67 == 3 || game->unk1E67 == 9)) {
        FUN_002c39a4(g_titleScene);
        renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
        const GameIconAnimationView *animation = reinterpret_cast<const GameIconAnimationView *>(game);
        unitGetStereoScreenPosition(&x, &y, 9, 0.35f);
        efctSetSpeed(vec2GetSpeed(&animation->first));
        FUN_002bf288(2, 0x1A, 0, x, y, 1);
        efctSetSpeed(1.0f);
        unitGetStereoScreenPosition(&x, &y, 7, 0.35f);
        efctSetSpeed(vec2GetSpeed(&animation->second));
        FUN_002bf288(2, 0x1A, 1, x, y, 1);
        efctSetSpeed(1.0f);
        unitGetStereoScreenPosition(&x, &y, 8, 0.35f);
        efctSetSpeed(vec2GetSpeed(&animation->third));
        FUN_002bf288(2, 0x1A, 2, x, y, 1);
        renderStackPop(&g_titleScene->stackA);
    }
    return 0;
}
}
