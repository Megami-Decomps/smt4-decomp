/* NON_MATCHING: 18 lines: the zeroed counters are stored in another order and the layout pointer is spilled to sp+28
 * (retail sp+16). Declaring current and following before count and n gives IDENTICAL (w93-s16), but only the order of
 * the declarations changes: steering. */
#include "common.h"
#include "ui/UiControl.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/UnitRecordAccess.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtxTitle.h"
#include "status/StatusStrip.h"

extern "C" {

void gxSetMirroredClippedScissor(s32 x, s32 y, s32 w, s32 h, s32 arg);

/* Draws a member's current ailment icon and, while scrolling, the following icon. */
void statusStripDrawAilments(StatusStrip *strip, s32 x, s32 y)
{
    u32 slot = 0x12;
    if (strip->isPlayerVariant != 0) slot = 0x50;
    TextureTableEntryIV *layout = asdTMTexTableEntryAt(0x19, slot);
    s32 count, n, current, following;
    count = n = current = following = 0;
    u32 ailments;
    if (strip->member < 0) {
        ailments = gameGetPlayerData()->ailments;
    } else {
        ailments = gameGetUnitRecord(strip->member)->ailments;
    }
    for (s32 bit = 1; bit <= 10; bit++) {
        if ((ailments & (1 << bit)) != 0) {
            if (strip->cursor == count) current = bit;
            count++;
        }
    }
    if (count == 1) {
        messageKindForward((s16)current, layout->x + x, layout->y + y, 0x7e);
        return;
    }
    if (count > 1) {
        if (strip->scroll < 0x14) {
            messageKindForward((s16)current, layout->x + x, layout->y + y, 0x7e);
            return;
        }
        for (s32 bit = 1; bit <= 10; bit++) {
            if ((ailments & (1 << bit)) != 0) {
                if ((strip->cursor + 1) % count == n) following = bit;
                n++;
            }
        }
        renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 3);
        gxSetMirroredClippedScissor(strip->originX + layout->x, strip->originY + layout->y, layout->placement->width, layout->placement->height, 1);
        /* The paired icons share the slide offset while the scissor is active. */
        {
            s32 shift = (strip->scroll - 0x14) * -3;
            s32 nextShift = shift + 13;
            messageKindForward((s16)current, layout->x + (shift + x), layout->y + y, 0x7e);
            messageKindForward((s16)following, layout->x + (nextShift + x), layout->y + y, 0x7e);
        }
        renderStackSet(g_titleScene->stacks + RENDER_STACK_SCISSOR, 0);
    }
}

} /* extern "C" */
