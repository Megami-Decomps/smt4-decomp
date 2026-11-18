/* NON_MATCHING: retail spills r0-r3 in the prologue and reads x/y back from the stack, scans the icon mask with the shift in the register-offset tst form and tail-calls effectDispatchSelector for the single-icon case; this build keeps x/y in registers and lays the loops out differently. */
#include "camp/RenderCtxA.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/SaveSlotRecord.h"

#include "code/Code004b.h"

extern "C" {

void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 bottomScreen);
void effectDispatchSelector(s32 icon, s32 x, s32 y, s32 z, f32 scale);
}

/* Draws the icon of slot `slot`'s current entry; with several entries it cycles through them with a short fade. */
extern "C" void partyPanelDrawAilmentIcon(CyclingPanel *panel, s32 slot, s32 x, s32 y)
{
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x1d, 300);
    u32 mask = 0;
    s32 count = 0;
    s32 nextIndex = 0;
    s16 current = 0;
    s16 next = 0;
    if (slot >= 0) {
        mask = gameGetSlotRecord(slot)->ailments;
    }
    s32 *cursor = &panel->cursor[slot];
    for (s32 icon = 1; icon <= 13; icon++) {
        if (mask & (1 << icon)) {
            if (*cursor == count) {
                current = icon;
            }
            count++;
        }
    }
    if (count != 1) {
        if (count < 2) {
            return;
        }
        s32 *timer = &panel->timer[slot];
        (*timer)++;
        if (*timer >= 20) {
            for (s32 icon = 1; icon <= 13; icon++) {
                if (mask & (1 << icon)) {
                    if ((*cursor + 1) % count == nextIndex) {
                        next = icon;
                    }
                    nextIndex++;
                }
            }
            renderStackSet(&g_renderCtx->scissor, 3);
            gxSetMirroredClippedScissor(x + entry->x, y + entry->y, entry->placement->width, entry->placement->height, 1);
            s32 slide = (*timer - 20) * -3;
            effectDispatchSelector(current, entry->x + slide + x, entry->y + y, 0x7e, 1.0f);
            effectDispatchSelector(next, entry->x + x + slide + 13, entry->y + y, 0x7e, 1.0f);
            renderStackSet(&g_renderCtx->scissor, 0);
            if (*timer >= 24) {
                *cursor = (*cursor + 1) % count;
                *timer = 0;
            }
            return;
        }
    }
    effectDispatchSelector(current, entry->x + x, entry->y + y, 0x7e, 1.0f);
}
