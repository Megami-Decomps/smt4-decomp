/* NON_MATCHING: 137 lines (the twin of smt4a FUN_0015519c). Retail leaves the frame entry unset when frameSide is
 * neither 0 nor 1 and reads it anyway; it is initialised to NULL here, which moves the window base and the side tests
 * to other registers. Left uninitialised, as retail has it, the rest is 24 lines of registers: the first translation
 * numbers the x and y conversions s0/s1 (s1/s0 here), and the corner's build keeps the margin 4 in r2 and the pivot's
 * width in r1 (r1/r2 here). */
#include "ui/CommandWindow.h"
#include "ui/UiSpriteApi.h"
#include "ui/AnimatedMessage.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/StereoParallax.h"
#include "nw/math/MTX44Transform.h"
#include "shard/TextureDrawCall.h"
#include "text/TextDraw.h"
#include "util/BitsAndBytes.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

using nw::math::MTX44;
using nw::math::VEC3Value;

/* The window's texture table and its entries. */
enum {
    COM_WIN_TABLE = 14,
    COM_WIN_BACK = 2,                /* composite sprites: the window and its back */
    COM_WIN_FRAME = 3,
    COM_WIN_PIVOT = 0x15,            /* its size is the window's, scaled about its centre */
    COM_WIN_FRAME_LEFT = 0xDC,       /* where the window sits, by CommandWindow.frameSide */
    COM_WIN_FRAME_RIGHT = 0xDD,
    COM_WIN_BUTTON_FACE = 0xDE,
    COM_WIN_BUTTON_BASE = 0xDF
};

/* CommandWindow.state: what is drawn before the text. */
enum {
    COM_WIN_STATE_BUTTONS = 1,       /* a two-part button mark */
    COM_WIN_STATE_SKILL = 2,         /* a skill's icon */
    COM_WIN_STATE_ITEM = 3,          /* an item category icon */
    COM_WIN_STATE_RECORD = 4,
    COM_WIN_STATE_ICON = 5
};

extern "C" {

void cameraSetViewMatrix(RenderCtx *scene, const MTX44 *matrix);
void FUN_002b6db0(u32 id, u32 x, u32 y, u32 z);
void FUN_002b6c34(s32 skill, s32 x, s32 y, s32 depth, s32 player, s32 highlight);
void FUN_002b6b8c(s32 id, u32 x, u32 y, u32 z);
void itemDrawCategoryBadge(u32 id, s32 x, s32 y, s32 priority, s32 markEquipped); // declcheck: local (the definition's own form; the shared header's BadgeWord last argument is how the forwarding wrappers pass it)

/* Draws the common window: its frame scaled about its centre by the open/close animation, then the text with
 * the mark or icon its state asks for. Returns 0. */
u32 comWinDraw(void)
{
    CommandWindow *window = g_comWin;
    if (window->phase == 0) {
        return 0;
    }

    renderCtxSelectStereoLayout(g_titleScene);
    renderCtxPushA(g_titleScene, renderCtxPackPassFlags(1, 0));

    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.29f);
    efctSetSpeed(vec2GetSpeed(&window->sprites[0]));
    f32 scale = window->sprites[0].scale[0];
    /* Built before the matrices: retail carries the x/y scale as a copy (vmov.f32 s0, s18) into the scale build. */
    VEC3Value scales(scale, scale, scale);

    MTX44 matrix;
    MTX44 transform;
    mtx44Copy(&matrix, &MTX44::Identity());
    mtx44Copy(&transform, &MTX44::Identity());

    /* frameSide is 0 or 1; retail leaves the entry unset for any other side and reads it anyway. */
    TextureTableEntryIV *frame = NULL;
    if (window->frameSide == 0) {
        frame = asdTMTexTableEntryAt(COM_WIN_TABLE, COM_WIN_FRAME_LEFT);
    }
    if (window->frameSide == 1) {
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
    cameraSetViewMatrix(g_titleScene, &matrix);

    if (window->phase == 2) {
        efctSetSpeed(vec2GetSpeed(&window->sprites[1]));
    }

    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    texDrawCompositeSprite(2, COM_WIN_TABLE, COM_WIN_FRAME, 0, 0, 101);
    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
    efctSetSpeed(vec2GetSpeed(&window->sprites[0]));
    texDrawCompositeSprite(2, COM_WIN_TABLE, COM_WIN_BACK, 0, 0, 106);

    if (window->textEnabled) {
        if (window->frameSide == 0) {
            frame = asdTMTexTableEntryAt(COM_WIN_TABLE, COM_WIN_FRAME_LEFT);
        }
        if (window->frameSide == 1) {
            frame = asdTMTexTableEntryAt(COM_WIN_TABLE, COM_WIN_FRAME_RIGHT);
        }
        s32 left = (frame->placement->width - fontMeasureLineAdvance(window->text, 4)) / 2;
        textDrawString((f32)left, 6.0f, 0.57f, 4, 0.0f, 0xFF, vec2GetSpeed(&window->sprites[0]), window->text);
        if (window->state == COM_WIN_STATE_BUTTONS) {
            texDrawTableEntryAtStoredOrigin(2, COM_WIN_TABLE, COM_WIN_BUTTON_BASE, left - 13, 7, 111);
            texDrawTableEntryAtStoredOrigin(2, COM_WIN_TABLE, COM_WIN_BUTTON_FACE, left - 13, 7, 116);
        }
        if (window->state == COM_WIN_STATE_RECORD) {
            FUN_002b6db0((s16)window->value, left - 13, 8, 121);
        }
        if (window->state == COM_WIN_STATE_SKILL) {
            FUN_002b6c34((s16)window->value, left - 13, 8, 121, window->skillPlayer, 0);
        }
        if (window->state == COM_WIN_STATE_ITEM) {
            itemDrawCategoryBadge((s16)window->value, left - 13, 8, 121, 0);
        }
        if (window->state == COM_WIN_STATE_ICON) {
            FUN_002b6b8c(window->value, left - 13, 8, 121);
        }
    }

    renderCtxApplyTransforms(g_titleScene);
    efctSetSpeed(1.0f);
    renderCtxPopCounted(g_titleScene, RENDER_STACK_A);
    return 0;
}

} /* extern "C" */
