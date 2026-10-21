#include "common.h"

extern "C" {

struct NavigationState {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 state;
    /* 0x8 */ u32 step;
};

/* Switches to state 6. */
void naviMainEnterState6(NavigationState *navigation)
{
    navigation->state = 6;
    navigation->step = 0;
}

} /* extern "C" */
