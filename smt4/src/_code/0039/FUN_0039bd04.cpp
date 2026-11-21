/* NON_MATCHING: title scene loading ring; retail keeps the tuning block's address in r9 (reloading g_titleScene for
 * the pop), copies the caption with __aeabi_memcpy4 into a smaller frame and numbers the phase registers differently. */
#include "camp/RenderCtx.h"
#include "title/TitleSceneTuning.h"
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
    /* 0x9F8 */ UiSpriteState cursor; /* sprite state of the ring's origin */
};

struct LoadingDot {
    f32 x;
    f32 y;
};

#define LOADING_DOT_COUNT 9

extern "C" {

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
    s32 originX = vec2GetXInt(&scene->cursor);
    texDrawCompositeSprite(2, 0x1C, 0x1D, originX, 0, 0xD3);

    scene->step = (scene->step + 1) % DAT_0044cdc8.framesPerStep;
    if (scene->step <= 0)
        scene->phase = scene->phase + 1;
    s32 phase = scene->phase & 7;
    s32 next = (phase + 1) & 7;
    scene->phase = phase;

    LoadingDot dots[LOADING_DOT_COUNT];
    for (s32 i = 0; i < LOADING_DOT_COUNT; i++) {
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x1C, i + 0x1124);
        dots[i].x = (f32)frame->x;
        dots[i].y = (f32)frame->y;
        texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1121, vec2GetXInt(&scene->cursor) + frame->x, frame->y, 6);
    }
    texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1123, (s32)((f32)vec2GetXInt(&scene->cursor) + dots[scene->phase].x), (s32)dots[scene->phase].y, 6);
    texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1122, (s32)((f32)vec2GetXInt(&scene->cursor) + dots[next].x), (s32)dots[next].y, 6);
    s32 opposite = (scene->phase + 4) & 7;
    s32 oppositeNext = (opposite + 1) & 7;
    texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1123, (s32)((f32)vec2GetXInt(&scene->cursor) + dots[opposite].x), (s32)dots[opposite].y, 6);
    texDrawTableEntryAtStoredOrigin(1, 0x1C, 0x1122, (s32)((f32)vec2GetXInt(&scene->cursor) + dots[oppositeNext].x), (s32)dots[oppositeNext].y, 6);

    TextureTableEntryIV *caption = asdTMTexTableEntryAt(0x1C, 0x1120);
    char text[0x1B] = "\x82\x60\x82\x83\x82\x94\x82\x89\x82\x96\x82\x81\x82\x94\x82\x89\x82\x8E\x82\x87\x81\x44\x81\x44\x81\x44";
    textDrawString((f32)(vec2GetXInt(&scene->cursor) - 0xE + caption->x), (f32)caption->y, 0.0f, 4, 0.0f, DAT_0044cdc8.loadingCaptionColor, 1.0f, text);
    renderCtxPopState(g_titleScene, 3);
    efctSetSpeed(1.0f);
    uiSpriteAdvanceAnimation(&scene->cursor);
    if (scene->requested != 0 && scene->cursor.finished != 0)
        scene->confirmed = 1;
}

} /* extern "C" */
