/* NON_MATCHING: scheduling only: retail loads the button-help preset constant 0xDD between the flag-word address and its ldr/orr/str. */
#include "battle/BtlMainAccess.h"

extern "C" {

extern void buttonHelpSetPreset(s32 preset);

/* Script command: sets battle flag 0x100000 and shows button help preset 0xDD; returns 1. */
s32 FUN_002e407c(void)
{
    BtlMainState *state = btlGetMainState();

    state->battleFlags |= 0x100000;
    buttonHelpSetPreset(0xDD);
    return 1;
}

} /* extern "C" */
