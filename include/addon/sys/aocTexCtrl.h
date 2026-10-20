/* addon/sys/aocTexCtrl.c: texture control of the add-on content screens. */
#ifndef ADDON_SYS_AOCTEXCTRL_H
#define ADDON_SYS_AOCTEXCTRL_H

#include "common.h"

/* Six words of state allocated on first use. */
typedef struct AocTexState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
} AocTexState;

typedef struct AocTexCtrl {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AocTexState *state;
} AocTexCtrl;

#endif
