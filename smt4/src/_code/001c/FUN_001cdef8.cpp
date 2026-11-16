#include "shard/GameGlobals.h"
#include "shard/TextureDrawCall.h"
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
s32 FUN_002c5d80(u32 mode, u32 flags);
void unitGetStereoScreenPosition(s32 *x, s32 *y, s32 location, f32 depth);
void efctSetSpeed(f32 speed);
f32 vec2GetSpeed(const void *object);

/* Draws the three animated game icons at their stereo screen positions while icon mode 3 or 9 is shown. */
u8 FUN_001cdef8(void)
{
    GameData *game = g_gameGlobals.data;
    s32 x = 0;
    s32 y = 0;
    if (game->unk1E61 == 0)
        return 0;
    if (game->unk1E67 == 3 || game->unk1E67 == 9) {
        renderCtxSelectStereoLayout(g_titleScene);
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
