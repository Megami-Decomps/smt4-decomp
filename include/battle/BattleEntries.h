/* The 109 battle entries (0x288 bytes each) owned by the battle main state at +0x1fc0. */
#ifndef BATTLE_BATTLEENTRIES_H
#define BATTLE_BATTLEENTRIES_H

#include "common.h"

struct BattleEntry {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s16 value;
    /* 0x00a */ u8 unk00a[0x6e - 0x0a];
    /* 0x06e */ s16 id;
    /* 0x070 */ u8 unk070[0xce - 0x70];
    /* 0x0ce */ u16 key;
    /* 0x0d0 */ u8 unk0d0[0x288 - 0xd0];
};

struct BattleEntryOwner {
    /* 0x0000 */ u8 unk0000[0x1fc0];
    /* 0x1fc0 */ BattleEntry *entries;
};

#endif
