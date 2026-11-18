/* The game options record returned by gameGetSupportUnitData() (settings plus a progress marker at 0x46). */
#ifndef SHARD_GAMEOPTIONS_H
#define SHARD_GAMEOPTIONS_H

#include "common.h"
#include <stddef.h>

struct GameOptionsSupportStats {
    /* 0x00 */ u16 base[7];
    /* 0x0E */ u16 current[7];
    /* 0x1C */ u16 maximum[7];
    /* 0x2A */ u16 health;
    /* 0x2C */ u16 mana;
};

typedef struct GameOptions {
    union {
        /* 0x0000 */ u8 unk0000[0x46];
        /* the guest unit's record (a StatBlock prefix) */
        struct {
            u8 unk0000[0xE];
            /* 0x000E */ s16 maxHp;
            u8 unk0010[0x34];
            /* 0x0044 */ u16 ailments;   /* bit 1: dead */
        } guest;
        GameOptionsSupportStats supportStats;
    };
    /* 0x0046 */ u16 unk46;
    union {
        /* 0x0048 */ u8 unk0048[0x5BC];
        struct {
            u8 unk0048[4];
            /* 0x004C */ u8 flags[0x40];
            /* 0x008C */ u8 counts[0x500];
            u8 unk058C[0x78];
        } inheritance;
    };
    /* 0x0604 */ u16 unk604;
    /* 0x0606 */ u16 supportIndex;
    /* 0x0608 */ u16 flags;
    /* 0x060A */ u16 supportCandidates[3];
} GameOptions;

typedef char GameOptionsLayoutCheck[sizeof(GameOptions) == 0x610 &&
    offsetof(GameOptions, supportIndex) == 0x606 &&
    offsetof(GameOptions, flags) == 0x608 ? 1 : -1];
typedef char GameOptionsGuestOffsets[
    offsetof(GameOptions, guest.maxHp) == 0xE && offsetof(GameOptions, guest.ailments) == 0x44 &&
    offsetof(GameOptions, unk46) == 0x46 ? 1 : -1];
typedef char GameOptionsInheritanceOffsets[
    offsetof(GameOptions, inheritance.flags) == 0x4C &&
    offsetof(GameOptions, inheritance.counts) == 0x8C ? 1 : -1];
typedef char GameOptionsSupportOffsets[
    offsetof(GameOptions, supportStats.maximum) == 0x1C &&
    offsetof(GameOptions, supportStats.mana) == 0x2C &&
    offsetof(GameOptions, supportCandidates) == 0x60A ? 1 : -1];

#endif
