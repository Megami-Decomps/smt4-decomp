/* NON_MATCHING: VFP constant/centering registers swap, position loads combine into VLDMIAs, and completion tests are predicated with unsigned loads; candidate -O2. */
#include "shard/S1ListPanel.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"

struct RenderCtxA;
struct UiFloatPosition {
    f32 x;
    f32 y;
};
struct AnimatedMessageWork {
    u8 unk0000[0x4d0];
    UiFloatPosition position;
    u8 unk04d8[0xe08];
    UiAnimatedSprite sprites[2];
};
struct UiTextFontGlobals {
    u8 unk00[0xc];
    u32 font;
};

extern "C" {
extern RenderCtxA *g_renderCtx;
extern const char DAT_005326f8[45];
extern UiTextFontGlobals g_uiTextFontSettings;
void words2Copy(const UiFloatPosition *source, UiFloatPosition *destination);
u32 FUN_001692ac(s32 mode, s32 flags);
void renderStackPushIndexed(RenderCtxA *context, s32 stack, u32 state);
void renderCtxPopState(RenderCtxA *context, s32 stack);
void efctSetSpeed(f32 speed);
void FUN_00183bb0();
s32 vec2GetXInt(UiAnimatedSprite *sprite);
void FUN_00164b5c(s32 layer, s32 group, s32 frame, s32 x, s32 y, s32 flags);
SpriteInfo *FUN_001834a4(u32 group, u32 id);
void rt_memcpy_w(void *destination, const void *source, u32 size);
f32 FUN_00168594(const char *text, s32 font, f32 spacing);
void FUN_00162790(s32 layer, u32 font, const char *text,
    f32 x, f32 y, f32 arg0, f32 arg1, f32 scale);
s32 FUN_00163aa4(UiAnimatedSprite *sprite, f32 delta);

void uiDrawAnimatedMessage(AnimatedMessageWork *work)
{
    UiFloatPosition position;
    words2Copy(&work->position, &position);
    renderStackPushIndexed(g_renderCtx, 3, FUN_001692ac(1, 0));
    efctSetSpeed(1.0f);
    FUN_00183bb0();
    FUN_00164b5c(2, 0x13, 0x1c,
        static_cast<s32>(static_cast<f32>(vec2GetXInt(&work->sprites[1])) + position.x),
        static_cast<s32>(position.y), 0xd3);
    SpriteInfo *info = FUN_001834a4(0x13, 0x111b);
    char text[64];
    rt_memcpy_w(text, DAT_005326f8, 45);
    s32 textWidth = static_cast<s32>(FUN_00168594(text, 2, 0.0f));
    f32 center = static_cast<f32>((info->size[0] - textWidth) / 2);
    f32 x = static_cast<f32>(vec2GetXInt(&work->sprites[1]) + info->x) + center + position.x;
    f32 y = static_cast<f32>(info->y) + position.y;
    FUN_00162790(2, g_uiTextFontSettings.font, text, x, y, 0.0f, 0.0f, 1.0f);
    renderCtxPopState(g_renderCtx, 3);
    efctSetSpeed(1.0f);
    FUN_00163aa4(&work->sprites[1], 1.0f);
    if (work->sprites[0].finished != 0 && uiAnimatedSpriteIsFinished(&work->sprites[1])) {
        work->sprites[0].completion.channels[2] = 1;
    }
}
}
