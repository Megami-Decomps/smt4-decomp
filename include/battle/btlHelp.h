/* battle/btlHelp.c: battle help screens. */
#ifndef BATTLE_BTLHELP_H
#define BATTLE_BTLHELP_H

#include "common.h"
#include <stddef.h>
struct BtlUi;

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

extern "C" BtlHelpEntryIV *btlHelpEntryCreate(u16 id, s16 style, u32 argument, u32 resource,
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

/* Appends a new entry to the help list: the last step of every creator of btlHelp.cpp (btlHelpAppendMessage,
 * btlHelpAppendTextEntry, FUN_00200a68, FUN_004c9220), inlined there. */
static __inline void btlHelpListAppend(BtlHelpListA *list, BtlHelpEntryA *entry)
{
    if (list->head == NULL) {
        list->head = entry;
    }
    if (list->tail == NULL) {
        list->tail = entry;
    } else {
        list->tail->next = entry;
        entry->prev = list->tail;
        list->tail = entry;
    }
    ++list->count;
}

/* The help module's global state and the battle states which suppress new messages. */
struct BtlHelpGlobalsA {
    /* 0x00 */ BtlHelpListA *list;
    /* 0x04 */ u8 unk04[0x0c];
    /* 0x10 */ u64 specialEntry;
    /* 0x18 */ u64 restrictedEntry;
    /* 0x20 */ u64 blockedStates;      /* battle state bits that suppress new messages */
    /* 0x28 */ u64 blockedTransitions;
    /* 0x30 */ u64 blockedMessages;
};

typedef char BtlHelpGlobalsAMasksOffsetCheck[
    offsetof(BtlHelpGlobalsA, specialEntry) == 0x10 &&
    offsetof(BtlHelpGlobalsA, restrictedEntry) == 0x18 &&
    offsetof(BtlHelpGlobalsA, blockedStates) == 0x20 &&
    offsetof(BtlHelpGlobalsA, blockedTransitions) == 0x28 &&
    offsetof(BtlHelpGlobalsA, blockedMessages) == 0x30 &&
    sizeof(BtlHelpGlobalsA) == 0x38 ? 1 : -1];

/* Creates a help entry (Apocalypse's btlHelp.cpp creator; IV's is btlHelpEntryCreate), snapshotting its combatant,
 * and appends it to the help list. */
extern "C" BtlHelpEntryA *FUN_00200a68(u16 id, s16 message, u32 first, u32 second, const void *combatant, u32 mode,
    u32 argument, u32 context);

extern "C" {
void infoWinSetShown(u8 value);
}

extern "C" {
u32 *asdListBoxGetItemValuePtr(void *listBox, u32 id);
}

#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Callers pass the battle UI block; the function reaches it through g_btlUi instead. */
void FUN_00229a24(BtlUi *ui);

#ifdef __cplusplus
}
#ifdef __cplusplus
extern "C" {
#endif

void FUN_00229a3c(s32 actorId, u32 options, u32 value, u32 parameter, u32 checkDuplicates);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00229c5c(struct BtlUi *ui, u32 first, u32 second);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void aocQueueType1f(u32 context, u32 arg, u32 second, u32 third);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 battleGetEntryHalfword(u32 id,u32 index);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

const u8 *dataTable05Sub0GetEntries(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 dataTable05Sub4GetCount(void);

#ifdef __cplusplus
}
#endif

#endif
