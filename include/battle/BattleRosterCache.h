#ifndef BATTLE_BATTLEROSTERCACHE_H
#define BATTLE_BATTLEROSTERCACHE_H
#include "common.h"
#include "shard/W5_W5Match4_BattleVectorTransition.h"
#include <stddef.h>

/* The identity subobject returned by roster slot lookup helpers. */
struct BattleCombatantStatusKey {
    /* 0x00 */ u16 reserved;
    /* 0x02 */ u16 id;
    /* 0x04 */ u8 padding04[8];
    /* 0x0C */ u32 key;
};
typedef char BattleCombatantStatusKeyLayoutCheck[
    offsetof(BattleCombatantStatusKey, id) == 2 &&
    offsetof(BattleCombatantStatusKey, key) == 0xC &&
    sizeof(BattleCombatantStatusKey) == 0x10 ? 1 : -1];

struct BattleRosterCacheEntry {
    /* 0x00 */ s16 selectionIndex;
    /* 0x02 */ s16 group;
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 padding06[2];
    /* 0x08 */ u32 key;
    /* 0x0C */ f32 positionX;
    /* 0x10 */ u8 padding10[8];
};
typedef char BattleRosterCacheEntryLayoutCheck[
    offsetof(BattleRosterCacheEntry, key) == 8 &&
    offsetof(BattleRosterCacheEntry, positionX) == 0xC &&
    sizeof(BattleRosterCacheEntry) == 0x18 ? 1 : -1];

struct BattleRetainedRosterEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ u32 key;
    /* 0x08 */ f32 scale;
    /* 0x0C */ BattleVector3 position;
    /* 0x18 */ s32 parameterIndex;
};
typedef char BattleRetainedRosterEntryLayoutCheck[
    offsetof(BattleRetainedRosterEntry, position) == 0xC &&
    offsetof(BattleRetainedRosterEntry, parameterIndex) == 0x18 &&
    sizeof(BattleRetainedRosterEntry) == 0x1C ? 1 : -1];

/* Camera state stored before the per-combatant cache records in newer files. */
struct BattleRosterCacheSnapshotA {
    /* 0x00 */ BattleVector3 first;
    /* 0x0C */ BattleVector3 second;
    /* 0x18 */ u32 value;
    /* 0x1C */ u8 unk1C[0xFC];
};
struct BattleRosterCacheFileHeader {
    /* 0x00 */ u32 magic;
    /* 0x04 */ s8 version[4];
    /* 0x08 */ u16 dataOffset;
    /* 0x0A */ u16 unk0A;
    /* 0x0C */ u32 dataSize;
};
struct BattleRosterCacheConfig {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 capacity;
};
typedef char BattleRosterCacheSnapshotLayoutCheck[
    sizeof(BattleRosterCacheSnapshotA) == 0x118 &&
    offsetof(BattleRosterCacheSnapshotA, second) == 0xC &&
    offsetof(BattleRosterCacheSnapshotA, value) == 0x18 ? 1 : -1];
typedef char BattleRosterCacheFileLayoutCheck[
    sizeof(BattleRosterCacheFileHeader) == 0x10 &&
    offsetof(BattleRosterCacheFileHeader, version) == 4 &&
    offsetof(BattleRosterCacheFileHeader, dataOffset) == 8 &&
    offsetof(BattleRosterCacheFileHeader, dataSize) == 0xC &&
    sizeof(BattleRosterCacheConfig) == 8 &&
    offsetof(BattleRosterCacheConfig, capacity) == 4 ? 1 : -1];
#endif
