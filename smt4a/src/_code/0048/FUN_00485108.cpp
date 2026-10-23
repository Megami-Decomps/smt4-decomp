/* NON_MATCHING: sprite opacity uses one direct VFP load rather than a sprite-base addition and load. */
#include "camp/RenderCtx.h"
#include "shard/W6_W6Match3_NameFormStateA.h"
#include "ui/UiSpriteState.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
void efctSetSpeed(f32 speed);
u32 packNibblesAndByte(u32 first, u32 second, u32 byte);
void FUN_001835b4(s32 mode, u32 table, u32 sprite, s32 x, s32 y, s32 layer);

// Draw layered form decorations, fading the foreground separately and restoring effect speed.
void FUN_00485108(NameFormStateA *form, s32 x, s32 y, f32 speed)
{
    union DecorationView {
        NameFormStateA base;
        struct { u8 unk000[0x294]; UiSpriteState sprite; } decoration;
    };
    DecorationView *work = reinterpret_cast<DecorationView *>(form);
    efctSetSpeed(speed);
    FUN_001835b4(2, 0x23, 0x153, x, y, 0x1f);
    FUN_001835b4(2, 0x23, 0x154, x, y, 0x1f);
    FUN_001835b4(2, 0x23, 0x150, x, y, 0x24);
    efctSetSpeed(work->decoration.sprite.unk20 * speed);
    RenderCtxA *context = g_renderCtx;
    s32 blend = packNibblesAndByte(6, 1, 0);
    renderStackSet(&context->stackB, blend);
    for (s32 index = 0; index < 4; ++index)
        FUN_001835b4(2, 0x23, index + 0x155, x, y, 0x29);
    context = g_renderCtx;
    blend = packNibblesAndByte(6, 7, 0);
    renderStackSet(&context->stackB, blend);
    if (form->countdown > 0)
        FUN_001835b4(2, 0x23, 0x159, x, y, 0x29);
    efctSetSpeed(speed);
}
}
