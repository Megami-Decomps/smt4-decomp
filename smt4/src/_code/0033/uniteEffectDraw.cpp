#include "camp/Unite/UniteEffectState.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "shard/TextureDrawCall.h"
#include "util/BitsAndBytes.h"

extern "C" {

void uniteEffectDrawMaterial(s32 material, s32 opening, s32 shown);
void fadeObjectResetIfActive(UiSpriteState *sprite);
void uiDrawRotatingLoadingGrid(s32 firstPosition, s32 frame);
void renderCtxResetColorScale(RenderCtx *context);

} /* extern "C" */

enum {
    UNITE_SPRITES = 0x24,          /* the fusion screen's sprite table */

    UNITE_EFFECT_LOADING = 3,      /* UniteEffectWork::state: the model animation plays */

    UNITE_IMAGE_SACRIFICE_BACK = 0x204,
    UNITE_IMAGE_SACRIFICE_FRONT = 0x205,
    UNITE_IMAGE_FRAME = 0x206,
    UNITE_IMAGE_LOADING = 0x21D,
    UNITE_IMAGE_RESULT = 0x21E,
    UNITE_IMAGE_SACRIFICE_BLINK = 0x21F,
    UNITE_GRID_POSITION = 0x220
};

/* The frame of the model animation at which a sacrifice fusion's own pictures take over (the draw's
 * counterpart of uniteEffectUpdate's fusionEffectEndFrame; retail reads the count through
 * g_screenStateWork again for it, though the draw holds the work in a register). */
static __inline s32 uniteEffectSacrificeFrame(const UniteEffectWork *work)
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
 * state (loading, with the rotating grid, or the result). */
extern "C" s32 uniteEffectDraw(void)
{
    UniteEffectWork *work = g_screenStateWork;
    const UniteMaterialCue *cues;
    s32 sacrificeFrame;
    s32 x;
    s32 y;

    if (work->state == 0) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushACountedDirect(g_titleScene, renderCtxPackPassFlags(1, 0));
    sacrificeFrame = uniteEffectSacrificeFrame(g_screenStateWork);
    if (work->sacrifice != 0 && (work->state > UNITE_EFFECT_LOADING || work->phase >= sacrificeFrame)) {
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 1, 0));
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, UNITE_IMAGE_SACRIFICE_BACK, 0, 0, 0x5B);
        renderCtxSetB(g_titleScene, packNibblesAndByte(6, 7, 0));
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
    fadeObjectResetIfActive(&work->panel);
    if (work->state < UNITE_EFFECT_LOADING) {
        x = vec2GetXInt(&work->sprites[4]);
        y = vec2GetYInt(&work->sprites[4]);
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, UNITE_IMAGE_LOADING, x, y, 0x79);
    } else if (work->state > UNITE_EFFECT_LOADING) {
        x = vec2GetXInt(&work->sprites[5]);
        y = vec2GetYInt(&work->sprites[5]);
        if (work->sacrifice != 0) {
            if (work->phase % 20 > 10) {
                texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, UNITE_IMAGE_SACRIFICE_BLINK, 0, 0, 0x79);
            }
        } else {
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, UNITE_IMAGE_RESULT, x, y, 0x79);
        }
    } else if (work->sacrifice != 0 && work->phase >= sacrificeFrame) {
        if (work->phase % 20 > 10) {
            texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, UNITE_IMAGE_SACRIFICE_BLINK, 0, 0, 0x79);
        }
    } else {
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, UNITE_IMAGE_LOADING, 0, 0, 0x79);
        uiDrawRotatingLoadingGrid(UNITE_GRID_POSITION, work->renderTarget.loadingFrame);
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}
