/* NON_MATCHING: rewritten from the raw draft; same blocks, calls and branches as retail. Retail's frame is 8 bytes
 * larger (origin at sp+32, the map block at +48, direction at +52, scale at +64), it loads the 0.0 constant
 * before the 50.0 one, converts the origin in s0-s2 and subtracts the player position in vector order. */
#include "gamedata/MapSaveBlock.h"
#include "map/LmapGlobals.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "code/Code0026.h"

/* unit-local: the part of a type-50 location record (FUN_00267144) that places a map object. */
struct MapObjectRecord {
    /* 0x00 */ s8 category;      /* -1: unused; objects are 100 and above */
    /* 0x01 */ s8 index;
    /* 0x02 */ s16 x;
    /* 0x04 */ s16 y;
    /* 0x06 */ s16 z;
    /* 0x08 */ s16 heading;
    /* 0x0A */ u8 unk0A[6];
    /* 0x10 */ s16 kind;
    /* 0x12 */ s16 mapId;        /* 0: on every map; else the object belongs to that map's flags 0x310-0x31F */
    /* 0x14 */ s16 requiredFlag;
    /* 0x16 */ s16 blockingFlag;
    /* 0x18 */ s16 params[2];
    /* 0x1C */ u32 param;
    /* 0x20 */ s16 extra[2];
};

/* unit-local: the object pool the map objects are created in. */
struct MapObjectPool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 category;
    /* 0x08 */ s32 index;
    /* 0x0C */ u8 unk0C[0x90];
    /* 0x9C */ u32 model;
};

/* unit-local: the created object, as far as this function fills it in. */
struct MapObject {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s32 kind;
    /* 0x20 */ u8 unk20[0x40];
    /* 0x60 */ u32 unk60;
};

extern "C" {
s32 dataTableGetRecordFifty(void);
s32 FUN_0027d968(void);
void clearFlags310To31F(void);
MapObject *effectPoolCreateObject(MapObjectPool *pool, s32 kind, u32 callback);
void FUN_00396044(MapObject *object);
void FUN_00396034(MapObject *object);
void FUN_002329a8(MapObject *object, u32 model);
void recordSetOrigin(MapObject *object, const MapVector *position);
void recordSetDirection(MapObject *object, const MapVector *direction);
void recordSetPosition(MapObject *object, const MapVector *scale);
void FUN_0039607c(MapObject *object, u32 flag, s32 first, s32 second, u32 third, s32 fourth, s32 fifth);

/* Creates the pool's map objects from the type-50 records of its category and index: those of the current map
 * (each counting one of the flags 0x310-0x31F, which also keeps it from being created again) and those on every
 * map, when their required flag is set and their blocking flag is not. */
void mapObjectPoolSpawnFromLocations(MapObjectPool *pool)
{
    MapObject *object;
    MapVector origin;
    MapVector direction;
    MapVector scale;
    MapVector player;
    s32 count = dataTableGetRecordFifty();
    s32 mapObject = 0;
    MapSaveBlock *block = gameGetMapBlock();

    for (s32 i = 0; i < count; i++) {
        MapObjectRecord *record = (MapObjectRecord *)FUN_00267144(i);
        if (record->category == -1 || record->category < 100) {
            continue;
        }
        if (record->mapId == 0) {
            if (record->category == pool->category && record->index == pool->index &&
                (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
                (record->blockingFlag == 0 || !gameFlagIsSet(record->blockingFlag))) {
                object = effectPoolCreateObject(pool, 1, 2);
                if (object != NULL) {
                    origin.x = (f32)record->x;
                    origin.y = (f32)record->y;
                    origin.z = (f32)record->z;
                    direction.x = 0.0f;
                    direction.y = (f32)record->heading;
                    direction.z = 0.0f;
                    scale.x = 50.0f;
                    scale.y = 50.0f;
                    scale.z = 50.0f;
                    player = g_lmapScene->pose.position;
                    f32 dx = origin.x - player.x;
                    f32 dy = origin.y - player.y;
                    f32 dz = origin.z - player.z;
                    if (__sqrtf(dx * dx + dy * dy + dz * dz) < 200.0f) {
                        FUN_00396044(object);
                    }
                    FUN_00396034(object);
                    FUN_002329a8(object, pool->model);
                    recordSetOrigin(object, &origin);
                    recordSetDirection(object, &direction);
                    recordSetPosition(object, &scale);
                    object->kind = record->kind;
                    object->unk60 = 0;
                    FUN_0039607c(object, 0, record->params[0], record->params[1], record->param, record->extra[0],
                                 record->extra[1]);
                }
            }
        } else {
            if (FUN_0027d968() != record->mapId) {
                continue;
            }
            if ((s16)block->quest != record->mapId) {
                clearFlags310To31F();
                block->quest = record->mapId;
            }
            if (record->category == pool->category && record->index == pool->index &&
                !gameFlagIsSet(mapObject + 0x310) &&
                (record->requiredFlag == 0 || gameFlagIsSet(record->requiredFlag)) &&
                (record->blockingFlag == 0 || !gameFlagIsSet(record->blockingFlag))) {
                object = effectPoolCreateObject(pool, 1, 2);
                if (object != NULL) {
                    origin.x = (f32)record->x;
                    origin.y = (f32)record->y;
                    origin.z = (f32)record->z;
                    direction.x = 0.0f;
                    direction.y = (f32)record->heading;
                    direction.z = 0.0f;
                    scale.x = 50.0f;
                    scale.y = 50.0f;
                    scale.z = 50.0f;
                    player = g_lmapScene->pose.position;
                    f32 dx = origin.x - player.x;
                    f32 dy = origin.y - player.y;
                    f32 dz = origin.z - player.z;
                    if (__sqrtf(dx * dx + dy * dy + dz * dz) < 200.0f) {
                        FUN_00396044(object);
                    }
                    FUN_00396034(object);
                    FUN_002329a8(object, pool->model);
                    recordSetOrigin(object, &origin);
                    recordSetDirection(object, &direction);
                    recordSetPosition(object, &scale);
                    object->kind = record->kind;
                    object->unk60 = 0;
                    FUN_0039607c(object, mapObject + 0x310, record->params[0], record->params[1], record->param,
                                 record->extra[0], record->extra[1]);
                }
            }
            mapObject++;
        }
    }
}

} /* extern "C" */
