/* battle/btlHelp.c: battle help screens. */
#ifndef BATTLE_BTLHELP_H
#define BATTLE_BTLHELP_H

#include "common.h"
#include <stddef.h>

/* The help block, kept by a module global (Apocalypse). */
typedef struct BtlHelpA {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 state;
} BtlHelpA;

/* One help entry, linked into the help list (Apocalypse). */
typedef struct BtlHelpEntryA {
    /* 0x000 */ u16 unk00;
    /* 0x002 */ s16 kind;
    /* 0x004 */ u8 unk04[2];
    /* 0x006 */ u16 flags;
    /* 0x008 */ u8 unk08[0x86a];
    /* 0x872 */ s16 dialogIndex;
    /* 0x874 */ struct BtlHelpEntryA *next;
    /* 0x878 */ struct BtlHelpEntryA *prev;
} BtlHelpEntryA;

/* The help block viewed as the entry list it heads. */
typedef struct BtlHelpListA {
    /* 0x00 */ BtlHelpEntryA *head;
    /* 0x04 */ BtlHelpEntryA *tail;
    /* 0x08 */ s32 count;
} BtlHelpListA;

/* The help module's global state and the battle states which suppress new messages. */
struct BtlHelpGlobalsA {
    /* 0x00 */ BtlHelpListA *list;
    /* 0x04 */ u8 unk04[0x1c];
    /* 0x20 */ u32 blockedStates[2];
    /* 0x28 */ u32 blockedTransitions[2];
};

typedef char BtlHelpGlobalsAMasksOffsetCheck[
    offsetof(BtlHelpGlobalsA, blockedStates) == 0x20 &&
    offsetof(BtlHelpGlobalsA, blockedTransitions) == 0x28 &&
    sizeof(BtlHelpGlobalsA) == 0x30 ? 1 : -1];

#endif
