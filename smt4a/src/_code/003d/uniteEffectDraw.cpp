/* NON_MATCHING: 42 lines (12 by shape); a port of smt4 uniteEffectDraw with Apocalypse's text captions. Retail loads
 * the captions' 0.0f letter spacing (s17) before the frame is drawn, this build with the caption depth after the
 * panel; and in the "Fusing..." caption of the opening states retail holds the entry's y in r2 and x in r1, this
 * build the reverse (the other four captions agree). */
#include "camp/Unite/UniteEffectState.h"
#include "camp/RenderCtxA.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"

extern "C" {

extern UniteEffectWorkA *g_uniteEffectWork;

void uniteEffectDrawMaterial(s32 material, s32 opening, s32 shown);
void fadeObjectResetIfActive(UiSpriteState *sprite);
void uiDrawRotatingGridHighlights(s32 firstEntry, s32 frame);
void skinObjectUpdateMatrices(RenderCtxA *context); // declcheck: local (the shared declaration takes a SkinObject; the draws pass the render context)
void renderCtxResetColorScale(RenderCtxA *context);

} /* extern "C" */

enum {
    UNITE_SPRITES = 0x1A,          /* the fusion screen's sprite table */

    UNITE_EFFECT_LOADING = 3,      /* UniteEffectWorkA::state: the model animation plays */

    UNITE_IMAGE_SACRIFICE_BACK = 0x204,
    UNITE_IMAGE_SACRIFICE_FRONT = 0x205,
    UNITE_IMAGE_FRAME = 0x206,
    UNITE_CAPTION_LOADING = 0x21D, /* table entries that only place a caption */
    UNITE_CAPTION_RESULT = 0x21E,
    UNITE_CAPTION_ACCIDENT = 0x21F,
    UNITE_GRID_POSITION = 0x220,

    UNITE_PANEL_IMAGE = 0x18,
    UNITE_PANEL_IMAGE_ACCIDENT = 0x19,

    UNITE_CAPTION_LAYER = 4
};

/* The captions' colours (enumerators above 0x7fffffff would widen the enum). */
#define UNITE_CAPTION_COLOR 0x57D8FFFFu
#define UNITE_CAPTION_COLOR_ACCIDENT 0xDC0F14FFu

/* The frame of the model animation at which a sacrifice fusion's own pictures take over (retail reads
 * the count through g_uniteEffectWork again for it, though the draw holds the work in a register). */
static __inline s32 uniteEffectSacrificeFrame(const UniteEffectWorkA *work)
{
    s32 frame = 0;

    if (work->materialCount == 2) {
        frame = 655;
    } else if (work->materialCount == 3) {
        frame = 785;
    } else if (work->materialCount == 4) {
        frame = 785;
    }
    return frame;
}

/* Draws the fusion effect's sprites over its model: the sacrifice pictures, the frame, the material
 * portraits (each opening, shown or closed by its cue), the panel and the caption of the current
 * state ("Fusing...", with the rotating grid, "Complete" or a blinking "Fusion Error"). */
extern "C" s32 uniteEffectDraw(void)
{
    UniteEffectWorkA *work = g_uniteEffectWork;
    const UniteMaterialCue *cues;
    const TextureTableEntryIV *entry;
    s32 sacrificeFrame;
    s32 x;
    s32 y;

    if (work->state == 0) {
        return 0;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushACounted(g_renderCtx, renderCtxPackPassFlags(1, 0));
    sacrificeFrame = uniteEffectSacrificeFrame(g_uniteEffectWork);
    if (work->sacrifice != 0 && (work->state > UNITE_EFFECT_LOADING || work->phase >= sacrificeFrame)) {
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 1, 0));
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, UNITE_IMAGE_SACRIFICE_BACK, 0, 0, 0x5B);
        renderCtxSetB(g_renderCtx, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(vec2GetSpeed(&work->cursor));
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, UNITE_IMAGE_SACRIFICE_FRONT, 0, 0, 0x60);
        efctSetSpeed(1.0f);
    }
    x = vec2GetXInt(&work->sprites[0]);
    y = vec2GetYInt(&work->sprites[0]);
    texDrawCompositeSprite(2, UNITE_SPRITES, 1, x, y, 0x65);
    texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, UNITE_IMAGE_FRAME, x, y, 0x65);
    cues = NULL;
    if (work->materialCount == 2) {
        cues = g_uniteMaterialCues2;
    } else if (work->materialCount == 3) {
        cues = g_uniteMaterialCues3;
    } else if (work->materialCount == 4) {
        cues = g_uniteMaterialCues4;
    }
    for (s32 i = 0; i < 4; i++) {
        if (work->state < UNITE_EFFECT_LOADING) {
            uniteEffectDrawMaterial(i, 0, 0);
        } else if (work->state > UNITE_EFFECT_LOADING) {
            uniteEffectDrawMaterial(i, 0, 1);
        } else if (work->phase < cues[i].start - 5) {
            uniteEffectDrawMaterial(i, 0, 0);
        } else if (work->phase < cues[i].end + 5) {
            uniteEffectDrawMaterial(i, 1, 0);
        } else {
            uniteEffectDrawMaterial(i, 0, 1);
        }
    }
    if (work->sacrifice != 0 && (work->phase >= sacrificeFrame || work->state > UNITE_EFFECT_LOADING)) {
        pairSetSecondResetFirst(&work->panel, UNITE_PANEL_IMAGE_ACCIDENT);
    } else {
        pairSetSecondResetFirst(&work->panel, UNITE_PANEL_IMAGE);
    }
    fadeObjectResetIfActive(&work->panel);
    if (work->state < UNITE_EFFECT_LOADING) {
        x = vec2GetXInt(&work->sprites[4]);
        y = vec2GetYInt(&work->sprites[4]);
        entry = asdTMTexTableEntryAt(UNITE_SPRITES, UNITE_CAPTION_LOADING);
        /* "Fusing..." in full-width letters */
        textDrawString((f32)(entry->x + x), (f32)(entry->y + y), 0.52734375f, UNITE_CAPTION_LAYER, 0.0f,
                       UNITE_CAPTION_COLOR, 1.0f, "\x82\x65\x82\x95\x82\x93\x82\x89\x82\x8e\x82\x87\x81\x44\x81\x44\x81\x44");
    } else if (work->state > UNITE_EFFECT_LOADING) {
        x = vec2GetXInt(&work->sprites[5]);
        y = vec2GetYInt(&work->sprites[5]);
        if (work->sacrifice != 0) {
            if (work->phase % 20 > 10) {
                entry = asdTMTexTableEntryAt(UNITE_SPRITES, UNITE_CAPTION_ACCIDENT);
                /* "Fusion Error" */
                textDrawString((f32)(entry->x + x), (f32)(entry->y + y), 0.52734375f, UNITE_CAPTION_LAYER, 0.0f,
                               UNITE_CAPTION_COLOR_ACCIDENT, 1.0f,
                               "\x82\x65\x82\x95\x82\x93\x82\x89\x82\x8f\x82\x8e\x81\x40\x82\x64\x82\x92\x82\x92\x82\x8f\x82\x92");
            }
        } else {
            entry = asdTMTexTableEntryAt(UNITE_SPRITES, UNITE_CAPTION_RESULT);
            /* "Complete" */
            textDrawString((f32)(entry->x + x), (f32)(entry->y + y), 0.52734375f, UNITE_CAPTION_LAYER, 0.0f,
                           UNITE_CAPTION_COLOR, 1.0f, "\x82\x62\x82\x8f\x82\x8d\x82\x90\x82\x8c\x82\x85\x82\x94\x82\x85");
        }
    } else if (work->sacrifice != 0 && work->phase >= sacrificeFrame) {
        /* still at the frame's position */
        if (work->phase % 20 > 10) {
            entry = asdTMTexTableEntryAt(UNITE_SPRITES, UNITE_CAPTION_ACCIDENT);
            textDrawString((f32)(entry->x + x), (f32)(entry->y + y), 0.52734375f, UNITE_CAPTION_LAYER, 0.0f,
                           UNITE_CAPTION_COLOR_ACCIDENT, 1.0f,
                           "\x82\x65\x82\x95\x82\x93\x82\x89\x82\x8f\x82\x8e\x81\x40\x82\x64\x82\x92\x82\x92\x82\x8f\x82\x92");
        }
    } else {
        entry = asdTMTexTableEntryAt(UNITE_SPRITES, UNITE_CAPTION_LOADING);
        textDrawString((f32)entry->x, (f32)entry->y, 0.52734375f, UNITE_CAPTION_LAYER, 0.0f, UNITE_CAPTION_COLOR, 1.0f,
                       "\x82\x65\x82\x95\x82\x93\x82\x89\x82\x8e\x82\x87\x81\x44\x81\x44\x81\x44");
        uiDrawRotatingGridHighlights(UNITE_GRID_POSITION, work->renderTarget.loadingFrame);
    }
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    skinObjectUpdateMatrices(g_renderCtx);
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
