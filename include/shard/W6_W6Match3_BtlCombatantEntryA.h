#ifndef SHARD_W6_W6MATCH3_BTL_COMBATANT_ENTRY_A_H
#define SHARD_W6_W6MATCH3_BTL_COMBATANT_ENTRY_A_H

#include "common.h"

struct BtlCombatantEntryA {
    /* 0x000 */ u64 flags;
    /* 0x008 */ s16 unitIndex;
    union {
        /* 0x00A */ u8 unk00a[0x15c];
        struct {
            /* 0x00A */ u8 unk00aBeforeParameters[0x132];
            /* 0x13C */ s16 values[9];
        } parameters;
    };
    /* 0x166 */ u16 id;
    union {
        /* 0x168 */ u8 unk168[0xf0];
        struct {
            /* 0x168 */ u8 unk168BeforeSelection[0xd2];
            /* 0x23A */ u8 marked;
        } selection;
        struct {
            /* 0x168 */ u8 unk168BeforeMotion[0xD1];
            /* 0x239 */ u8 state;
        } motion;
    };
    /* 0x258 */ s32 hp;
    /* 0x25C */ s32 maxHp;
    /* 0x260 */ s32 mp;
    /* 0x264 */ s32 maxMp;
    union {
        /* 0x268 */ u8 unk268[0xc];
        struct {
            /* 0x268 */ u8 unk268[6];
            /* 0x26E */ s16 value;
        } sortBase;
    };
    /* 0x274 */ u16 statusFlags;
    union {
        /* 0x276 */ u8 unk276[0x192];
        struct {
            /* 0x276 */ u8 unk276BeforeStats[0x40];
            /* 0x2B6 */ u16 values[1];
        } encodedStats;
        struct {
            u8 unk276BeforeSelection[0xac];
            s16 kind;    /* 0x322 */
            s16 variant; /* 0x324 */
        } attackSelection;
        struct {
            /* 0x276 */ u8 unk276BeforeSortBonus[0x11A];
            /* 0x390 */ s16 value;
        } sortBonus;
    };
};

#endif
