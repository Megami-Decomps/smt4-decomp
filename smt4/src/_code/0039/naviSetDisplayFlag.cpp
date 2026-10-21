#include "common.h"

struct NavigationState {
    /* 0x00 */ u8 unk00[16];
    /* 0x10 */ u32 flags;
};

/* Enables or disables the navigation flag. */
extern "C" void naviSetDisplayFlag(NavigationState *navigation, bool enabled)
{
    if (enabled)
        navigation->flags |= 0x20;
    else
        navigation->flags &= ~0x20;
}
