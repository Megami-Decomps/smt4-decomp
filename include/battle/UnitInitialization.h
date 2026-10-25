#ifndef BATTLE_UNITINITIALIZATION_H
#define BATTLE_UNITINITIALIZATION_H

#include "common.h"
#include <stddef.h>

struct BtlInitialStatSetIV {
    u16 hp, maximumHp, mp, maximumMp;
    u16 stats[5];
};
struct BtlInitialEncodedStatIV {
    u16 value : 10;
    u16 kind : 6;
};
struct BtlUnitInitializationIV {
    /* 0x000 */ u8 active;
    u8 padding01;
    /* 0x002 */ u16 status;
    /* 0x004 */ s16 selection[3];
    u8 padding0A[0xCA];
    /* 0x0D4 */ u8 statMode;
    u8 paddingD5;
    /* 0x0D6 */ BtlInitialStatSetIV current;
    /* 0x0E8 */ BtlInitialStatSetIV initial;
    /* 0x0FA */ u16 points;
    /* 0x0FC */ u16 pending[2];
    /* 0x100 */ u16 enabled;
    /* 0x102 */ BtlInitialEncodedStatIV encoded[18];
    /* 0x126 */ BtlInitialEncodedStatIV initialEncoded[18];
    /* 0x14A */ u8 percentage;
    /* 0x14B */ u8 direction;
    /* 0x14C */ u32 effects[14];
    /* 0x184 */ u32 counter;
};
typedef char BtlUnitInitializationIVLayout[sizeof(BtlUnitInitializationIV) == 0x188 &&
    offsetof(BtlUnitInitializationIV, current) == 0xd6 &&
    offsetof(BtlUnitInitializationIV, encoded) == 0x102 &&
    offsetof(BtlUnitInitializationIV, effects) == 0x14c ? 1 : -1];

/* A complete battle entry is used as scratch even though only its unit record is filled. */
struct BtlEntryInitializationIV {
    u8 prefix[0xcc];
    BtlUnitInitializationIV unit;
    u8 tail[0x34];
};
typedef char BtlEntryInitializationIVLayout[sizeof(BtlEntryInitializationIV) == 0x288 &&
    offsetof(BtlEntryInitializationIV, unit) == 0xcc ? 1 : -1];

struct SavedBattleInitialViewIV {
    u8 unk00[0xe];
    /* 0x0e */ u16 maximumHp;
    /* 0x10 */ u16 maximumMp;
    /* 0x12 */ u16 stats[5];
    u8 unk1c[0xe];
    /* 0x2a */ u16 hp;
    /* 0x2c */ u16 mp;
    u8 unk2e[0x16];
    /* 0x44 */ u16 points;
    /* 0x46 */ u16 id;
    /* 0x48 */ u8 enabled;
};
typedef char SavedBattleInitialViewIVOffsets[
    offsetof(SavedBattleInitialViewIV, hp) == 0x2a &&
    offsetof(SavedBattleInitialViewIV, id) == 0x46 ? 1 : -1];

struct DevilBattleInitialInfoIV {
    u8 unk00[5];
    /* 0x05 */ u8 direction;
    u8 unk06[0x2d];
    /* 0x33 */ u8 percentage;
};

struct BtlPartyInitializationStateIV {
    u8 unk00[0xf0];
    u16 resetRequested;
};

#endif
