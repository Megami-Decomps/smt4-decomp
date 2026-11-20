#include "ui/UiSpriteApi.h"
#include "shard/PlayScene.h"
#include "shard/W6_W6Match2_EffectEditor.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "util/BitsAndBytes.h"
#include "ui/AnimatedMessage.h"

extern "C" {

void renderCtxResetColorScale(RenderCtx *context);
/* The party panels: `expanded` selects the wide layout, `allLit` lights every panel, `lift` raises them by
   that many steps and `dimGuest` darkens the guest panel. */
void FUN_0025f6b8(PlayScene *scene, s32 expanded, s32 allLit, s32 lift, s32 dimGuest);
void campDrawPartyComparisonIndicators(PlayScene *scene, s32 forceFull);
void FUN_0025ee64(PlayScene *scene);
void FUN_0025d1c4(PlayScene *scene);
void btlUiPartyDisplayDrawEntry(PlayScene *scene);
void uiIconScrollerDrawArrow(PlayScene *scene, s32 amount);
void selectionPanelDrawMarkers(PlayScene *scene, s32 drawAll);

/* Draws the battle UI's party display for the scene's state. */
void btlUiPartyDisplayDraw(PlayScene *scene)
{
    s32 state;
    s32 mode;
    s32 lift;

    renderCtxSelectStereoLayout(g_titleScene);
    gxResetColorQuadToWhite();
    /* Nothing is drawn once the display has slid out. */
    if ((scene->state == 6 && scene->unk5918 == 3 && uiSpriteGetCompletionState(&scene->timer)) ||
        ((scene->state == 0x2B || scene->state == 0x2C) && uiSpriteGetCompletionState(&scene->timer))) {
        return;
    }
    /* Transitional states draw the state they come from. */
    state = scene->state;
    if (state == 2) {
        state = scene->mode;
    }
    if (state == 6 || state == 3 || state == 4 || state == 5) {
        state = scene->mode;
    }
    if (state == 0x2B || state == 0x2C) {
        state = scene->mode;
    }
    switch (state) {
    case 1:
    case 23:
    case 26:
    case 27:
    case 45:
        FUN_0025f6b8(scene, 0, 0, 0, 0);
        campDrawPartyComparisonIndicators(scene, 0);
        FUN_0025f300(scene);
        FUN_0025ee64(scene);
        break;
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 20:
    case 21:
        FUN_0025f6b8(scene, 0, 0, 0, 0);
        campDrawPartyComparisonIndicators(scene, 0);
        FUN_0025f300(scene);
        FUN_0025ee64(scene);
        FUN_0025d1c4(scene);
        break;
    case 16:
        FUN_0025f6b8(scene, 1, 1, scene->unk3044, 0);
        campDrawPartyComparisonIndicators(scene, 1);
        FUN_0025ee64(scene);
        FUN_0025d1c4(scene);
        break;
    case 17:
    case 41:
        FUN_0025f6b8(scene, 0, 0, 0, 0);
        campDrawPartyComparisonIndicators(scene, 0);
        FUN_0025ee64(scene);
        FUN_0025d1c4(scene);
        break;
    case 18:
    case 19:
        FUN_0025f6b8(scene, 0, 0, 0, 0);
        campDrawPartyComparisonIndicators(scene, 0);
        FUN_0025f300(scene);
        FUN_0025ee64(scene);
        FUN_0025d1c4(scene);
        btlUiPartyDisplayDrawEntry(scene);
        break;
    case 22:
        FUN_0025f6b8(scene, 0, 1, 0, 0);
        campDrawPartyComparisonIndicators(scene, 0);
        FUN_0025ee64(scene);
        selectionPanelDrawMarkers(scene, 1);
        break;
    case 24:
    case 25:
    case 28:
        lift = 8 - scene->unk3044;
        if (lift < 0) {
            lift = 0;
        }
        mode = scene->mode;
        if (mode != 34 && mode != 35 && mode != 36) {
            FUN_0025f6b8(scene, 1, 0, lift, 0);
        } else {
            FUN_0025f6b8(scene, 1, 1, lift, 0);
        }
        break;
    case 29:
        mode = scene->mode;
        if (mode == 34 || mode == 35 || mode == 36) {
            FUN_0025f6b8(scene, 1, 1, 0, 0);
            campDrawPartyComparisonIndicators(scene, 1);
        } else {
            FUN_0025f6b8(scene, 1, 0, 0, 0);
            campDrawPartyComparisonIndicators(scene, 0);
        }
        if (scene->mode == 26 && scene->unk305C != 0) {
            break;
        }
        uiIconScrollerDrawArrow(scene, 0);
        break;
    case 40:
        FUN_0025f6b8(scene, 1, 0, 0, 0);
        campDrawPartyComparisonIndicators(scene, 0);
        uiIconScrollerDrawArrow(scene, 0);
        break;
    case 31:
        FUN_0025f6b8(scene, 1, 0, 0, 0);
        break;
    case 32:
        if (scene->unk3081) {
            FUN_0025f6b8(scene, 1, 0, 0, 0);
            break;
        }
        /* fall through */
    case 14:
    case 15:
    case 30:
    case 33:
    case 42:
        FUN_0025f6b8(scene, 1, 1, 0, 0);
        break;
    case 34:
        FUN_0025f6b8(scene, 0, 1, 0, 1);
        campDrawPartyComparisonIndicators(scene, 1);
        FUN_0025ee64(scene);
        selectionPanelDrawMarkers(scene, 0);
        break;
    case 36:
        FUN_0025f6b8(scene, 0, 0, 0, 0);
        campDrawPartyComparisonIndicators(scene, 0);
        FUN_0025ee64(scene);
        selectionPanelDrawMarkers(scene, 0);
        break;
    case 35:
        FUN_0025f6b8(scene, 0, 1, 0, 1);
        campDrawPartyComparisonIndicators(scene, 1);
        FUN_0025ee64(scene);
        selectionPanelDrawMarkers(scene, 1);
        break;
    case 37:
    case 38:
        mode = scene->mode;
        if (mode != 34 && mode != 35 && mode != 36) {
            FUN_0025f6b8(scene, 0, 0, 0, 0);
            campDrawPartyComparisonIndicators(scene, 0);
        } else {
            FUN_0025f6b8(scene, 0, 1, 0, 1);
            campDrawPartyComparisonIndicators(scene, 1);
        }
        FUN_0025f300(scene);
        FUN_0025ee64(scene);
        break;
    case 39:
        mode = scene->mode;
        if (mode == 29 || mode == 32 || mode == 30 || mode == 25) {
            FUN_0025f6b8(scene, 1, 0, 0, 0);
        } else {
            FUN_0025f6b8(scene, 0, 0, 0, 0);
            campDrawPartyComparisonIndicators(scene, 0);
            FUN_0025f300(scene);
            FUN_0025ee64(scene);
        }
        break;
    }
    if (scene->state == 6) {
        btlUiPartyDisplayDrawEntry(scene);
    }
    RenderCtx *context = g_titleScene;
    renderCtxSetB(context, packNibblesAndByte(6, 7, 0));
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
}

} /* extern "C" */
