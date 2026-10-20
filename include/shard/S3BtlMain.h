/* The battle main state (btlGetMainState): only the field the script commands pass on. */
#ifndef SHARD_S3BTLMAIN_H
#define SHARD_S3BTLMAIN_H

#include "common.h"

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x226C];
    /* 0x226C */ u32 scriptOwner;     /* object script commands are issued for */
} BtlMainState;

#endif
