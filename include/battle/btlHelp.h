/* battle/btlHelp.c: battle help screens. */
#ifndef BATTLE_BTLHELP_H
#define BATTLE_BTLHELP_H

#include "common.h"

/* The help block, kept by a module global (Apocalypse). */
typedef struct BtlHelpA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 unk08;
} BtlHelpA;

#endif
