/* The battle debug menu's entries: what a page entry looks like and the battle-state held-button words the
 * page builders filter on. */
#ifndef BATTLE_BTLDEBUGMENUENTRY_H
#define BATTLE_BTLDEBUGMENUENTRY_H

#include "common.h"
#include <stddef.h>

#define DEBUG_MENU_ENTRY_COUNT 10

/* A battle debug menu entry (observed fields). */
struct BtlDebugEntry {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 enabled;
    /* 0x02 */ u8 unk02[0x59];
    /* 0x5B */ u8 needsBattleState;
    /* 0x5C */ u16 flagId;
    /* 0x5E */ u16 dataFlagId;
    /* 0x60 */ u32 flags;
};

/* The battle state's held-button words (observed field). */
struct BtlStateMasks {
    /* 0x0000 */ u8 unk0000[0x45A0];
    /* 0x45A0 */ u64 held;
};

/* The debug menu's pending-state page, at 0x4100 of the menu (observed field). */
struct BtlDebugPage {
    /* 0x00 */ u8 unk00[0xED];
    /* 0xED */ u8 pending;
    /* 0xEE */ u8 unkEE[0x22];
};

typedef char BtlDebugEntryLayoutCheck[
    sizeof(BtlDebugEntry) == 0x64 && offsetof(BtlDebugEntry, needsBattleState) == 0x5B &&
    offsetof(BtlDebugEntry, flags) == 0x60 && offsetof(BtlStateMasks, held) == 0x45A0 && sizeof(BtlDebugPage) == 0x110 ? 1 : -1];

#endif
