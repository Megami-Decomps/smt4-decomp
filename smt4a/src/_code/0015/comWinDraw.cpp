/* NON_MATCHING: 133 lines. Retail leaves the frame entry unset when frameSide is neither 0 nor 1 and reads it
 * anyway; it is initialised to NULL here, so the window base lives in r8 (retail r9), the side tests load into r1 and
 * the first entry stays in r0 (retail r8). Left uninitialised, as retail has it, the rest is 26 lines of registers in
 * the corner translation: retail keeps the margin 4 in r2 and the pivot's width in r1 (r1/r2 here) and numbers the x
 * and y conversions s0/s1 (s1/s0 here). */
#include "ui/MenuState.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "camp/RenderCtxA.h"
#include "gfx/StereoParallax.h"
#include "nw/math/MTX44Transform.h"
#include "shard/TextureDrawCall.h"
#include "shard/W6_W6Match6_ItemIcon.h"
#include "text/TextDraw.h"
#include "util/BitsAndBytes.h"
#include "code/Code0016_Smt4a.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

using nw::math::MTX44;
using nw::math::VEC3Value;

/* The window's texture table and its entries. */
enum {
    COM_WIN_TABLE = 8,
    COM_WIN_BACK = 2,                /* composite sprites: the window and its back */
    COM_WIN_FRAME = 3,
    COM_WIN_PIVOT = 0x15,            /* its size is the window's, scaled about its centre */
    COM_WIN_AMOUNT_BACK = 0x18,      /* the composites of the signed amount's window */
    COM_WIN_AMOUNT_FRAME = 0x19,
    COM_WIN_FRAME_LEFT = 0xDC,       /* where the window sits, by MenuState.frameSide */
    COM_WIN_FRAME_RIGHT = 0xDD,
    COM_WIN_BUTTON_FACE = 0xDE,
    COM_WIN_BUTTON_BASE = 0xDF
};

extern "C" {

extern MenuState *g_menuState;

void skinObjectUpdateMatrices(RenderCtxA *context); // declcheck: local (the shared prototype takes a SkinObject; the draws pass the render context)
void camSetMatrixA(RenderCtxA *context, const MTX44 *matrix);
void FUN_0016631c(MenuState *menu, const TextureTableEntryIV *layout);
void FUN_00165778(MenuState *menu, TextureTableEntryIV *frame);
void FUN_00167860(u32 id, u32 x, u32 y, u32 z);

/* Draws the common window: its frame scaled about its centre by the open/close animation, then the caption
 * with the mark or icon its type asks for. Returns 0. */
u32 comWinDraw(void)
{
    MenuState *menu = g_menuState;
    if (menu->mode == 0) {
        return 0;
    }

    renderCtxSelectDisplayAreaForStereoMode(g_renderCtx);
    renderCtxPushA(g_renderCtx, renderCtxPackPassFlags(1, 0));

    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_renderCtx, 0.29f);
    efctSetSpeed(vec2GetSpeed(&menu->primarySprites[0]));
    f32 scale = menu->primarySprites[0].scale[0];
    /* Built before the matrices: retail carries the x/y scale as a copy (vmov.f32 s0, s18) into the scale build. */
    VEC3Value scales(scale, scale, scale);

    MTX44 matrix;
    MTX44 transform;
    MTX44Identity(&matrix);
    MTX44Identity(&transform);

    s32 y = 0;
    if (menu->type == COM_WIN_TYPE_LOWERED) {
        y = -60;
    }

    /* frameSide is 0 or 1; retail leaves the entry unset for any other side and reads it anyway. */
    TextureTableEntryIV *frame = NULL;
    if (menu->frameSide == 0) {
        frame = asdTMTexTableEntryAt(COM_WIN_TABLE, COM_WIN_FRAME_LEFT);
    }
    if (menu->frameSide == 1) {
        frame = asdTMTexTableEntryAt(COM_WIN_TABLE, COM_WIN_FRAME_RIGHT);
    }

    /* The window's centre, the animation's scale about it, and back to the window's corner. */
    VEC3Value centre((f32)(frame->x + (parallax + frame->placement->width / 2)),
                     (f32)(frame->y + frame->placement->height / 2), 0.0f);
    MTX44Translate(&transform, &centre);
    MTX44Mult(&matrix, &matrix, &transform);

    MTX44Scale(&transform, &scales);
    MTX44Mult(&matrix, &matrix, &transform);

    frame = asdTMTexTableEntryAt(COM_WIN_TABLE, COM_WIN_PIVOT);
    VEC3Value corner((f32)-(frame->placement->width / 2 + 4), (f32)-(frame->placement->height / 2 + 4), 0.0f);
    MTX44Translate(&transform, &corner);
    MTX44Mult(&matrix, &matrix, &transform);
    camSetMatrixA(g_renderCtx, &matrix);

    if (menu->mode == 2) {
        efctSetSpeed(vec2GetSpeed(&menu->primarySprites[1]));
    }

    if (menu->showSign != 0 && menu->amount >= 0) {
        renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
        texDrawCompositeSprite(2, COM_WIN_TABLE, COM_WIN_AMOUNT_FRAME, 0, 0, 101);
        renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(vec2GetSpeed(&menu->primarySprites[0]));
        texDrawCompositeSprite(2, COM_WIN_TABLE, COM_WIN_AMOUNT_BACK, 0, 0, 106);
    } else {
        renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
        texDrawCompositeSprite(2, COM_WIN_TABLE, COM_WIN_FRAME, 0, y, 101);
        renderCtxSetStackTop(g_renderCtx, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
        efctSetSpeed(vec2GetSpeed(&menu->primarySprites[0]));
        texDrawCompositeSprite(2, COM_WIN_TABLE, COM_WIN_BACK, 0, y, 106);
    }

    if (menu->captionShown) {
        if (menu->frameSide == 0) {
            frame = asdTMTexTableEntryAt(COM_WIN_TABLE, COM_WIN_FRAME_LEFT);
        }
        if (menu->frameSide == 1) {
            frame = asdTMTexTableEntryAt(COM_WIN_TABLE, COM_WIN_FRAME_RIGHT);
        }
        if (menu->type == COM_WIN_TYPE_AMOUNT) {
            FUN_0016631c(menu, frame);
        } else if (menu->type == COM_WIN_TYPE_BADGE) {
            FUN_00165778(menu, frame);
        } else {
            s32 left = (frame->placement->width - fontMeasureLineAdvance(menu->caption, 4)) / 2;
            textDrawString((f32)left, (f32)(y + 6), 0.57f, 4, 0.0f, -1, vec2GetSpeed(&menu->primarySprites[0]),
                           menu->caption);
            if (menu->type == COM_WIN_TYPE_BUTTONS) {
                texDrawTableEntryAtStoredOrigin(2, COM_WIN_TABLE, COM_WIN_BUTTON_BASE, left - 13, 7, 111);
                texDrawTableEntryAtStoredOrigin(2, COM_WIN_TABLE, COM_WIN_BUTTON_FACE, left - 13, 7, 116);
            }
            if (menu->type == COM_WIN_TYPE_RECORD) {
                FUN_00167860(menu->iconId, left - 13, 8, 121);
            }
            if (menu->type == COM_WIN_TYPE_ITEM) {
                uiDrawItemCategoryIcon(menu->iconId, left - 13, 8, 121, 0);
            }
            if (menu->type == COM_WIN_TYPE_LOWERED) {
                FUN_00168470((u16)menu->iconId, left - 13, y + 8, 121);
            }
        }
    }

    skinObjectUpdateMatrices(g_renderCtx);
    efctSetSpeed(1.0f);
    renderCtxPopCounted(g_renderCtx, RENDER_STACK_A);
    return 0;
}

} /* extern "C" */
