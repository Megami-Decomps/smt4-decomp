/* NON_MATCHING: retail keeps the shown/next slots in stack slots, spills r0-r3 in the prologue, reuses the owned == 1
 * compare for the owned <= 1 exit, sign-extends the shown slot before the tail call and recomputes the slide per draw;
 * the selection address is formed after the unit lookup as in retail. */
#include "common.h"
#include "camp/RenderCtxTitle.h"
#include "ui/UiControl.h"
#include "gamedata/UnitRecordAccess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 flag);

/* Draws the slot marker of party unit `unit`: with several slots owned it cycles between the
 * current and the next one (sliding out over four frames after a 20-frame hold), with one slot it
 * just shows it. `work` holds the per-unit selection (0xD5E0) and cycle counter (0xD580). */
void FUN_003b6da4(u8 *work, s32 unit, s32 x, s32 y)
{
    TextureTableEntryIV *frame = asdTMTexTableEntryAt(0x28, 300);
    u32 mask = 0;
    s32 owned = 0;
    s32 shown = 0;
    s32 nextShown = 0;
    s32 *counter;

    if (unit >= 0) {
        mask = gameGetUnitRecord(unit)->ailments;
    }
    s32 *selection = (s32 *)(work + 0xD5E0 + unit * 4);
    for (s32 slot = 1; slot <= 10; slot++) {
        if ((mask & (1 << slot)) != 0) {
            if (*selection == owned) {
                shown = slot;
            }
            owned++;
        }
    }
    if (owned == 1) {
        messageKindForward(shown, frame->x + x, frame->y + y, 0x7E);
        return;
    }
    if (owned < 2) {
        return;
    }
    counter = (s32 *)(work + 0xD580 + unit * 4);
    (*counter)++;
    if (*counter < 20) {
        messageKindForward(shown, frame->x + x, frame->y + y, 0x7E);
        return;
    }
    s32 index = 0;

    for (s32 slot = 1; slot <= 10; slot++) {
        if ((mask & (1 << slot)) != 0) {
            if ((*selection + 1) % owned == index) {
                nextShown = slot;
            }
            index++;
        }
    }
    renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 3);
    gxSetMirroredClippedScissor(frame->x + x, frame->y + y, frame->placement->width, frame->placement->height, 1);
    s32 slide = (*counter - 20) * -3;

    messageKindForward(shown, frame->x + slide + x, frame->y + y, 0x7E);
    messageKindForward(nextShown, frame->x + x + slide + 13, frame->y + y, 0x7E);
    renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);
    if (*counter >= 24) {
        *selection = (*selection + 1) % owned;
        *counter = 0;
    }
}

}
