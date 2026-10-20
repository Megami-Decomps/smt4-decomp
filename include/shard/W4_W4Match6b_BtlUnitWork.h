/* smt4a: the work area a battle unit points at (+0x28) as the script commands use it. */
#ifndef SHARD_W4_W4MATCH6B_BTLUNITWORK_H
#define SHARD_W4_W4MATCH6B_BTLUNITWORK_H

#include "common.h"

typedef struct BtlUnitWork {
    /* 0x000 */ u8 unk000[0x152];
    /* 0x152 */ u16 values[0x33];   /* the top 6 bits of each hold a kind */
    /* 0x1B8 */ u8 unk1b8[6];
    /* 0x1BE */ u16 command;
    /* 0x1C0 */ u16 commandArg;
} BtlUnitWork;

typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ BtlUnitWork *work;
} BtlUnit;

#endif
