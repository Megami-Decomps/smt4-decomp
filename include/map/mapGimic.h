/* map/mapGimic.cpp: the map gimmicks and map units (the gimmick work behind g_mapGimic).
 *
 * Shin Megami Tensei IV keeps 24 0x28-byte entries after a 0x1C-byte header (MapGimic, 0x3DC bytes);
 * Apocalypse has a longer header, 35 0x3C-byte entries, ten animated unit slots and the stage actor
 * (MapGimicA, 0x9E0 bytes). Each game declares g_mapGimic in its own map/MapGimicGlobal.h. */
#ifndef MAP_MAPGIMIC_H
#define MAP_MAPGIMIC_H

#include "common.h"
#include "map/MapVector.h"
#include <stddef.h>

struct AsdMdlObject;
class MoriModelContent;   /* a gimmick's model (Model/MoriModelContent.h) */

#define MAP_GIMIC_COUNT 24
#define MAP_GIMIC_ENTRIES 0x23
#define MAP_GIMIC_SLOTS 10

/* One gimmick or map unit (Shin Megami Tensei IV, 0x28 bytes). */
struct MapGimicEntry {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 dirty;                /* pose changed: the update re-applies it to the model */
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ f32 position[4];         /* x, y, z and the heading in degrees (90 when cleared) */
    /* 0x14 */ s16 motion;              /* requested motion */
    /* 0x16 */ u16 kind;                /* map/unit/u%03d.bam; 14 is the shared clone model */
    /* 0x18 */ AsdMdlObject *model;
    /* 0x1C */ s32 gimicId;             /* table row + 0x2000 for map units */
    /* 0x20 */ s16 requiredFlag;        /* must be set (0: none) */
    /* 0x22 */ s16 forbiddenFlag;       /* must be clear (0: none) */
    /* 0x24 */ u8 ownsModel;            /* the model is a clone */
    /* 0x25 */ u8 unk25[3];
};

/* The gimmick work (Shin Megami Tensei IV, 0x3DC bytes). */
struct MapGimic {
    /* 0x00 */ s32 mode;                /* teardown step while busy */
    /* 0x04 */ u8 busy;                 /* a rebuild is pending */
    /* 0x05 */ u8 unk05;
    /* 0x06 */ s16 area;                /* the area whose map units load */
    /* 0x08 */ s16 subArea;
    /* 0x0A */ s16 step;                /* unit loader: 0 find, 1 load, 2 finish, 99 done */
    /* 0x0C */ s16 index;               /* the unit table row being loaded */
    /* 0x0E */ s16 slot;                /* the entry chosen for it */
    /* 0x10 */ s32 loaded;
    /* 0x14 */ u8 cloneAvailable;       /* an entry holds the shared kind-14 model */
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ s32 cloneSlot;
    /* 0x1C */ MapGimicEntry entries[MAP_GIMIC_COUNT];
};

typedef char MapGimicEntryOffsetCheck[sizeof(MapGimicEntry) == 0x28 &&
    offsetof(MapGimicEntry, kind) == 0x16 && offsetof(MapGimicEntry, model) == 0x18 &&
    offsetof(MapGimicEntry, requiredFlag) == 0x20 && offsetof(MapGimicEntry, ownsModel) == 0x24 ? 1 : -1];
typedef char MapGimicOffsetCheck[offsetof(MapGimic, step) == 0x0A && offsetof(MapGimic, cloneSlot) == 0x18 &&
    offsetof(MapGimic, entries) == 0x1C && sizeof(MapGimic) == 0x3DC ? 1 : -1];

/* One gimmick (Apocalypse, 0x3C bytes). */
struct MapGimicEntryA {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 requested;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ MapVector position;
    /* 0x10 */ f32 heading;             /* degrees; 90 when cleared */
    /* 0x14 */ u16 motion;              /* requested motion */
    /* 0x16 */ s16 kind;
    /* 0x18 */ MoriModelContent *obj;
    /* 0x1C */ s32 gimicId;
    /* 0x20 */ s16 requiredFlag;        /* must be set (0: none) */
    /* 0x22 */ s16 forbiddenFlag;       /* must be clear (0: none) */
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ f32 transform[4];
    /* 0x38 */ u32 state;
};

/* One animated map unit (Apocalypse, 0x18 bytes). */
struct MapGimicSlotA {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s16 animationId;
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ MoriModelContent *obj;
    /* 0x0C */ u32 animationValue;
    /* 0x10 */ u8 requested;
    /* 0x11 */ u8 unk11;
    /* 0x12 */ s16 delay;
    /* 0x14 */ u8 unk14[4];
};

/* A shared model a later entry can clone (IV has one: cloneAvailable/cloneSlot). */
struct MapGimicCloneSourceA {
    /* 0x00 */ u8 available;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s32 slot;                /* -1: none */
};

/* The stage's special actor (the YHVH collision box, the stage intros), after the slots. */
struct MapGimicStageActorA {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01;
    /* 0x02 */ s16 motion;              /* the clip played on it */
    /* 0x04 */ MapVector position;
    /* 0x10 */ f32 heading;
    /* 0x14 */ MoriModelContent *obj;
    /* 0x18 */ u32 state;
    /* 0x1C */ u8 pending;
    /* 0x1D */ u8 unk1D;
    /* 0x1E */ s16 delay;
    /* 0x20 */ u8 requested;
    /* 0x21 */ u8 unk21[3];
    /* 0x24 */ u32 flag;                /* game flag set once its intro played */
    /* 0x28 */ s32 index;               /* the matching g_mapEntries row (the stage kind) */
};

/* The gimmick work (Apocalypse, 0x9E0 bytes). */
struct MapGimicA {
    /* 0x000 */ u32 mode;
    /* 0x004 */ u8 busy;
    /* 0x005 */ u8 unk005;
    /* 0x006 */ s16 area;
    /* 0x008 */ s16 subArea;
    /* 0x00A */ s16 step;
    /* 0x00C */ s16 index;
    /* 0x00E */ u8 unk00E[2];
    /* 0x010 */ u32 loaded;
    /* 0x014 */ MapGimicCloneSourceA clones[4];
    /* 0x034 */ u8 flags[10];           /* cleared as three words by wordTripleClear */
    /* 0x03E */ u8 unk03E[2];
    /* 0x040 */ s32 handles[10];        /* -1: none */
    /* 0x068 */ u8 pending;
    /* 0x069 */ u8 unk069[3];
    /* 0x06C */ u32 scriptFlags[5];     /* raised by script commands */
    /* 0x080 */ u32 status;
    /* 0x084 */ u32 effectStates[3];    /* 1 or 3, set by script commands */
    /* 0x090 */ MapGimicEntryA entries[MAP_GIMIC_ENTRIES];
    /* 0x8C4 */ MapGimicSlotA slots[MAP_GIMIC_SLOTS];
    /* 0x9B4 */ MapGimicStageActorA stageActor;
};

/* Retail 32-bit layout invariants. */
typedef char MapGimicEntryAOffsetCheck[sizeof(MapGimicEntryA) == 0x3C &&
    offsetof(MapGimicEntryA, kind) == 0x16 && offsetof(MapGimicEntryA, gimicId) == 0x1C &&
    offsetof(MapGimicEntryA, requiredFlag) == 0x20 && offsetof(MapGimicEntryA, state) == 0x38 ? 1 : -1];
typedef char MapGimicSlotAOffsetCheck[sizeof(MapGimicSlotA) == 0x18 &&
    offsetof(MapGimicSlotA, animationId) == 2 && offsetof(MapGimicSlotA, animationValue) == 0xC &&
    offsetof(MapGimicSlotA, requested) == 0x10 && offsetof(MapGimicSlotA, delay) == 0x12 ? 1 : -1];
typedef char MapGimicAOffsetCheck[offsetof(MapGimicA, clones[1]) == 0x1C && offsetof(MapGimicA, handles) == 0x40 &&
    offsetof(MapGimicA, scriptFlags[4]) == 0x7C && offsetof(MapGimicA, effectStates) == 0x84 &&
    offsetof(MapGimicA, entries) == 0x90 && offsetof(MapGimicA, slots) == 0x8C4 &&
    offsetof(MapGimicA, stageActor.obj) == 0x9C8 && sizeof(MapGimicA) == 0x9E0 ? 1 : -1];

#endif
