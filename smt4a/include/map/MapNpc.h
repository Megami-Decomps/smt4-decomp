/* map/mapNpc.cpp (Apocalypse): the NPCs of the current map area and the interaction target picked
 * among them. One work object (the pointer at 0x581280) holds the loader's cursor, the NPC slots
 * and the target state. */
#ifndef MAP_MAPNPC_SMT4A_H
#define MAP_MAPNPC_SMT4A_H

#include "common.h"
#include <stddef.h>
#include "map/MapVector.h"
#include "Model/MoriModelContent.h"

#define MAP_NPC_COUNT 0x40

struct MapTimerSlot;

/* The loader's steps (MapNpcWork::loadState). */
enum MapNpcLoadState {
    MAP_NPC_LOAD_PATHS = 0,     /* queue the area's walking paths */
    MAP_NPC_LOAD_REQUEST = 1,   /* find the next NPC of the area and request its model */
    MAP_NPC_LOAD_PLACE = 2      /* wait for the model, then create and place the NPC */
};

/* MapNpcRecord::kind and MapNpc::kind. */
enum MapNpcKind {
    MAP_NPC_KIND_WALKER = 1,        /* follows its path */
    MAP_NPC_KIND_WIDE_TRIGGER = 2,
    MAP_NPC_KIND_IGNORED = 4
};

/* Models that stand in every sub-area of their area and are drawn at their own scale. */
enum MapNpcModelId {
    MAP_NPC_MODEL_AREA_WIDE_A = 0x13,
    MAP_NPC_MODEL_AREA_WIDE_B = 0x17,
    MAP_NPC_MODEL_AREA_WIDE_C = 0x18
};

/* Table 0x2A: one NPC placement (0x38 bytes). An area of -1 ends the installed records. */
struct MapNpcRecord {
    /* 0x00 */ s16 area;
    /* 0x02 */ s16 subArea;
    /* 0x04 */ s16 flagFirst;       /* the flag pair that must hold for the NPC to appear */
    /* 0x06 */ s16 flagSecond;
    /* 0x08 */ u32 icon;
    /* 0x0C */ char text[0x20];
    /* 0x2C */ s16 kind;
    /* 0x2E */ s16 x;
    /* 0x30 */ s16 y;
    /* 0x32 */ s16 z;
    /* 0x34 */ s16 heading;
    /* 0x36 */ s8 pathIndex;
    /* 0x37 */ s8 modelId;          /* character/npc/npc_%02d.bam */
};

/* One NPC of the map (0x3C bytes). */
struct MapNpc {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[2];
    /* 0x03 */ u8 unk03;
    /* 0x04 */ s16 kind;
    /* 0x06 */ s16 modelId;
    /* 0x08 */ s16 tableIndex;      /* its record in table 0x2A */
    /* 0x0A */ s16 pathIndex;
    /* 0x0C */ f32 pathDuration;
    /* 0x10 */ MapVector position;
    /* 0x1C */ f32 heading;
    /* 0x20 */ s32 unk20;
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ s16 flagFirst;
    /* 0x2A */ s16 flagSecond;
    /* 0x2C */ u8 sharedModel;      /* the body was created over an earlier NPC's model resource */
    /* 0x2D */ u8 unk2D[3];
    /* 0x30 */ MapTimerSlot *pathTimer;
    /* 0x34 */ MoriModelContent *model;
    /* 0x38 */ s32 unk38;
};

struct MapNpcWork {
    /* 0x0000 */ s32 loadState;     /* MapNpcLoadState */
    /* 0x0004 */ s32 tableIndex;    /* the record being loaded */
    /* 0x0008 */ s32 count;         /* NPCs placed so far */
    /* 0x000C */ MapNpc npcs[MAP_NPC_COUNT];
    /* 0x0F0C */ u8 hasTarget;      /* an interaction target is on screen */
    /* 0x0F0D */ u8 unk0F0D[3];
    /* 0x0F10 */ s32 target;        /* the target's NPC slot */
    /* 0x0F14 */ s32 targetModelId;
    /* 0x0F18 */ u8 unk0F18[4];
    /* 0x0F1C */ u32 icon;          /* the target record's icon and text */
    /* 0x0F20 */ char text[0x20];
    /* 0x0F40 */ u8 disabled;
    /* 0x0F41 */ u8 unk0F41[0xB];
    /* 0x0F4C */ s32 holdFrames;    /* frames the last target stays on screen */
    /* 0x0F50 */ s32 lastTarget;
};

typedef char MapNpcLayoutCheck[offsetof(MapNpcRecord, kind) == 0x2C && offsetof(MapNpcRecord, modelId) == 0x37 &&
    sizeof(MapNpcRecord) == 0x38 && offsetof(MapNpc, position) == 0x10 && offsetof(MapNpc, sharedModel) == 0x2C &&
    offsetof(MapNpc, model) == 0x34 && sizeof(MapNpc) == 0x3C && offsetof(MapNpcWork, npcs) == 0x0C &&
    offsetof(MapNpcWork, hasTarget) == 0xF0C && offsetof(MapNpcWork, lastTarget) == 0xF50 ? 1 : -1];

extern "C" {
extern MapNpcWork *g_mapNpcWork;
}

#endif
