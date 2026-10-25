/* NON_MATCHING: native text-scale calculation folds to a constant; saved-register and outgoing argument scheduling differ. */
#include "shard/S1ListPanel.h"
#include "shard/TextureDrawCall.h"
struct MenuCaptionText { u16 length; u16 unk02; u16 text[1]; };
struct MenuCaptionView {
    u32 unk00;
    u8 mode;
    u8 unk05[0x7F];
    MenuCaptionText *caption;
};
typedef char MenuCaptionOffset[offsetof(MenuCaptionView, caption) == 0x84 ? 1 : -1];
extern "C" {
extern RenderCtxA *g_renderCtx;
f32 renderCtxCalculateStereoParallax(RenderCtxA *context, f32 depth);
void efctSetSpeed(f32 speed);
SpriteInfo *FUN_001834a4(u32 group, u32 id);
void FUN_00162790(u32 layer, u32 color, const u16 *text, f32 x, f32 y, f32 scale, f32 angle, f32 alpha);

void FUN_0049d244(MenuCaptionView *view, s32 x, s32 y, f32 alpha)
{
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    if (view->mode == 8 || view->mode == 9) {
        efctSetSpeed(alpha);
        FUN_001835b4(2, 51, 46, (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f), 0, 101);
        efctSetSpeed(1.0f);
    }
    efctSetSpeed(alpha);
    for (s32 index = 0; index < 3; ++index)
        FUN_001835b4(2, 51, index, parallax + x, y, 101);
    if (!view->caption || !view->caption->length)
        return;
    FUN_001835b4(2, 51, 3, x + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f), y, 101);
    SpriteInfo *info = FUN_001834a4(51, 4);
    s32 captionX = info->x + ((s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f) + x);
    FUN_00162790(3, 0xFFFFFFFF, view->caption->text,
        (f32)captionX, (f32)(info->y + y), (f32)150 * (1.0f / 256.0f), 0.0f, alpha);
}
}
