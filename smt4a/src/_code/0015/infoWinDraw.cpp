/* NON_MATCHING: 288 lines (222 by shape); a port of IV's infoWinDraw with Apocalypse's banner, opacity and
 * frame variants. Same calls, branches, pool and frame as retail. What differs:
 * - retail computes the banner's sprite in r0 and moves it to r9 before the opacity call, keeping 13000 in r9
 *   and the layer 21 in sl; the build selects it in r5 with 13000 in sl. (A single-use inline function
 *   returning the sprite gives retail's r0 and 157 lines, 101 by shape, but nothing else calls for one.)
 * - from there the positions take other registers (retail x r6, y r5, banner x r7; the build r7, r6, r9), so
 *   the draws store y and the layer with two str instead of one stm. */
#include "ui/UiSpriteApi.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "font/InfoWinA.h"
#include "shard/TextureDrawCall.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "ui/AnimatedMessage.h"
#include "gfx/StereoParallax.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {

void FUN_00168e00(s32 x, s32 y, s32 width, s32 height);
void textDrawRangeFaded(void *text, s32 x, s32 y, s32 layer, f32 scale, s32 mode, s32 index);
s32 btlMainIsRunning(void);

/* Draw the information window: its banner (window kind 2), frame, clipped scrolling text and the frame's
 * top, all at the background sprite's opacity. */
s32 infoWinDraw(u32 job)
{
    InfoWindowA *window = g_infoWin;
    if (window->state == 0) {
        return 0;
    }
    if (window->shown == 0) {
        return 0;
    }
    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));
    s32 x = vec2GetXInt(&window->background) + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    s32 y = vec2GetYInt(&window->background);
    s32 contentX = vec2GetXInt(&window->content) + (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.25f);
    f32 opacity = vec2GetSpeed(&window->background);
    if (window->unk32D != 0) {
        x = vec2GetXInt(&window->background);
        contentX = vec2GetXInt(&window->content);
    }
    if (window->active == 2) {
        u32 id = window->pending;
        u32 banner = 5000;
        if (id == 0xAE) {
            banner = 5000;
        } else if (id == 0xB0) {
            banner = 6000;
        } else if (id == 0xAF) {
            banner = 7000;
        } else if (id == 0xAD) {
            banner = 9000;
        } else if (id == 0xB3) {
            banner = 10000;
        } else if (id == 0xB1 || id == 0xBF || id == 0xC0) {
            banner = 12000;
        } else if (id == 0xB2) {
            banner = 13000;
        } else if (id == 5) {
            banner = 14000;
        } else if (id == 0xB9) {
            if (btlMainIsRunning()) {
                banner = 17000;
            } else {
                banner = 13000;
            }
        } else if (id == 0xBA) {
            banner = 11000;
        } else if (id == 0xBB) {
            banner = 15000;
        } else if (id == 6) {
            banner = 16000;
        }
        efctSetSpeed(opacity);
        texDrawTableEntryAtStoredOrigin(2, 27, banner, x + contentX + 2, 0, 21);
        efctSetSpeed(1.0f);
    }
    efctSetSpeed(opacity);
    texDrawTableEntryAtStoredOrigin(2, 8, 135, x, y, 21);
    texDrawTableEntryAtStoredOrigin(2, 8, 136, x, y, 21);
    efctSetSpeed(1.0f);
    if (window->hasText != 0) {
        TextureTableEntryIV *frame = asdTMTexTableEntryAt(8, 135);
        efctSetSpeed(opacity);
        RenderCtxA *context = g_renderCtx;
        bool scissored = false;
        if (renderCtxStackTop(context, RENDER_STACK_SCISSOR) == RENDER_STATE_SCISSOR) {
            renderCtxSetStackTop(context, RENDER_STACK_SCISSOR, 0);
            scissored = true;
        }
        FUN_00168e00(frame->x + x, frame->y + y, frame->placement->width, frame->placement->height);
        TextureTableEntryIV *textBox = asdTMTexTableEntryAt(8, 137);
        if (window->style != 0) {
            textDrawRangeFaded(window->text, textBox->x + x, textBox->y + y, 201, 1.0f, 6, 0);
        } else {
            textDrawRangeFaded(window->text, textBox->x + window->labelX + x, textBox->y + y, 201, 1.0f, 6, 0);
            if (window->wideText != 0) {
                textDrawRangeFaded(window->text, textBox->x + window->textRight + x, textBox->y + y, 201, 1.0f, 6, 0);
            }
        }
        if (scissored) {
            renderStackSet(g_renderCtx->stacks + RENDER_STACK_SCISSOR, RENDER_STATE_SCISSOR);
        }
        renderPopStateStacks();
        efctSetSpeed(1.0f);
    }
    efctSetSpeed(opacity);
    texDrawTableEntryAtStoredOrigin(2, 8, 134, x, y, 31);
    switch (window->active) {
    case 0:
        texDrawTableEntryAtStoredOrigin(2, 8, 258, x, y, 31);
        break;
    case 1:
        texDrawTableEntryAtStoredOrigin(2, 8, 395, x, y, 31);
        break;
    case 2:
        if (window->unk32C != 0) {
            texDrawTableEntryAtStoredOrigin(2, 8, 258, x, y, 31);
        } else {
            texDrawTableEntryAtStoredOrigin(2, 8, 396, x, y, 31);
        }
        break;
    case 3:
        asdTMTexTableEntryAt(8, 137);
        texDrawTableEntryAtStoredOrigin(2, 8, 258, x, y, 31);
        break;
    }
    efctSetSpeed(1.0f);
    renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
    return 0;
}

}
