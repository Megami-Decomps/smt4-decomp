#ifndef GAMEDATA_DEVILRECORDA_H
#define GAMEDATA_DEVILRECORDA_H

#include "shard/W6_W6Match8_DevilRecordA.h"
#include <stddef.h>

struct DevilTableRecordA {
    /* 0x00 */ DevilRecordA header;
    /* 0x40 */ u8 unk40[0x5C];
    /* 0x9C */ u16 unk9C;
    union {
        /* 0x9E */ u8 unk9E[0x16];
        struct {
            u8 unk9EBeforeChance[0x14];
            /* 0xB2 */ u8 chance;
        } extraAction;
        struct {
            u8 unk9E[2];
            /* 0xA0 */ s8 values[18];
        } categoryModifiers;
    };
};

typedef char DevilTableRecordASizeCheck[sizeof(DevilTableRecordA) == 0xB4 ? 1 : -1];
typedef char DevilTableRecordAFieldOffsetCheck[
    offsetof(DevilTableRecordA, unk9C) == 0x9C ? 1 : -1];
typedef char DevilTableRecordAChanceOffsetCheck[
    offsetof(DevilTableRecordA, extraAction.chance) == 0xB2 ? 1 : -1];
typedef char DevilTableRecordACategoryModifiersOffsetCheck[
    offsetof(DevilTableRecordA, categoryModifiers.values) == 0xA0 &&
    sizeof(DevilTableRecordA) == 0xB4 ? 1 : -1];

#endif
