#ifndef SHARD_W7_W7MATCH2_PARTYDAMAGE_H
#define SHARD_W7_W7MATCH2_PARTYDAMAGE_H

#include "common.h"
#include <stddef.h>

struct PartyDamageUnitIV {
    /* 0x00 */ u8 unk00[0x0e];
    /* 0x0e */ s16 maximumHp;
    union {
        /* 0x10 */ u8 unk10[0x1a];
        /* 0x10 */ u16 maximumMp;
    };
    /* 0x2a */ s16 currentHp;
    union {
        /* 0x2c */ u8 unk2c[0x18];
        /* 0x2c */ u16 currentMp;
    };
    /* 0x44 */ u16 ailments;
};

struct PartyDamageSlotsIV {
    /* 0x0000 */ u8 unk0000[0x90f0];
    /* 0x90f0 */ s8 stock[24];
    /* 0x9108 */ s8 active[3];
};

typedef char PartyDamageUnitAilmentsOffsetCheck[offsetof(PartyDamageUnitIV, ailments) == 0x44 ? 1 : -1];
typedef char PartyDamageStockOffsetCheck[offsetof(PartyDamageSlotsIV, stock) == 0x90f0 ? 1 : -1];
typedef char PartyDamageActiveOffsetCheck[offsetof(PartyDamageSlotsIV, active) == 0x9108 ? 1 : -1];
typedef char PartyDamageUnitMpOffsetsCheck[(sizeof(PartyDamageUnitIV) == 0x46 && offsetof(PartyDamageUnitIV, maximumMp) == 0x10 && offsetof(PartyDamageUnitIV, currentMp) == 0x2C) ? 1 : -1];

#endif
