#ifndef UI_ANIMATEDMESSAGE_H
#define UI_ANIMATEDMESSAGE_H

#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

/* A banner message sliding in with an animated sprite (uiDrawAnimatedMessage, FUN_0048b260). */
struct RenderCtxA;
struct UiFloatPosition {
    f32 x;
    f32 y;
};
struct AnimatedMessageWork {
    /* 0x0000 */ u8 unk0000[0x4d0];
    /* 0x04D0 */ UiFloatPosition position;
    /* 0x04D8 */ u8 unk04d8[0xe08];
    /* 0x12E0 */ UiAnimatedSprite sprites[2];
};
struct UiTextFontGlobals {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u32 font;
};

extern "C" {
extern RenderCtxA *g_renderCtx;
extern UiTextFontGlobals g_uiTextFontSettings;
void words2Copy(const UiFloatPosition *source, UiFloatPosition *destination);
u32 renderCtxPackPassFlags(s32 mode, s32 flags);
void renderStackPushIndexed(RenderCtxA *context, s32 stack, u32 state);
void renderCtxPopState(RenderCtxA *context, s32 stack);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite();
s32 vec2GetXInt(UiAnimatedSprite *sprite);
void texDrawCompositeSprite(s32 layer, s32 group, s32 frame, s32 x, s32 y, s32 flags);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
f32 FUN_00168594(const char *text, s32 font, f32 spacing);
s32 uiSpriteAdvanceAnimation(UiAnimatedSprite *sprite, f32 delta);
}

#endif
