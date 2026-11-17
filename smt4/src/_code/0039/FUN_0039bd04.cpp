/* NON_MATCHING: title scene loading ring draw (nine dots rotating around a centre, "Activating..." caption); written from the decompilation, float/int conversions and the local text copy not compared with retail */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"

struct TitleLoadingScene {
    /* 0x000 */ u8 unk000[0x9ED];
    /* 0x9ED */ u8 requested;
    /* 0x9EE */ u8 confirmed;
    /* 0x9EF */ u8 unk9EF;
    /* 0x9F0 */ s32 step;
    /* 0x9F4 */ s32 phase;
    /* 0x9F8 */ u8 cursor[0x8C];     /* sprite state of the ring's origin */
    /* 0xA82 */ u8 unkA82[1];
};

struct LoadingDot {
    f32 x;
    f32 y;
};

#define LOADING_DOT_COUNT 9

extern "C" {
extern s32 DAT_0044cdc8;   /* frames per ring step */
extern u32 DAT_0044cdd0;   /* caption colour */

u32 renderCtxPackPassFlags(u32 slot, u32 flags);
void renderStackPushIndexed(RenderCtx *context, s32 stack, u32 value);
void efctSetSpeed(f32 speed);
void gxResetColorQuadToWhite(void);
void texDrawCompositeSprite(u32 layer, u32 bank, u32 sprite, s32 x, s32 y, u32 flags);
s32 renderCtxPopState(RenderCtx *context, s32 stack);

/* Draws the title loading ring: the backdrop, nine dots with the current and the opposite pair
 * highlighted, and the caption; confirms the load when the origin sprite has finished. */
void FUN_0039bd04(TitleLoadingScene *scene)
{
    u32 slot = renderCtxPackPassFlags(1, 0);
    renderStackPushIndexed(g_titleScene, 3, slot);
    efctSetSpeed(1.0f);
    gxResetColorQuadToWhite();
    void *origin = scene->cursor;
    s32 originX = vec2GetXInt((const UiSpriteState *)origin);
    texDrawCompositeSprite(2, 0x1C, 0x1D, originX, 0, 0xD3);

    scene->step = (scene->step + 1) % (u32)DAT_0044cdc8;
    if (scene->step < 1)
        scene->phase = scene->phase + 1;
    s32 phase = scene->phase & 7;
    s32 next = (phase + 1) & 7;
    scene->phase = phase;

    LoadingDot dots[LOADING_DOT_COUNT];
    for (s32 i = 0; i < LOADING_DOT_COUNT; i++) {
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x1C, i + 0x1124);
        dots[i].x = (f32)frame->x;
        dots[i].y = (f32)frame->y;
        texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1121, vec2GetXInt((const UiSpriteState *)origin) + frame->x, frame->y, 6);
    }
    texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1123, (s32)((f32)vec2GetXInt((const UiSpriteState *)origin) + dots[scene->phase].x), (s32)dots[scene->phase].y, 6);
    texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1122, (s32)((f32)vec2GetXInt((const UiSpriteState *)origin) + dots[next].x), (s32)dots[next].y, 6);
    s32 opposite = (scene->phase + 4) & 7;
    s32 oppositeNext = (opposite + 1) & 7;
    texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1123, (s32)((f32)vec2GetXInt((const UiSpriteState *)origin) + dots[opposite].x), (s32)dots[opposite].y, 6);
    texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1122, (s32)((f32)vec2GetXInt((const UiSpriteState *)origin) + dots[oppositeNext].x), (s32)dots[oppositeNext].y, 6);

    TextureTableEntryIV *caption = asdTMTexTableEntryAt(0x1C, 0x1120);
    char text[0x1B] = "\x82\x60\x82\x83\x82\x94\x82\x89\x82\x96\x82\x81\x82\x94\x82\x89\x82\x8E\x82\x87\x81\x44\x81\x44\x81\x44";
    textDrawString(4, DAT_0044cdd0, text, (f32)(vec2GetXInt((const UiSpriteState *)origin) - 0xE + caption->x), (f32)caption->y, 0.0f, 0.0f, 1.0f);
    renderCtxPopState(g_titleScene, 3);
    efctSetSpeed(1.0f);
    uiSpriteAdvanceAnimation((UiSpriteState *)origin);
    if (scene->requested != 0 && scene->cursor[0x8A] != 0)
        scene->confirmed = 1;
}

} /* extern "C" */
