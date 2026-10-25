/* The battle module's globals (retail g_btlMainState): the state block pointer, the copies of the
 * save slots and data kept for the battle, and the resident file handles the battle loads. */
#ifndef BATTLE_BTLMAINGLOBALS_H
#define BATTLE_BTLMAINGLOBALS_H

#include "common.h"
#include <stddef.h>

struct BtlMainState;

struct BtlMainGlobals {
    /* 0x00 */ BtlMainState *state;      /* the battle's state block (btlGetMainState) */
    /* 0x04 */ void *savedSlots;
    /* 0x08 */ void *savedData;
    /* 0x0C */ void *legionMessages;
    /* 0x10 */ void *legionMessageTable;
    /* 0x14 */ void *legionScript;
    /* 0x18 */ void *commonMessages;
    /* 0x1C */ void *talkSystemMessages;
    /* 0x20 */ void *talkBaseData;
    /* 0x24 */ void *systematicTable;
    /* 0x28 */ void *subQuestGuestMessages;
    /* 0x2C */ void *bossDeadTable;
    /* 0x30 */ s32 enemyOverride;
};
typedef char BtlMainGlobalsLayoutCheck[
    offsetof(BtlMainGlobals, savedData) == 8 && offsetof(BtlMainGlobals, legionMessages) == 0xC &&
    offsetof(BtlMainGlobals, bossDeadTable) == 0x2C && offsetof(BtlMainGlobals, enemyOverride) == 0x30 ? 1 : -1];

extern "C" {
extern BtlMainGlobals g_btlMainState; /* 0x435d90 */
}

#endif
