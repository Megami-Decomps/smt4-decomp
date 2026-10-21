#include "common.h"

struct NavigationState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 state;
};

/* Reports whether navigation is in either map-open state. */
extern "C" bool naviStateIsMapOpen(const NavigationState *navigation)
{
    return navigation->state == 4 || navigation->state == 6;
}
