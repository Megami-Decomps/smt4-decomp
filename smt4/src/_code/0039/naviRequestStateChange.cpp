#include "common.h"

struct NavigationState {
    /* 0x0000 */ u8 unk00[0x5a8c];
    /* 0x5a8c */ u8 requested;
};

/* Requests the navigation state change. */
extern "C" void naviRequestStateChange(NavigationState *navigation)
{
    navigation->requested = 1;
}
