#include "camp/RenderCtxA.h"
#include "shard/W5_W5Match5_GameSaveViews.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "gamedata/SaveSlotRecord.h"

#include "code/Code004b.h"

extern "C" {

void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 bottomScreen);
void effectDispatchSelector(s16 icon, s32 x, s32 y, s32 z, f32 scale);
}

/* Draws the icon of slot `slot`'s current entry; with several entries it cycles through them with a short fade. */
extern "C" void partyPanelDrawAilmentIcon(CyclingPanel *panel, s32 slot, s32 x, s32 y)
{
    TextureTableEntryIV *entry = asdTMTexTableEntryAt(0x1d, 300);
    u32 mask = 0;
    s32 count = 0;
    s32 nextIndex = 0;
    s32 current = 0;
    s32 next = 0;
    if (slot >= 0) {
        mask = gameGetSlotRecord(slot)->ailments;
    }
    for (s32 icon = 1; icon <= 13; icon++) {
        if (icon != 2 && (mask & (1 << icon))) {
            if (panel->cursor[slot] == count) {
                current = icon;
            }
            count++;
        }
    }
    if (count == 1) {
        effectDispatchSelector(current, entry->x + x, entry->y + y, 0x7e, 1.0f);
    } else if (count > 1) {
        panel->timer[slot]++;
        if (panel->timer[slot] < 20) {
            effectDispatchSelector(current, entry->x + x, entry->y + y, 0x7e, 1.0f);
        } else {
            for (s32 icon = 1; icon <= 13; icon++) {
                if (icon != 2 && (mask & (1 << icon))) {
                    if ((panel->cursor[slot] + 1) % count == nextIndex) {
                        next = icon;
                    }
                    nextIndex++;
                }
            }
            renderStackSet(g_renderCtx->stacks + RENDER_STACK_SCISSOR, 3);
            gxSetMirroredClippedScissor(x + entry->x, y + entry->y, entry->placement->width, entry->placement->height, 1);
            s32 slide = (panel->timer[slot] - 20) * -3;
            s32 nextSlide = slide + 13; /* the next icon, 13 pixels on (retail keeps this, not slide, across the first draw) */
            effectDispatchSelector(current, entry->x + slide + x, entry->y + y, 0x7e, 1.0f);
            effectDispatchSelector(next, entry->x + nextSlide + x, entry->y + y, 0x7e, 1.0f);
            renderStackSet(g_renderCtx->stacks + RENDER_STACK_SCISSOR, 0);
            if (panel->timer[slot] >= 24) {
                panel->cursor[slot] = (panel->cursor[slot] + 1) % count;
                panel->timer[slot] = 0;
            }
        }
    }
}
