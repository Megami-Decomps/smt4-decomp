/* Begins a transition: moving is set for target states 2 and 4 (cleared if the current state is 2 with no queued item); on acceptance the state is advanced. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk000[0x108];  /* 0x000 */
    s32 state;         /* 0x108 */
    u8 unk10c[4];      /* 0x10c */
    s32 appliedState;  /* 0x110 */
    s32 targetState;   /* 0x114 */
    u8 unk118[8];      /* 0x118 */
    u16 queued;        /* 0x120 */
    u8 unk122[6];      /* 0x122 */
    u8 moving;         /* 0x128 */
} Transition;

s32 uiAnimateStaggeredSlidesAndFades(Transition *transition, u8 moving);

s32 FUN_002ec514(Transition *transition)
{
    s32 result = 0;
    u8 moving = 0;

    if (transition->targetState == 2 || transition->targetState == 4) {
        moving = 1;
    }
    if (transition->state == 2 && transition->queued == 0) {
        moving = 0;
    }
    if (uiAnimateStaggeredSlidesAndFades(transition, moving) != 0) {
        if (moving == 0) {
            transition->moving = 0;
        }
        result = 2;
        transition->appliedState = transition->targetState;
    }
    return result;
}

} /* extern "C" */
