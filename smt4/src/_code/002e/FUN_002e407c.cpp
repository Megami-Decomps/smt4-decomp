#include "battle/BtlMainAccess.h"

extern "C" {

extern void buttonHelpSetPreset(s32 preset);

static __inline void btlShowHelpPreset(BtlMainState *state, s32 preset)
{
    state->battleFlags |= 0x100000;
    buttonHelpSetPreset(preset);
}

/* Script command: sets battle flag 0x100000 and shows button help preset 0xDD; returns 1. */
s32 FUN_002e407c(void)
{
    btlShowHelpPreset(btlGetMainState(), 0xDD);
    return 1;
}

} /* extern "C" */
