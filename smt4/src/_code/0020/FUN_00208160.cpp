/* NON_MATCHING: steps the map depart loader (sky model first, then the map model; each from a preloaded resource or from file); written from the decompilation, branch layout and the duplicated model setup not compared with retail */
#include "common.h"

#define DEPART_STATE_SKY_START 0
#define DEPART_STATE_SKY_WAIT 1
#define DEPART_STATE_MAP_START 10
#define DEPART_STATE_MAP_WAIT 11
#define DEPART_STATE_DONE 99

#define DEPART_MAP_SPECIAL_A 0x29
#define DEPART_MAP_SPECIAL_B 0x2A
#define DEPART_MAP_SPECIAL_C 0x2B
#define DEPART_MAP_SPECIAL_MODEL 0x24
#define DEPART_MAP_LOWERED_SKY 0x13
#define DEPART_MAP_MODEL_FLAGS 0x38
#define DEPART_SKY_MODEL_FLAGS 0x1C0

struct DepartMotion;

struct DepartModel {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ DepartMotion *motion;
};

struct DepartVec3 {
    f32 x;
    f32 y;
    f32 z;
};

struct MapDepartWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 mapId;
    /* 0x06 */ s16 subId;
    /* 0x08 */ s16 state;
    /* 0x0A */ u8 unk0A[2];
    /* 0x0C */ DepartModel *mapModel;
    /* 0x10 */ DepartModel *skyModel;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ s32 skyId;
    /* 0x1C */ s16 loadMapId;
    /* 0x1E */ s16 loadSubId;
    /* 0x20 */ void *mapResource;
    /* 0x24 */ u32 mapResourceSize;
    /* 0x28 */ void *skyResource;
    /* 0x2C */ u32 skyResourceSize;
};

struct DepartGameState {
    /* 0x000 */ u8 unk000[0x360];
    /* 0x360 */ s32 skyDisabled;
};

extern "C" {
extern MapDepartWork *g_mapDepartWork;
extern DepartGameState g_gameState;

s32 mapTableGetValue(s32 mapId);
DepartModel *asdMdlManagerCreateFromSource(void *source, u32 size, u32 flags);
DepartModel *asdMdlManagerCreateSecondList(const char *path, u32 flags);
s32 FUN_002adee0(DepartModel *model);
void FUN_002a0428(DepartModel *model, s32 flag);
void modelSelectPrimaryMotion(DepartMotion *motion, s32 index);
void modelSelectSecondaryMotion(DepartMotion *motion, s32 index);
void nodeSetTranslation(DepartMotion *motion, s32 node, DepartVec3 *translation);
void textFormatBuffer(char *out, const char *format, ...);

/* Starts the loaded model with its first motions. */
static __inline void departModelStart(DepartModel *model)
{
    FUN_002a0428(model, 1);
    modelSelectPrimaryMotion(model->motion, 0);
    modelSelectSecondaryMotion(model->motion, 0);
}

/* Starts the sky model; one map keeps it far below the camera. */
static __inline void departSkyStart(MapDepartWork *work)
{
    departModelStart(work->skyModel);
    if (work->mapId == DEPART_MAP_LOWERED_SKY) {
        DepartVec3 lowered = { 0.0f, -20000.0f, 0.0f };
        nodeSetTranslation(work->skyModel->motion, 0, &lowered);
    }
    work->state = DEPART_STATE_MAP_START;
}

u32 FUN_00208160(void)
{
    MapDepartWork *work = g_mapDepartWork;
    char path[128];
    switch (work->state) {
    case DEPART_STATE_SKY_START:
        if (g_gameState.skyDisabled == 1) {
            work->mapModel = NULL;
            work->state = DEPART_STATE_DONE;
            return 0;
        }
        if (work->skyResource != NULL) {
            work->skyModel = asdMdlManagerCreateFromSource(work->skyResource, work->skyResourceSize, DEPART_SKY_MODEL_FLAGS);
            departSkyStart(g_mapDepartWork);
            return 0;
        }
        work->skyId = mapTableGetValue(work->subId);
        if (work->skyId < 1) {
            work->state = DEPART_STATE_MAP_START;
            return 0;
        }
        textFormatBuffer(path, "map/sky/sky_%02d.bam", work->skyId);
        work->skyModel = asdMdlManagerCreateSecondList(path, DEPART_SKY_MODEL_FLAGS);
        work->state++;
        /* fall through to the load check */
    case DEPART_STATE_SKY_WAIT:
        if (FUN_002adee0(work->skyModel) == 0)
            return 0;
        departSkyStart(work);
        return 0;
    case DEPART_STATE_MAP_START:
        if (work->mapResource != NULL) {
            work->mapModel = asdMdlManagerCreateFromSource(work->mapResource, work->mapResourceSize, DEPART_MAP_MODEL_FLAGS);
            departModelStart(g_mapDepartWork->mapModel);
            g_mapDepartWork->state = DEPART_STATE_DONE;
            return 0;
        }
        if (work->mapId == DEPART_MAP_SPECIAL_A || work->mapId == DEPART_MAP_SPECIAL_B || work->mapId == DEPART_MAP_SPECIAL_C) {
            work->loadMapId = DEPART_MAP_SPECIAL_MODEL;
            work->loadSubId = 1;
        } else {
            work->loadMapId = work->mapId;
            work->loadSubId = work->subId;
        }
        textFormatBuffer(path, "map/m%03d/m%03d_%02d.bam", work->loadMapId, work->loadMapId, work->loadSubId);
        work->mapModel = asdMdlManagerCreateSecondList(path, DEPART_MAP_MODEL_FLAGS);
        work->state++;
        return 0;
    case DEPART_STATE_MAP_WAIT:
        if (FUN_002adee0(work->mapModel) == 0)
            return 0;
        departModelStart(work->mapModel);
        work->state = DEPART_STATE_DONE;
        return 0;
    case DEPART_STATE_DONE:
        return 1;
    }
    return 0;
}

} /* extern "C" */
