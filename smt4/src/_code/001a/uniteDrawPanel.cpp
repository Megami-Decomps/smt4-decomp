#include "camp/Unite/UniteDraw.h"
#include "camp/Unite/UniteGlobals.h"
#include "camp/Unite/UnitePreferences.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "code/Code0029_Smt4.h"
#include "shard/TextureDrawCall.h"

extern "C" {
void uiDrawListScrollBar(void *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId, u32 trackPressedId,
    u32 arrowAId, u32 arrowAPressedId, u32 arrowBId, u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion,
    u32 arrowBRegion, s32 layer, s32 horizontal);
void uiDrawRotatingLoadingGrid(s32 firstPosition, s32 frame);
void renderCtxResetColorScale(RenderCtx *context);
}

enum {
    UNITE_SPRITES = 0x24 /* the fusion screen's sprite table */
};

static __inline void drawDebugLabel(const char *text)
{
    debugDrawText(0xFF, 8.0f, 8.0f, 1.0f, text);
}

// Draw the visible fusion panel, including its opening sprite and the "searching" overlay.
extern "C" s32 uniteDrawPanel(u32)
{
    UniteWork *work = g_unite;
    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));

    s32 panel = work->state;
    if (panel == 0x1F || panel == 0x20)
        panel = work->history.saved;
    if (panel == 0x24 || panel == 0xC || panel == 0xE)
        panel = work->history.previous;
    if (panel == 0x21)
        panel = work->history.saved;

    switch (panel) {
    case 5:
    case 8:
    case 9:
    case 10: {
        s32 mode = 0;
        if (work->state == 9)
            mode = 1;
        else if (work->state == 10)
            mode = 2;
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        uniteDrawListPanel(x, y, mode);
        x += vec2GetXInt(&work->sprites.listOffset);
        y += vec2GetYInt(&work->sprites.listOffset);
        uiDrawListScrollBar(&work->selectionListsIV.sourceList, x, y,
                            UNITE_SPRITES, 0x1C, 0x1D, 0x1E, 0x18, 0x1A, 0x19, 0x1B,
                            work->touchIV.scrollThumbRegion, work->touchIV.scrollUpRegion,
                            work->touchIV.scrollDownRegion, 0x79, 0);
        break;
    }
    case 6: {
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        uniteDrawListPanel(x, y, 0);
        uniteFilterValueListDraw(x, y);
        x += vec2GetXInt(&work->sprites.listOffset);
        y += vec2GetYInt(&work->sprites.listOffset);
        uiDrawListScrollBar(&work->selectionListsIV.partnerList, x, y,
                            UNITE_SPRITES, 0x1C, 0x1D, 0x1E, 0x18, 0x1A, 0x19, 0x1B,
                            work->touchIV.scrollThumbRegion, work->touchIV.scrollUpRegion,
                            work->touchIV.scrollDownRegion, 0x79, 0);
        break;
    }
    case 7:
        /* Full-width "Fusing" */
        drawDebugLabel("\x82\x65\x82\x95\x82\x93\x82\x89\x82\x8E\x82\x87");
        break;
    case 0xB: {
        s32 opened = 0;
        if (work->state == 0xB && uiSpriteGetCompletionState(&work->sprites.open))
            opened = 1;
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        FUN_002d96d4(x, y, 0, opened);
        break;
    }
    case 0xD: {
        s32 opened = 0;
        if (work->state == 0xD && uiSpriteGetCompletionState(&work->sprites.open))
            opened = 1;
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        FUN_001eef8c(x, y, opened);
        break;
    }
    case 0x19:
        /* Full-width "A fusion accident has occurred." */
        drawDebugLabel("\x82`\x81@\x82\x86\x82\x95\x82\x93\x82\x89\x82\x8F\x82\x8E\x81@"
                       "\x82\x81\x82\x83\x82\x83\x82\x89\x82\x84\x82\x85\x82\x8E\x82\x94\x81@"
                       "\x82\x88\x82\x81\x82\x93\x81@"
                       "\x82\x8F\x82\x83\x82\x83\x82\x95\x82\x92\x82\x92\x82\x85\x82\x84\x81" "D");
        break;
    case 0xF:
    case 0x10:
    case 0x11:
    case 0x12: {
        u32 opened = 0;
        if (work->state == 0xF && uiSpriteGetCompletionState(&work->sprites.open))
            opened = 1;
        u32 mode = 0;
        if (work->state == 0x10)
            mode = 1;
        else if (work->state == 0x11)
            mode = 2;
        else if (work->state == 0x12)
            mode = 3;
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        s32 preview = 0;
        if (work->history.previous == 0x1B)
            preview = 1;
        if (work->state == 0x21 && work->history.returnTo == 0x1B)
            preview = 1;
        FUN_001f0540(x, y, mode, preview, opened, work->eventFlagsIV.ready);
        break;
    }
    case 0x1A: {
        s32 opened = 0;
        if (work->state == 0x1A && uiSpriteGetCompletionState(&work->sprites.open))
            opened = 1;
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        FUN_002d96d4(x, y, 1, opened);
        break;
    }
    case 0x1B: {
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        uniteDrawSpecialFusionPanel(x, y);
        break;
    }
    case 3:
    case 4: {
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        uniteOptionListDraw(x, y);
        break;
    }
    case 2:
        break;
    }

    const FusionCatalogCriteria *criteria = uniteGetCatalogCriteria();
    if ((work->state == 5 || work->state == 6) && work->blocked && criteria->searchEnabled) {
        texDrawTableEntryAtStoredOrigin(2, UNITE_SPRITES, 0x1D9, 0, 0, 0xFB);
        texDrawCompositeSprite(2, UNITE_SPRITES, 0x13, 0, 0, 0xFB);
        work->searchingFrame = (u8)(work->searchingFrame + 1) % 40;
        uiDrawRotatingLoadingGrid(0x1E0, work->searchingFrame);
    }
    renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
    renderCtxApplyTransforms(g_titleScene);
    renderCtxResetColorScale(g_titleScene);
    return 0;
}
