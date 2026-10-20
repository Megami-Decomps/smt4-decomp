/* battle/btlAction.c: battle actions. */
#ifndef BATTLE_BTLACTION_H
#define BATTLE_BTLACTION_H

#include "common.h"

/* The module global: a word and the action data block's pointer, side by side. */
typedef struct BtlActionGlobals {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *data;       /* heap block */
} BtlActionGlobals;

#endif
