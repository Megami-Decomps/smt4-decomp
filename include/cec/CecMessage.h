#ifndef CEC_CECMESSAGE_H
#define CEC_CECMESSAGE_H

#include "common.h"
#include <stddef.h>

/* The attached demon follows the player information in an IV StreetPass card. */
struct CecCardDemon {
    u16 skills[8];
    u16 id;
    u8 level;
    u8 unk13;
};

struct CecProcessSlot {
    /* 0x00 */ u16 equipment[7];
    /* 0x0E */ char playerName[0x12];
    /* 0x20 */ u8 flags;
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ u32 selection;
    /* 0x28 */ u32 playSeconds;
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u16 selectedDemon;
    /* 0x36 */ u8 playerLevel;
    /* 0x37 */ u8 selectionMode;
    /* 0x38 */ CecCardDemon demon;
};
typedef char CecCardLayoutCheck[sizeof(CecProcessSlot) == 0x4C &&
    offsetof(CecProcessSlot, demon) == 0x38 && sizeof(CecCardDemon) == 0x14 &&
    offsetof(CecCardDemon, id) == 0x10 ? 1 : -1];

/* Apocalypse's card: the portrait, the title and the special item are new, and the demon moved to 0x50. */
struct CecProcessSlotA {
    /* 0x00 */ u16 equipment[7];
    /* 0x0E */ char playerName[0x12];
    /* 0x20 */ u8 flags;                 /* bit 1: the player made the game (the title reads "Developer") */
    /* 0x21 */ u8 unk21;
    /* 0x22 */ u8 portrait;              /* one of the nine portrait textures */
    /* 0x23 */ u8 title;
    /* 0x24 */ u32 selection;            /* the message the player chose */
    /* 0x28 */ u8 unk28[0xC];
    /* 0x34 */ u16 selectedDemon;        /* 0: the card has no demon */
    /* 0x36 */ u8 unk36[2];
    /* 0x38 */ u16 specialItem;
    /* 0x3A */ u8 unk3A[0x16];
    /* 0x50 */ CecCardDemon demon;
};
typedef char CecCardALayoutCheck[sizeof(CecProcessSlotA) == 0x64 &&
    offsetof(CecProcessSlotA, selectedDemon) == 0x34 && offsetof(CecProcessSlotA, demon) == 0x50 ? 1 : -1];

extern "C" void cecCardBuild(CecProcessSlot *card, s32 unit, u8 mode, u32 selection);
#endif
