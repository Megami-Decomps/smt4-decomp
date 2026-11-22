#ifndef UI_ANIMATEDMESSAGE_H
#define UI_ANIMATEDMESSAGE_H

#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "text/TextDraw.h"
#include "util/MathFunctions.h"
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
    /* 0x12E0 */ UiSpriteState sprites[2];
};
struct UiTextFontGlobals {
    /* 0x00 */ f32 dragFriction;    /* what the navigation map's slide is scaled by each frame */
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 font;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ s32 unk14;           /* cleared when the navigation panel starts */
};

extern "C" {
extern UiTextFontGlobals g_uiTextFontSettings;
void words2Copy(const UiFloatPosition *source, UiFloatPosition *destination);
u32 renderCtxPackPassFlags(s32 mode, s32 flags);
void renderStackPushIndexed(RenderCtxA *context, s32 stack, u32 state);
void renderCtxPopState(RenderCtxA *context, s32 stack);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite();
void texDrawCompositeSprite(s32 layer, s32 group, s32 frame, s32 x, s32 y, s32 flags);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
f32 fontMeasureTextWidth(const char *text, s32 font, f32 spacing);
}

#endif
