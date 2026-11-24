/* NON_MATCHING: 231 raw / 165 shape lines (from the raw decompilation's 424/376): the calls, branches and frame are
 * retail's. Left: this build keeps the render stacks' dirty-flag zero in fp and g_titleScene's address in sl (retail
 * reloads the zero at every store and keeps the address in fp); retail indexes the marks as (rows - i + 19) and the
 * leaving angles as (sprite - 50) without folding the constants into the base, and its last stack set before the
 * marks moves the state through r1. */
#include "battle/BtlMainAccess.h"
#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"
#include "gfx/StereoParallax.h"
#include "ui/SpriteRowList.h"
#include "ui/UiSpriteApi.h"
#include "util/BitsAndBytes.h"

extern "C" {

void effectRenderTransformedInstance(UiSpriteState *sprite, f32 horizontalOffset);

/* Draws the row list: each row's flash, base, glow and cover sprites, the marks (the rows being added or
 * marked by a change included) turned by the pulse angle, and the marks being removed. Nothing is drawn
 * while the list is idle or while the battle hides its UI (battle flag 0x200). */
void spriteRowListDraw(SpriteRowList *list)
{
    if (list->state == SPRITE_ROW_STATE_IDLE || (btlGetMainState()->battleFlags & 0x200) != 0)
        return;

    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.29f);
    s32 x = vec2GetXInt(&list->sprites[SPRITE_ROW_BANNER]) + parallax;
    for (s32 row = 0; row < SPRITE_ROW_MAX; row++) {
        renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
        if (list->sprites[row + SPRITE_ROW_FLASH].updated)
            effectRenderTransformedInstance(&list->sprites[row + SPRITE_ROW_FLASH], (f32)x);
        renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
        if (list->sprites[row + SPRITE_ROW_BASE].updated)
            effectRenderTransformedInstance(&list->sprites[row + SPRITE_ROW_BASE], (f32)x);
        renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
        if (list->sprites[row + SPRITE_ROW_GLOW].updated)
            effectRenderTransformedInstance(&list->sprites[row + SPRITE_ROW_GLOW], (f32)x);
        renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
        if (list->sprites[row + SPRITE_ROW_COVER].updated)
            effectRenderTransformedInstance(&list->sprites[row + SPRITE_ROW_COVER], (f32)x);
    }

    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    if (list->state == SPRITE_ROW_STATE_OPENING) {
        for (s32 sprite = SPRITE_ROW_MARK; sprite <= SPRITE_ROW_MARK + SPRITE_ROW_MAX - 1; sprite++) {
            if (list->sprites[sprite].updated) {
                uiSpriteSetRotation(&list->sprites[sprite], list->angle);
                effectRenderTransformedInstance(&list->sprites[sprite], (f32)x);
            }
        }
    } else {
        /* the marked rows are the last ones, counting the marks and rows a change is adding */
        s32 marked = list->selectedRow;
        if (list->selectedChange > 0)
            marked += list->selectedChange;
        s32 rows = list->rowCount;
        if (list->rowCountChange > 0)
            rows += list->rowCountChange;
        for (s32 i = 0; i < marked; i++) {
            UiSpriteState *mark = &list->sprites[SPRITE_ROW_MARK + rows - 1 - i];
            uiSpriteSetRotation(mark, list->angle);
            effectRenderTransformedInstance(mark, (f32)x);
        }
    }
    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));

    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 1, 0));
    for (s32 sprite = SPRITE_ROW_LEAVING; sprite <= SPRITE_ROW_LEAVING + SPRITE_ROW_MAX - 1; sprite++) {
        if (list->sprites[sprite].updated) {
            uiSpriteSetRotation(&list->sprites[sprite], list->leavingAngles[sprite - SPRITE_ROW_LEAVING]);
            effectRenderTransformedInstance(&list->sprites[sprite], (f32)x);
            effectRenderTransformedInstance(&list->sprites[sprite], (f32)x);
        }
    }
    renderCtxSetStackTop(g_titleScene, RENDER_STACK_B, packNibblesAndByte(6, 7, 0));
}

} /* extern "C" */
