/* Structs shared by the helper functions in code shard 0041. */
#ifndef SHARD_SHARD0041_H
#define SHARD_SHARD0041_H

#include "common.h"

#include "shard/Shard0040.h"

typedef struct PartyEntryB {
    /* 0x00 */ u8 flags;
    /* 0x01 */ u8 byte1;
    /* 0x02 */ u8 bits;
    /* 0x03 */ u8 pad03;
} PartyEntryB;

typedef struct PartyBlockB {
    /* 0x00 */ u8 unk00[0x2A0];
    /* 0x2A0 */ PartyEntryB e[400];
    /* 0x8E0 */ u16 unk8E0;
} PartyBlockB;

#endif
