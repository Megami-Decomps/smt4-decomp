/* NON_MATCHING: compiler threads the complete flag test through the interpolation branch and reorders reset stores. */
#include "common.h"

struct PanelTransitionSlot {
    u32 frame;
    u8 active;
    u8 unk05[0xF];
};
struct PanelSlideTransition {
    u8 unk00[0x20];
    PanelTransitionSlot slots[5];
    u8 unk84[0xC];
    s32 position[2]; /* 0x90 */
    s32 frame; /* 0x98 */
    u8 complete;
    u8 unk9D[0x67];
    u32 state; /* 0x104 */
    u8 unk108[8];
    u32 nextState; /* 0x110 */
    u8 unk114[0x14];
    u8 visible; /* 0x128 */
    u8 unk129;
    u8 pending;
};
extern "C" s32 FUN_0026f024(s32 *, s32, s32, s32, s32, s32);

/* Finish sliding in, reset the panel animations, and enter the next state. */
extern "C" u32 FUN_00321af0(PanelSlideTransition *work)
{
    u32 result = 0;
    if (FUN_0026f024(work->position, 0, -330, 4, work->frame, 1) != 0) {
        work->complete = 1;
    } else {
        ++work->frame;
    }
    if (work->complete == 1) {
        work->state = 3;
        work->slots[2].frame = 0;
        work->nextState = 4;
        work->slots[2].active = 0;
        work->slots[3].frame = 0;
        work->slots[3].active = 0;
        work->slots[4].frame = 0;
        work->slots[4].active = 0;
        work->slots[0].frame = 0;
        work->slots[0].active = 0;
        work->slots[1].frame = 0;
        work->slots[1].active = 0;
        work->visible = 1;
        result = 2;
        work->pending = 0;
    }
    return result;
}
