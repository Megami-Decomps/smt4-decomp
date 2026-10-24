#ifndef GAMEDATA_ROSTERVIEW_H
#define GAMEDATA_ROSTERVIEW_H

#include "common.h"
#include <stddef.h>

/* Per-id state flags of the roster (4 bytes each). */
struct RosterFlags {
    /* 0x00 */ u8 known : 1;
    /*      */ u8 current : 1;
    /*      */ u8 refresh : 1;
    /*      */ u8 unkBits : 3;
    /*      */ u8 hasPartner : 1;
    /*      */ u8 cleared : 1;
    /* 0x01 */ u8 partner;
    /* 0x02 */ u8 flagsB;       /* low bits cleared on refresh, bit 5: set for kind 10 with an extra record */
    /* 0x03 */ u8 unk03;
};

/* One roster slot (0xC bytes): a unit id followed by its data. */
struct RosterEntry {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 data[10];
};

/* The roster part of the game-flag block (gameFlagBlockGet). */
struct RosterView {
    /* 0x000 */ u8 unk000[0x2A0];
    /* 0x2A0 */ RosterFlags flags[400];
    /* 0x8E0 */ u16 leader;
    /* 0x8E2 */ u8 unk8E2[2];
    /* 0x8E4 */ RosterEntry active[4];
    /* 0x914 */ RosterEntry stock[20];
};
typedef char RosterViewLayoutCheck[sizeof(RosterEntry) == 0xC && offsetof(RosterView, leader) == 0x8E0 &&
    offsetof(RosterView, active) == 0x8E4 && offsetof(RosterView, stock) == 0x914 ? 1 : -1];

#endif
