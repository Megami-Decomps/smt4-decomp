/* NON_MATCHING: title scene loading ring draw (nine dots rotating around a centre, "Activating..." caption); written from the decompilation, float/int conversions and the local text copy not compared with retail */
#include "camp/RenderCtx.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"

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

struct LoadingSpriteFrame {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};

#define LOADING_DOT_COUNT 9

extern "C" {
extern RenderCtx *g_titleScene;
extern s32 DAT_0044cdc8;   /* frames per ring step */
extern u32 DAT_0044cdd0;   /* caption colour */

u32 FUN_002c5d80(u32 slot, u32 flags);
void FUN_002bee04(RenderCtx *context, s32 stack, u32 value);
void efctSetSpeed(f32 speed);
void FUN_002bed3c(void);
s32 vec2GetXInt(void *state);
void FUN_002bf380(u32 layer, u32 bank, u32 sprite, s32 x, s32 y, u32 flags);
LoadingSpriteFrame *asdTMTexTableEntryAt(u32 bank, u32 sprite);
s32 FUN_002bedb0(RenderCtx *context, s32 stack);
void FUN_002bf818(void *state);

/* Draws the title loading ring: the backdrop, nine dots with the current and the opposite pair
 * highlighted, and the caption; confirms the load when the origin sprite has finished. */
void FUN_0039bd04(TitleLoadingScene *scene)
{
    u32 slot = FUN_002c5d80(1, 0);
    FUN_002bee04(g_titleScene, 3, slot);
    efctSetSpeed(1.0f);
    FUN_002bed3c();
    void *origin = scene->cursor;
    s32 originX = vec2GetXInt(origin);
    FUN_002bf380(2, 0x1C, 0x1D, originX, 0, 0xD3);

    scene->step = (scene->step + 1) % (u32)DAT_0044cdc8;
    if (scene->step < 1)
        scene->phase = scene->phase + 1;
    s32 phase = scene->phase & 7;
    s32 next = (phase + 1) & 7;
    scene->phase = phase;

    LoadingDot dots[LOADING_DOT_COUNT];
    for (s32 i = 0; i < LOADING_DOT_COUNT; i++) {
        LoadingSpriteFrame *frame = asdTMTexTableEntryAt(0x1C, i + 0x1124);
        dots[i].x = (f32)frame->x;
        dots[i].y = (f32)frame->y;
        FUN_002bf288(1, 0x1C, 0x1121, vec2GetXInt(origin) + frame->x, frame->y, 6);
    }
    FUN_002bf288(1, 0x1C, 0x1123, (s32)((f32)vec2GetXInt(origin) + dots[scene->phase].x), (s32)dots[scene->phase].y, 6);
    FUN_002bf288(1, 0x1C, 0x1122, (s32)((f32)vec2GetXInt(origin) + dots[next].x), (s32)dots[next].y, 6);
    s32 opposite = (scene->phase + 4) & 7;
    s32 oppositeNext = (opposite + 1) & 7;
    FUN_002bf288(1, 0x1C, 0x1123, (s32)((f32)vec2GetXInt(origin) + dots[opposite].x), (s32)dots[opposite].y, 6);
    FUN_002bf288(1, 0x1C, 0x1122, (s32)((f32)vec2GetXInt(origin) + dots[oppositeNext].x), (s32)dots[oppositeNext].y, 6);

    LoadingSpriteFrame *caption = asdTMTexTableEntryAt(0x1C, 0x1120);
    char text[0x1B] = "\x82\x60\x82\x83\x82\x94\x82\x89\x82\x96\x82\x81\x82\x94\x82\x89\x82\x8E\x82\x87\x81\x44\x81\x44\x81\x44";
    textDrawString(4, DAT_0044cdd0, text, (f32)(vec2GetXInt(origin) - 0xE + caption->x), (f32)caption->y, 0.0f, 0.0f, 1.0f);
    FUN_002bedb0(g_titleScene, 3);
    efctSetSpeed(1.0f);
    FUN_002bf818(origin);
    if (scene->requested != 0 && scene->cursor[0x8A] != 0)
        scene->confirmed = 1;
}

} /* extern "C" */
