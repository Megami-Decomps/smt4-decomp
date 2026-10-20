/* battle/btlEncount.c: encounter state. */
#ifndef BATTLE_BTLENCOUNT_H
#define BATTLE_BTLENCOUNT_H

#include "common.h"

#define BTL_ENCOUNT_ACTIVE 4 /* BtlEncount.flags: encounters are being processed */

typedef struct BtlEncount {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *data;     /* heap block */
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 flags;
} BtlEncount;

/* Work area of the job that owns the encounter state. */
typedef struct BtlEncountOwner {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 job;        /* job stopped when the state is destroyed */
} BtlEncountOwner;

#endif
