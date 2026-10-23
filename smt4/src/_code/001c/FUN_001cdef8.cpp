/* NON_MATCHING: animation speed address reuse, stack push registers and early-return merging differ. */
#include "shard/GameGlobals.h"
#include "camp/RenderCtx.h"
/* Float aliases in the shared byte padding at +0x301 would shift its alignment. */
struct GameIconAnimationView {
    u8 unk000[0x438];
    f32 secondSpeed;
    u8 unk43C[0x88];
    f32 thirdSpeed;
    u8 unk4C8[0x88];
    f32 firstSpeed;
};
typedef char GameIconAnimationOffsets[(offsetof(GameIconAnimationView, thirdSpeed) == 0x4C4 && offsetof(GameIconAnimationView, firstSpeed) == 0x550) ? 1 : -1];
extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002c39a4(RenderCtx *context);
s32 FUN_002c5d80(u32 mode, u32 flags);
void FUN_00288ef0(s32 *x, s32 *y, s32 location, f32 depth);
void efctSetSpeed(f32 speed);
void FUN_002bf288(u32 flags, u32 table, u32 sprite, s32 x, s32 y, s32 z);

u8 FUN_001cdef8(void)
{
    s32 x = 0, y = 0;
    GameData *game = g_gameGlobals.data;
    if (game->unk1E61 && (game->unk1E67 == 3 || game->unk1E67 == 9)) {
        FUN_002c39a4(g_titleScene);
        RenderCtx *context = g_titleScene;
        s32 state = FUN_002c5d80(1, 0);
        renderStackPush(&context->stackA, state);
        const GameIconAnimationView *animation = reinterpret_cast<const GameIconAnimationView *>(game);
        FUN_00288ef0(&x, &y, 9, 0.35f);
        efctSetSpeed(animation->firstSpeed);
        FUN_002bf288(2, 0x1A, 0, x, y, 1);
        efctSetSpeed(1.0f);
        FUN_00288ef0(&x, &y, 7, 0.35f);
        efctSetSpeed(animation->secondSpeed);
        FUN_002bf288(2, 0x1A, 1, x, y, 1);
        efctSetSpeed(1.0f);
        FUN_00288ef0(&x, &y, 8, 0.35f);
        efctSetSpeed(animation->thirdSpeed);
        FUN_002bf288(2, 0x1A, 2, x, y, 1);
        renderStackPop(&g_titleScene->stackA);
    }
    return 0;
}
}
