#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "camp/RenderCtxA.h"

extern "C" {
extern const char DAT_005326f8[45];

void uiDrawAnimatedMessage(AnimatedMessageWork *work)
{
    UiFloatPosition position;
    words2Copy(&work->position, &position);
    renderStackPushIndexed(g_renderCtx, 3, renderCtxPackPassFlags(1, 0));
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    texDrawCompositeSprite(2, 0x13, 0x1c,
        static_cast<s32>(static_cast<f32>(vec2GetXInt(&work->sprites[1])) + position.x),
        static_cast<s32>(position.y), 0xd3);
    TextureTableEntryIV *info = asdTMTexTableEntryAt(0x13, 0x111b);
    char text[64];
    __aeabi_memcpy4(text, DAT_005326f8, 45);
    s32 textWidth = static_cast<s32>(fontMeasureTextWidth(text, 2, 0.0f));
    f32 center = static_cast<f32>((info->placement->width - textWidth) / 2);
    f32 x = static_cast<f32>(vec2GetXInt(&work->sprites[1]) + info->x) + center + position.x;
    textDrawString(x, static_cast<f32>(info->y) + position.y, 0.0f, 2, 0.0f, g_uiTextFontSettings.font, 1.0f, text);
    renderCtxPopState(g_renderCtx, 3);
    efctSetSpeed(1.0f);
    uiSpriteAdvanceAnimation(&work->sprites[1], 1.0f);
    if (work->sprites[0].finished != 0 && uiAnimatedSpriteIsFinished(&work->sprites[1])) {
        work->sprites[0].scaleDone = 1;
    }
}
}
