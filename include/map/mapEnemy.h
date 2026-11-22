/* map/mapEnemy.cpp: the field enemies of a map (the "MENEMY" task's work, behind g_mapEnemy).
 *
 * Shin Megami Tensei IV keeps 32 0x180-byte enemy entries (MapEnemy, 0x30F4 bytes); Apocalypse keeps
 * 40 0x188-byte entries plus the area spawn groups and spawn tables (MapEnemyA, 0x4D84 bytes). Each
 * game declares g_mapEnemy in its own map/MapEnemyGlobal.h. */
#ifndef MAP_MAPENEMY_H
#define MAP_MAPENEMY_H

#include "common.h"
#include "map/MapVector.h"
#include "map/mapDepart.h"
#include <stddef.h>

struct AsdMdlObject;
class MoriModelContent;   /* Model/MoriModelContent.h */

#define MAP_ENEMY_COUNT 0x20
#define MAP_ENEMY_COUNT_A 40
#define MAP_ENEMY_EXTRA_MODEL_COUNT 21

/* One field enemy (Shin Megami Tensei IV layout, 0x180 bytes). */
struct MapEnemyEntry {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[3];
    /* 0x004 */ s32 index;              /* the entry's own index */
    /* 0x008 */ MapVector basePosition; /* where the enemy was placed or warped to */
    /* 0x014 */ MapVector previousPosition;
    /* 0x020 */ MapVector position;     /* current position: encounter range, marker and spawn placement */
    /* 0x02C */ f32 heading;            /* degrees */
    /* 0x030 */ s32 behavior;
    /* 0x034 */ s32 targetIndex;        /* -1: none */
    /* 0x038 */ u32 moveMode;
    /* 0x03C */ f32 targetDistance;
    /* 0x040 */ u8 unk040[0x10];
    /* 0x050 */ u8 eventEnabled;        /* the encounter runs the event fields below */
    /* 0x051 */ u8 unk051[3];
    /* 0x054 */ s32 markerIndex;
    /* 0x058 */ u32 mapId;
    /* 0x05C */ s32 count;
    /* 0x060 */ u32 value;
    /* 0x064 */ s32 scriptMode;
    /* 0x068 */ s32 message;
    /* 0x06C */ u32 messageArgument;
    /* 0x070 */ u32 result;             /* the encounter id the trigger returns */
    /* 0x074 */ u32 enemyId;
    /* 0x078 */ u32 unk078;
    /* 0x07C */ u8 hasMarker;
    /* 0x07D */ u8 locked;              /* scripted: excluded from the automatic state changes */
    /* 0x07E */ u8 inView;              /* on screen: no edge arrow */
    /* 0x07F */ u8 unk07F;
    /* 0x080 */ f32 bearing;            /* degrees from the player's view direction */
    /* 0x084 */ s32 state;
    /* 0x088 */ s32 elapsed;            /* frames in the state */
    /* 0x08C */ s32 randomDelay;
    /* 0x090 */ u32 unk090;
    /* 0x094 */ u8 unk094[0x20];
    /* 0x0B4 */ u32 approachMode;
    /* 0x0B8 */ f32 approachHeight;
    /* 0x0BC */ u8 unk0BC[0x48];
    /* 0x104 */ MapVector start;        /* scripted move: start pose */
    /* 0x110 */ f32 startHeading;
    /* 0x114 */ MapVector end;          /* scripted move: end pose */
    /* 0x120 */ f32 endHeading;
    /* 0x124 */ f32 duration;
    /* 0x128 */ MapVector velocity;     /* (end - start) / duration */
    /* 0x134 */ f32 wait;
    /* 0x138 */ u16 timer138;
    /* 0x13A */ u16 timer13A;
    /* 0x13C */ u8 flag13C;
    /* 0x13D */ u8 flag13D;
    /* 0x13E */ u8 tracking;            /* shown by an edge arrow when off screen */
    /* 0x13F */ u8 unk13F;
    /* 0x140 */ s32 blinkTimer;
    /* 0x144 */ s8 onRadar;
    /* 0x145 */ u8 unk145[3];
    /* 0x148 */ f32 playerDistance;
    /* 0x14C */ u8 unk14C[0x10];
    /* 0x15C */ u8 arrowVisible;        /* the edge arrow was drawn this frame */
    /* 0x15D */ u8 unk15D[3];
    /* 0x160 */ f32 arrowX;
    /* 0x164 */ f32 arrowY;
    /* 0x168 */ u8 unk168[4];
    /* 0x16C */ u32 unk16C;
    /* 0x170 */ s32 level;              /* 999 until set */
    /* 0x174 */ s32 kind;               /* 1-10: field enemy; indexes the extra models */
    /* 0x178 */ AsdMdlObject *model;
    /* 0x17C */ s8 registered;          /* s8: retail tests it in its own block (mapEnemyCleanupUpdate, mapEnemyResolveEncounter) */
    /* 0x17D */ s8 owned;               /* the entry created the model */
    /* 0x17E */ u8 unk17E[2];
};

/* One shared model of a kind (both games' bank has 21). */
struct MapEnemyExtraModel {
    /* 0x00 */ AsdMdlObject *model;
    /* 0x04 */ u8 registered;
    /* 0x05 */ u8 active;
    /* 0x06 */ u8 unk06[2];
};

/* The map-enemy work (Shin Megami Tensei IV, 0x30F4 bytes). */
struct MapEnemy {
    /* 0x0000 */ u32 task;
    /* 0x0004 */ s32 state;
    /* 0x0008 */ s32 elapsed;
    /* 0x000C */ u32 requestArgs[2];
    /* 0x0014 */ u8 unk0014[0x20];
    /* 0x0034 */ MapEnemyEntry entries[MAP_ENEMY_COUNT];
    /* 0x3034 */ u32 unk3034;
    /* 0x3038 */ s32 modelCount;
    /* 0x303C */ s32 activeCount;
    /* 0x3040 */ u32 unk3040;
    /* 0x3044 */ s32 spawnAttempts;     /* placement tries; later ones go nearer and wider */
    /* 0x3048 */ u8 flags3048[2];
    /* 0x304A */ u8 unk304A[2];
    /* 0x304C */ MapEnemyExtraModel extraModels[MAP_ENEMY_EXTRA_MODEL_COUNT];
};

typedef char MapEnemyEntryOffsetCheck[sizeof(MapEnemyEntry) == 0x180 &&
    offsetof(MapEnemyEntry, position) == 0x20 && offsetof(MapEnemyEntry, locked) == 0x7D &&
    offsetof(MapEnemyEntry, state) == 0x84 && offsetof(MapEnemyEntry, start) == 0x104 &&
    offsetof(MapEnemyEntry, tracking) == 0x13E && offsetof(MapEnemyEntry, arrowVisible) == 0x15C &&
    offsetof(MapEnemyEntry, kind) == 0x174 && offsetof(MapEnemyEntry, model) == 0x178 ? 1 : -1];
typedef char MapEnemyOffsetCheck[offsetof(MapEnemy, entries) == 0x34 &&
    offsetof(MapEnemy, activeCount) == 0x303C && offsetof(MapEnemy, spawnAttempts) == 0x3044 &&
    offsetof(MapEnemy, extraModels) == 0x304C && sizeof(MapEnemy) == 0x30F4 ? 1 : -1];

/* One field enemy (Apocalypse layout, 0x188 bytes): IV's entry with four bytes more before the
 * blink timer and four more before the level. */
struct MapEnemyEntryA {
    /* 0x000 */ u8 active;
    /* 0x001 */ u8 unk001[3];
    /* 0x004 */ s32 index;
    /* 0x008 */ MapVector basePosition;
    /* 0x014 */ MapVector previousPosition;
    /* 0x020 */ MapVector position;
    /* 0x02C */ f32 heading;
    /* 0x030 */ s32 behavior;
    /* 0x034 */ s32 targetIndex;
    /* 0x038 */ u32 moveMode;
    /* 0x03C */ f32 targetDistance;
    /* 0x040 */ u8 unk040[0x10];
    /* 0x050 */ u8 eventEnabled;
    /* 0x051 */ u8 unk051[3];
    /* 0x054 */ s32 markerIndex;
    /* 0x058 */ u32 mapId;
    /* 0x05C */ s32 count;
    /* 0x060 */ u32 value;
    /* 0x064 */ s32 scriptMode;
    /* 0x068 */ s32 message;
    /* 0x06C */ u32 messageArgument;
    /* 0x070 */ s32 result;             /* encounter id */
    /* 0x074 */ u32 enemyId;            /* NkmEnemyRecord id */
    /* 0x078 */ u32 unk078;
    /* 0x07C */ u8 hasMarker;
    /* 0x07D */ u8 locked;
    /* 0x07E */ u8 inView;
    /* 0x07F */ u8 unk07F;
    /* 0x080 */ f32 bearing;
    /* 0x084 */ s32 state;
    /* 0x088 */ s32 elapsed;
    /* 0x08C */ s32 randomDelay;
    /* 0x090 */ u32 unk090;
    /* 0x094 */ u8 unk094[0x20];
    /* 0x0B4 */ u32 approachMode;
    /* 0x0B8 */ f32 approachHeight;
    /* 0x0BC */ u8 unk0BC[0x48];
    /* 0x104 */ MapVector start;
    /* 0x110 */ f32 startHeading;
    /* 0x114 */ MapVector end;
    /* 0x120 */ f32 endHeading;
    /* 0x124 */ f32 duration;
    /* 0x128 */ MapVector velocity;
    /* 0x134 */ f32 wait;
    /* 0x138 */ u16 timer138;
    /* 0x13A */ s16 timer13A; /* -1 suppresses marker updates. */
    /* 0x13C */ u8 flag13C;
    /* 0x13D */ u8 flag13D;
    /* 0x13E */ u8 flag13E;
    /* 0x13F */ u8 flag13F;
    /* 0x140 */ u8 flag140;
    /* 0x141 */ s8 tracking;
    /* 0x142 */ u8 unk142[2];
    /* 0x144 */ s32 blinkTimer;
    /* 0x148 */ s8 onRadar;
    /* 0x149 */ u8 unk149[3];
    /* 0x14C */ f32 playerDistance;
    /* 0x150 */ u8 unk150[0x10];
    /* 0x160 */ u8 arrowVisible;
    /* 0x161 */ u8 unk161[3];
    /* 0x164 */ f32 arrowX;
    /* 0x168 */ f32 arrowY;
    /* 0x16C */ u8 unk16C[4];
    /* 0x170 */ u32 unk170;
    /* 0x174 */ u16 level;              /* 999 until set; the NkmEnemyRecord level's low 15 bits */
    /* 0x176 */ u16 unk176;
    /* 0x178 */ u8 unk178[2];
    /* 0x17A */ s8 effectPending;       /* a navigation effect request is queued for the entry */
    /* 0x17B */ u8 variant;
    /* 0x17C */ s32 kind;
    /* 0x180 */ MoriModelContent *model;
    /* 0x184 */ s8 registered;
    /* 0x185 */ s8 owned;
    /* 0x186 */ u8 unk186[2];
};

struct MapEnemyExtraModelA {
    /* 0x00 */ MoriModelContent *model;
    /* 0x04 */ u8 registered;
    /* 0x05 */ u8 active;
    /* 0x06 */ u8 unk06[2];
};

/* The enemies one area (or requester) can spawn: encounter ids, enemy records and kinds by spawn index. */
struct MapEnemySpawnGroup {
    /* 0x00 */ s32 owner;               /* -1: free */
    /* 0x04 */ s32 encounterIds[16];
    /* 0x44 */ u32 enemyIds[16];
    /* 0x84 */ s32 kinds[16];
};

/* One reserved spawn. */
struct MapEnemySpawn {
    /* 0x00 */ s32 owner;               /* -1: free */
    /* 0x04 */ s32 encounterId;
    /* 0x08 */ u32 enemyId;
    /* 0x0C */ s32 kind;
};

struct MapEnemySpawnTable {
    /* 0x000 */ MapEnemySpawn entries[16];
    /* 0x100 */ s32 count;
};

/* The map-enemy work (Apocalypse, 0x4D84 bytes). */
struct MapEnemyA {
    /* 0x0000 */ u32 task;
    /* 0x0004 */ s32 state;
    /* 0x0008 */ s32 elapsed;
    /* 0x000C */ u32 requestArgs[2];
    /* 0x0014 */ u8 unk0014[0x20];
    /* 0x0034 */ MapEnemyEntryA entries[MAP_ENEMY_COUNT_A];
    /* 0x3D74 */ u32 unk3D74;
    /* 0x3D78 */ s32 modelCount;
    /* 0x3D7C */ s32 activeCount;
    /* 0x3D80 */ u32 unk3D80;
    /* 0x3D84 */ s32 spawnAttempts;
    /* 0x3D88 */ u8 flags3D88[2];
    /* 0x3D8A */ u8 unk3D8A[2];
    /* 0x3D8C */ MapEnemyExtraModelA extraModels[MAP_ENEMY_EXTRA_MODEL_COUNT];
    /* 0x3E34 */ MapEnemySpawnGroup spawnGroups[16];
    /* 0x4A74 */ s32 spawnIndex;
    /* 0x4A78 */ MapEnemySpawnTable spawnTables[3];
};

typedef char MapEnemyEntryAOffsetCheck[sizeof(MapEnemyEntryA) == 0x188 &&
    offsetof(MapEnemyEntryA, approachMode) == 0xB4 && offsetof(MapEnemyEntryA, velocity) == 0x128 &&
    offsetof(MapEnemyEntryA, tracking) == 0x141 && offsetof(MapEnemyEntryA, arrowVisible) == 0x160 &&
    offsetof(MapEnemyEntryA, level) == 0x174 && offsetof(MapEnemyEntryA, kind) == 0x17C &&
    offsetof(MapEnemyEntryA, model) == 0x180 ? 1 : -1];
typedef char MapEnemyAOffsetCheck[offsetof(MapEnemyA, activeCount) == 0x3D7C &&
    offsetof(MapEnemyA, spawnAttempts) == 0x3D84 && offsetof(MapEnemyA, extraModels) == 0x3D8C &&
    offsetof(MapEnemyA, spawnGroups) == 0x3E34 && offsetof(MapEnemyA, spawnIndex) == 0x4A74 &&
    offsetof(MapEnemyA, spawnTables[1]) == 0x4B7C && sizeof(MapEnemyA) == 0x4D84 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void *contentEntryGetD(u32 index);
#ifdef __cplusplus
}
#endif

#endif
