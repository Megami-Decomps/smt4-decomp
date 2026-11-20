#include "camp/Unite/UniteDraw.h"
#include "camp/Unite/UniteGlobals.h"
#include "camp/Unite/UnitePreferences.h"
#include "camp/RenderCtxA.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "text/DebugText.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_VariantC.h"

struct Object;
extern "C" {
void uiDrawListScrollBar(Object *widget, s32 x, s32 y, u32 group, u32 frameId, u32 trackId,
                         u32 trackPressedId, u32 arrowAId, u32 arrowAPressedId, u32 arrowBId,
                         u32 arrowBPressedId, u32 thumbRegion, s32 arrowARegion, u32 arrowBRegion,
                         s32 layer, s32 horizontal);
void uiDrawRotatingGridHighlights(s32 firstEntry, s32 frame);
void renderCtxResetColorScale(RenderCtxA *context);
}

static __inline void drawDebugLabel(const char *text)
{
    debugDrawText(0xFF, 8.0f, 8.0f, 1.0f, text);
}

// Draw the visible fusion panel, including its opening sprite and optional touch overlay.
extern "C" s32 uniteDrawPanel(u32)
{
    UniteWorkA *work = g_unite;
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));

    s32 panel = work->state;
    if (panel == 0x22 || panel == 0x23)
        panel = work->history.saved;
    if (panel == 0x28 || panel == 0xC || panel == 0xE)
        panel = work->history.previous;
    if (panel == 0x24)
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
        f32 opacity = vec2GetSpeed(&work->sprites.open);
        FUN_00285b58(x, y, mode, opacity);
        x += vec2GetXInt(&work->sprites.listOffset);
        y += vec2GetYInt(&work->sprites.listOffset);
        efctSetSpeed(opacity);
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x271, x, y, 0x79);
        uiDrawListScrollBar(reinterpret_cast<Object *>(&work->selectionLists.sourceList), x, y,
                            0x1A, 0x1C, 0x1D, 0x1E, 0x18, 0x1A, 0x19, 0x1B,
                            work->selectionLists.scrollThumbRegion, work->selectionLists.scrollUpRegion,
                            work->selectionLists.scrollDownRegion, 0x79, 0);
        efctSetSpeed(1.0f);
        break;
    }
    case 6: {
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        f32 opacity = vec2GetSpeed(&work->sprites.open);
        FUN_00285b58(x, y, 0, opacity);
        FUN_002aa038(x, y, opacity);
        x += vec2GetXInt(&work->sprites.listOffset);
        y += vec2GetYInt(&work->sprites.listOffset);
        efctSetSpeed(opacity);
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x271, x, y, 0x79);
        uiDrawListScrollBar(reinterpret_cast<Object *>(&work->selectionLists.partnerList), x, y,
                            0x1A, 0x1C, 0x1D, 0x1E, 0x18, 0x1A, 0x19, 0x1B,
                            work->selectionLists.scrollThumbRegion, work->selectionLists.scrollUpRegion,
                            work->selectionLists.scrollDownRegion, 0x79, 0);
        efctSetSpeed(1.0f);
        break;
    }
    case 7:
        drawDebugLabel("\x82r\x82\x85\x82\x81\x82\x92\x82\x83\x82\x88\x82\x89\x82\x8E\x82\x87\x81@");
        break;
    case 0xB: {
        s32 opened = 0;
        if (work->state == 0xB && uiSpriteGetCompletionState(&work->sprites.open))
            opened = 1;
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        FUN_0034abe0(x, y, 0, opened, vec2GetSpeed(&work->sprites.open));
        break;
    }
    case 0xD: {
        s32 opened = 0;
        if (work->state == 0xD && uiSpriteGetCompletionState(&work->sprites.open))
            opened = 1;
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        FUN_002a7bb8(x, y, opened, vec2GetSpeed(&work->sprites.open));
        break;
    }
    case 0x1A:
        drawDebugLabel("\x82`\x81@\x82\x86\x82\x95\x82\x93\x82\x89\x82\x8F\x82\x8E\x81@"
                            "\x82\x85\x82\x92\x82\x92\x82\x8F\x82\x92\x81@\x82\x88\x82\x81\x82\x93\x81@"
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
        f32 opacity = vec2GetSpeed(&work->sprites.open);
        s32 preview = 0;
        if (work->history.previous == 0x1C)
            preview = 1;
        if (work->state == 0x24 && work->history.returnTo == 0x1C)
            preview = 1;
        s32 alternate = 0;
        if (work->history.previous == 0x1E)
            alternate = 1;
        FUN_002a968c(x, y, mode, preview, opened, work->returnState.helpAvailable,
                     alternate, opacity);
        break;
    }
    case 0x1B: {
        s32 opened = 0;
        if (work->state == 0x1B && uiSpriteGetCompletionState(&work->sprites.open))
            opened = 1;
        if (uniteRequest18Active(g_unite))
            opened = 0;
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        FUN_0034abe0(x, y, 1, opened, vec2GetSpeed(&work->sprites.open));
        break;
    }
    case 0x1C: {
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        uniteDrawDetailPanel(x, y, vec2GetSpeed(&work->sprites.open));
        break;
    }
    case 3:
    case 4: {
        s32 x = vec2GetXInt(&work->sprites.open);
        s32 y = vec2GetYInt(&work->sprites.open);
        uniteDrawPanelRows(x, y, vec2GetSpeed(&work->sprites.open));
        break;
    }
    case 2:
        break;
    }

    const FusionCatalogCriteria *criteria = uniteGetCatalogCriteria();
    if ((work->state == 5 || work->state == 6) && work->returnState.busy && criteria->searchEnabled) {
        texDrawTableEntryAtStoredOrigin(2, 0x1A, 0x1D9, 0, 0, 0xFB);
        texDrawCompositeSprite(2, 0x1A, 0x13, 0, 0, 0xFB);
        const TextureTableEntryIV *label = asdTMTexTableEntryAt(0x1A, 0x1DC);
        textDrawString((f32)label->x, (f32)label->y, 0.01953125f,
                       4, 0.0f, 0x57D8FFFF, 1.0f, "\x82r\x82\x85\x82\x81\x82\x92\x82\x83\x82\x88\x82\x89\x82\x8E\x82\x87");
        work->optionNamesA.highlightFrame = (u8)(work->optionNamesA.highlightFrame + 1) % 40;
        uiDrawRotatingGridHighlights(0x1E0, work->optionNamesA.highlightFrame);
    }
    renderStackPop(&g_renderCtx->stackA);
    skinObjectUpdateMatrices(reinterpret_cast<SkinObject *>(g_renderCtx));
    renderCtxResetColorScale(g_renderCtx);
    return 0;
}
