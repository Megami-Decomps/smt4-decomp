/* NON_MATCHING: retail keeps the shown/next slots in stack slots, spills r0-r3 in the prologue and recomputes the cycle target per slot; the marker drawing is the same (180 vs 184 rows). */
#include "common.h"
#include "camp/RenderCtx.h"

extern "C" {

/* The unit's slot-cycling window: the rectangle drawn around the cycling slots. */
typedef struct SlotCycleFrame {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ s16 *size;               /* width, height */
} SlotCycleFrame;

extern u8 *g_titleScene;

SlotCycleFrame *FUN_002bf4f8(s32 a, s32 b);
u16 *gameGetUnitRecord(s32 index);
void messageKindForward(s32 slot, s32 x, s32 y, s32 color);
void FUN_0029a17c(s32 x, s32 y, s32 width, s32 height, s32 flag);

/* Draws the slot marker of party unit `unit`: with several slots owned it cycles between the
 * current and the next one (sliding out over four frames after a 20-frame hold), with one slot it
 * just shows it. `work` holds the per-unit selection (0xD5E0) and cycle counter (0xD580). */
void FUN_003b6da4(u8 *work, s32 unit, s32 x, s32 y)
{
    SlotCycleFrame *frame = FUN_002bf4f8(0x28, 300);
    u32 mask = 0;
    s32 owned = 0;
    s32 shown = 0;
    s32 nextShown = 0;
    s32 *selection = (s32 *)(work + 0xD5E0 + unit * 4);
    s32 *counter;

    if (unit >= 0) {
        mask = gameGetUnitRecord(unit)[0x44 / 2];
    }
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
    RenderStateStack *stack = (RenderStateStack *)(g_titleScene + 0x130C);

    renderStackSet(stack, 3);
    FUN_0029a17c(frame->x + x, frame->y + y, frame->size[0], frame->size[1], 1);
    s32 slide = (*counter - 20) * -3;

    messageKindForward(shown, frame->x + slide + x, frame->y + y, 0x7E);
    messageKindForward(nextShown, frame->x + x + slide + 13, frame->y + y, 0x7E);
    stack = (RenderStateStack *)(g_titleScene + 0x130C);
    renderStackSet(stack, 0);
    if (*counter >= 24) {
        *selection = (*selection + 1) % owned;
        *counter = 0;
    }
}

}
