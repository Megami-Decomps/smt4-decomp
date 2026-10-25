/* battle/btlHelp.c: battle help screens. */
#ifndef BATTLE_BTLHELP_H
#define BATTLE_BTLHELP_H

#include "common.h"
#include <stddef.h>

/* The last request word is either an integer route/index or a floating value. */
union BtlHelpValue {
    s32 integer;
    f32 real;

    BtlHelpValue(s32 value) : integer(value) {}
};

/* SMT IV's help entry; Apocalypse uses the larger entry below. */
struct BtlHelpEntryIV {
    /* 0x000 */ u16 id;
    /* 0x002 */ u16 unk002;
    /* 0x004 */ s16 style;
    /* 0x006 */ u16 flags;
    /* 0x008 */ u32 argument;
    /* 0x00C */ u32 resource;
    /* 0x010 */ u8 body[0x288];
    /* 0x298 */ u8 option;
    /* 0x299 */ u8 unk299[3];
    /* 0x29C */ BtlHelpValue value;
    /* 0x2A0 */ u16 unk2A0;
    /* 0x2A2 */ u16 active;
    /* 0x2A4 */ BtlHelpEntryIV *next;
    /* 0x2A8 */ BtlHelpEntryIV *previous;
    /* 0x2AC */ u8 unk2AC[4];
};

struct BtlHelpListIV {
    BtlHelpEntryIV *head;
    BtlHelpEntryIV *tail;
    s32 count;
};

typedef char BtlHelpValueSizeCheck[sizeof(BtlHelpValue) == 4 ? 1 : -1];
typedef char BtlHelpEntryIVLayoutCheck[
    offsetof(BtlHelpEntryIV, flags) == 6 &&
    offsetof(BtlHelpEntryIV, body) == 0x10 &&
    offsetof(BtlHelpEntryIV, value) == 0x29C &&
    offsetof(BtlHelpEntryIV, next) == 0x2A4 &&
    sizeof(BtlHelpEntryIV) == 0x2B0 && sizeof(BtlHelpListIV) == 0xC ? 1 : -1];

extern "C" BtlHelpEntryIV *FUN_0022a4ac(u16 id, s16 style, u32 argument, u32 resource,
    const void *body, u8 option, BtlHelpValue value);

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

extern "C" {
void FUN_0022af9c(u8 value);
}

extern "C" {
u32 *asdListBoxGetItemValuePtr(void *listBox, u32 id);
}

#endif
