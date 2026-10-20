/* NON_MATCHING: scheduling only: retail loads the button-help preset constant 0xDD between the flag-word address and its ldr/orr/str. */
#include "common.h"

extern "C" {

typedef struct BtlState {
    /* 0x0000 */ u8 unk0000[0x44A0];
    /* 0x44A0 */ u32 flags;
} BtlState;

extern BtlState *btlGetMainState(void);
extern void buttonHelpSetPreset(s32 preset);

/* Script command: sets battle flag 0x100000 and shows button help preset 0xDD; returns 1. */
s32 FUN_002e407c(void)
{
    BtlState *state = btlGetMainState();

    state->flags |= 0x100000;
    buttonHelpSetPreset(0xDD);
    return 1;
}

} /* extern "C" */
