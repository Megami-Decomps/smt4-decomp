#ifndef MAP_ENEMY_SPAWN_STATE_H
#define MAP_ENEMY_SPAWN_STATE_H

#include "map/mapDepart.h"

struct EnemySpawnRecord {
    u16 unk00;
    s16 x, y, z;
    u16 id, kind;
};
struct EnemySpawnObject {
    u8 prefix[0x20];
    u32 id, sourceIndex;
    u8 unk28[0x3c];
    u32 category, currentValue;
    u8 unk6C[4];
    u32 kind;
};
struct EnemySpawnOwner {
    u32 unk00, id, variant;
    u8 unk0C[0xc];
    EnemySpawnObject *objects[32]; // 0x18
    u32 context; // 0x98
    u32 unk9c;
    u16 candidateCount; // 0xa0
    u16 candidates[512]; // 0xa2
    u8 unk4a2[0x400];
    u16 registeredIds[32]; // 0x8a2
};
// Accessed prefix of the table-29 condition record, not its serialized stride.
struct EnemySpawnCondition {
    u8 unk00[0xa];
    u8 type;
    u8 unk0b;
    s16 flag;
};
typedef char EnemySpawnStateLayoutCheck[
    sizeof(EnemySpawnRecord) == 0xc && offsetof(EnemySpawnRecord, id) == 8 &&
    sizeof(EnemySpawnObject) == 0x74 && offsetof(EnemySpawnObject, sourceIndex) == 0x24 &&
    offsetof(EnemySpawnOwner, objects) == 0x18 &&
    offsetof(EnemySpawnOwner, context) == 0x98 &&
    offsetof(EnemySpawnOwner, candidateCount) == 0xa0 &&
    offsetof(EnemySpawnOwner, candidates) == 0xa2 &&
    offsetof(EnemySpawnOwner, registeredIds) == 0x8a2 && sizeof(EnemySpawnOwner) == 0x8e4 &&
    offsetof(EnemySpawnCondition, type) == 0xa && offsetof(EnemySpawnCondition, flag) == 0xc ? 1 : -1];

#endif
