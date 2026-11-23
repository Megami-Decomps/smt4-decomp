#include "camp/RenderCtxA.h"
#include "ui/PartnerCard.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

enum { PARTNER_MARKER_COUNT = 13 };

extern "C" {

void efctSetSpeed(f32 speed);
void effectDispatchSelector(s16 entry, s32 x, s32 y, s32 kind, f32 scale);
void gxSetMirroredClippedScissor(s32 x, s32 y, s32 width, s32 height, s32 flag);

/* Draws the slot's selected marker, sliding in the next marker during the cycle transition. */
void partnerCardDrawAilmentMarker(PartnerCardScreen *screen, SlotRecordA *unit, s32 slot, s32 x, s32 y, f32 scale)
{
    TextureTableEntryIV *anchor = asdTMTexTableEntryAt(0x11, 0x12);
    s32 current = 0;
    s32 next = 0;
    u16 mask = unit->ailments;
    s32 available = 0;
    s32 availableNext = 0;
    s32 i;

    efctSetSpeed(scale);
    for (i = 0; i < PARTNER_MARKER_COUNT; i++) {
        if ((mask & (1 << (i + 1))) != 0) {
            if (screen->marker[slot] == available) {
                current = i + 1;
            }
            available++;
        }
    }
    if (available == 1) {
        effectDispatchSelector(current, anchor->x + x, anchor->y + y, 0x7E, 1.0f);
    } else if (available > 1) {
        if (screen->cycle[slot] < 20) {
            effectDispatchSelector(current, anchor->x + x, anchor->y + y, 0x7E, 1.0f);
        } else {
            s32 shift;
            s32 nextShift;

            for (i = 0; i < PARTNER_MARKER_COUNT; i++) {
                if ((mask & (1 << (i + 1))) != 0) {
                    if ((screen->marker[slot] + 1) % available == availableNext) {
                        next = i + 1;
                    }
                    availableNext++;
                }
            }
            renderCtxSetStackTop(g_renderCtx, RENDER_STACK_SCISSOR, 3);
            gxSetMirroredClippedScissor(anchor->x, anchor->y, anchor->placement->width, anchor->placement->height, 1);
            shift = (screen->cycle[slot] - 20) * -3;
            nextShift = shift + 13;
            effectDispatchSelector(current, anchor->x + (shift + x), anchor->y + y, 0x7E, 1.0f);
            effectDispatchSelector(next, anchor->x + (x + nextShift), anchor->y + y, 0x7E, 1.0f);
            renderCtxSetStackTop(g_renderCtx, RENDER_STACK_SCISSOR, 0);
        }
    }
    efctSetSpeed(1.0f);
}

} /* extern "C" */
