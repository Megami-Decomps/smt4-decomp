#ifndef BATTLE_BATTLEEVENTASSETS_H
#define BATTLE_BATTLEEVENTASSETS_H

#include "common.h"
#include <stddef.h>

/* Accessed prefix; the event name is a trailing string, not a recovered allocation boundary. */
struct BattleEventAssetSource {
    /* 0x000 */ u8 unk000[0xC4];
    /* 0x0C4 */ u32 archiveId;
    /* 0x0C8 */ u8 unk0C8[0x38];
    /* 0x100 */ char name[1];
};
typedef char BattleEventAssetSourceOffsetsCheck[
    offsetof(BattleEventAssetSource, archiveId) == 0xC4 &&
    offsetof(BattleEventAssetSource, name) == 0x100 ? 1 : -1];

struct BattleEventAssetSourceA {
    u8 unk000[0xf0];
    u32 archiveId; // 0x0f0
    u8 unk0f4[0x3c];
    char name[1]; // 0x130
};
struct ScriptProcess;

/* The Apocalypse battle event block (BtlEvent in battle/btlEvent.h is Shin Megami Tensei IV's). */
struct BattleEventAssetLoadState {
    /* 0x00 */ u32 state;           /* BtlEventStateA */
    /* 0x04 */ u32 flags;
    /* 0x08 */ void *table;         /* the event table file */
    /* 0x0C */ void *messages;      /* the message bank file (.mbm) */
    /* 0x10 */ void *script;        /* the script file (.bf) */
    /* 0x14 */ ScriptProcess *scriptProcess;
    /* 0x18 */ void *entries;       /* the event table's records */
    /* 0x1C */ u32 entryCount;
    /* 0x20 */ s32 entry;           /* script entry to start, negative while none is chosen */
    /* 0x24 */ s32 type;
    /* 0x28 */ s32 frames;          /* frames the script has run */
    /* 0x2C */ u8 stage;            /* auxiliary resources' preparation stage */
};

/* BattleEventAssetLoadState::state. Each state hands over to the next in the same frame when its wait is over. */
enum BtlEventStateA {
    BTL_EVENT_A_IDLE = 0,
    BTL_EVENT_A_LOAD_TABLE = 1,
    BTL_EVENT_A_WAIT_TABLE = 2,
    BTL_EVENT_A_LOAD_MESSAGES = 3,
    BTL_EVENT_A_WAIT_MESSAGES = 4,
    BTL_EVENT_A_LOAD_SCRIPT = 5,
    BTL_EVENT_A_WAIT_SCRIPT = 6,
    BTL_EVENT_A_CREATE_SCRIPT = 7,
    BTL_EVENT_A_PREPARE = 8,
    BTL_EVENT_A_START_SCRIPT = 9,
    BTL_EVENT_A_RUN_SCRIPT = 10
};
typedef char BattleEventAssetSourceAOffsetsCheck[
    offsetof(BattleEventAssetSourceA, archiveId) == 0xf0 &&
    offsetof(BattleEventAssetSourceA, name) == 0x130 &&
    offsetof(BattleEventAssetLoadState, messages) == 0xc &&
    offsetof(BattleEventAssetLoadState, script) == 0x10 &&
    offsetof(BattleEventAssetLoadState, scriptProcess) == 0x14 &&
    offsetof(BattleEventAssetLoadState, entry) == 0x20 &&
    offsetof(BattleEventAssetLoadState, frames) == 0x28 &&
    offsetof(BattleEventAssetLoadState, stage) == 0x2c ? 1 : -1];

#endif
