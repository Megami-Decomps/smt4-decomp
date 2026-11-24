#include "common.h"
#include <stdio.h>
#include "game/GameState.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"
#include "map/LmapPlayerModel.h"

/* MapDepartWork.modelState */
enum {
    DEPART_STATE_SKY_START = 0,
    DEPART_STATE_SKY_WAIT = 1,
    DEPART_STATE_MAP_START = 10,
    DEPART_STATE_MAP_WAIT = 11,
    DEPART_STATE_DONE = 99
};

enum {
    DEPART_MAP_SPECIAL_MODEL = 0x24,  /* maps 0x29-0x2B load this map's model, area 1 */
    DEPART_MAP_SPECIAL_A = 0x29,
    DEPART_MAP_SPECIAL_B = 0x2A,
    DEPART_MAP_SPECIAL_C = 0x2B,
    DEPART_MAP_LOWERED_SKY = 0x13,
    DEPART_MAP_MODEL_FLAGS = 0x38,
    DEPART_SKY_MODEL_FLAGS = 0x1C0
};

extern "C" {
extern MapDepartWork *g_mapDepartWork;

s32 mapTableGetValue(s32 mapId);
s32 modelHasLoadedAttachment(AsdMdlObject *model);

/* Starts the sky model with its first motions; one map keeps it far below the camera. */
static __inline void departSkyStart(void)
{
    lightOwnerRegister(g_mapDepartWork->nodeB, 1);
    modelSelectPrimaryMotion(g_mapDepartWork->nodeB->node, 0, 0.0f);
    modelSelectSecondaryMotion(g_mapDepartWork->nodeB->node, 0, 0.0f);
    if (g_mapDepartWork->mapId == DEPART_MAP_LOWERED_SKY) {
        NodeVec3 lowered;
        /* Keep the sky centered horizontally, changing only its height. */
        lowered.x = 0.0f;
        lowered.z = 0.0f;
        lowered.y = -20000.0f;
        nodeSetTranslation(g_mapDepartWork->nodeB->node, 0, &lowered.x);
    }
    g_mapDepartWork->modelState = DEPART_STATE_MAP_START;
}

/* Starts the map model with its first motions. */
static __inline void departMapStart(void)
{
    lightOwnerRegister(g_mapDepartWork->nodeA, 1);
    modelSelectPrimaryMotion(g_mapDepartWork->nodeA->node, 0, 0.0f);
    modelSelectSecondaryMotion(g_mapDepartWork->nodeA->node, 0, 0.0f);
    g_mapDepartWork->modelState = DEPART_STATE_DONE;
}

/* Steps the map depart loader: the sky model first, then the map model; returns 1 once both are up. */
u32 mapDepartLoadModelsStep(void)
{
    char path[128];
    switch (g_mapDepartWork->modelState) {
    case DEPART_STATE_SKY_START:
        if (g_gameState.skyDisabled == 1) {
            g_mapDepartWork->nodeA = NULL;
            g_mapDepartWork->modelState = DEPART_STATE_DONE;
            break;
        }
        if (g_mapDepartWork->dataB != NULL) {
            g_mapDepartWork->nodeB = asdMdlManagerCreateFromSource(g_mapDepartWork->dataB,
                                                                      g_mapDepartWork->sizeB, DEPART_SKY_MODEL_FLAGS);
            departSkyStart();
            break;
        }
        g_mapDepartWork->skyId = mapTableGetValue(g_mapDepartWork->areaId);
        if (g_mapDepartWork->skyId <= 0) {
            g_mapDepartWork->modelState = DEPART_STATE_MAP_START;
            break;
        }
        sprintf(path, "map/sky/sky_%02d.bam", g_mapDepartWork->skyId);
        g_mapDepartWork->nodeB = asdMdlManagerCreateSecondList(path, DEPART_SKY_MODEL_FLAGS);
        g_mapDepartWork->modelState++;
        /* fall through to the load check */
    case DEPART_STATE_SKY_WAIT:
        if (modelHasLoadedAttachment(g_mapDepartWork->nodeB) == 0)
            break;
        departSkyStart();
        break;
    case DEPART_STATE_MAP_START:
        if (g_mapDepartWork->dataA != NULL) {
            g_mapDepartWork->nodeA = asdMdlManagerCreateFromSource(g_mapDepartWork->dataA,
                                                                      g_mapDepartWork->sizeA, DEPART_MAP_MODEL_FLAGS);
            departMapStart();
            break;
        }
        if (g_mapDepartWork->mapId == DEPART_MAP_SPECIAL_A || g_mapDepartWork->mapId == DEPART_MAP_SPECIAL_B ||
            g_mapDepartWork->mapId == DEPART_MAP_SPECIAL_C) {
            g_mapDepartWork->loadMapId = DEPART_MAP_SPECIAL_MODEL;
            g_mapDepartWork->loadAreaId = 1;
        } else {
            g_mapDepartWork->loadMapId = g_mapDepartWork->mapId;
            g_mapDepartWork->loadAreaId = g_mapDepartWork->areaId;
        }
        sprintf(path, "map/m%03d/m%03d_%02d.bam", g_mapDepartWork->loadMapId, g_mapDepartWork->loadMapId,
                g_mapDepartWork->loadAreaId);
        g_mapDepartWork->nodeA = asdMdlManagerCreateSecondList(path, DEPART_MAP_MODEL_FLAGS);
        g_mapDepartWork->modelState++;
        break;
    case DEPART_STATE_MAP_WAIT:
        if (modelHasLoadedAttachment(g_mapDepartWork->nodeA) == 0)
            break;
        departMapStart();
        break;
    case DEPART_STATE_DONE:
        return 1;
    }
    return 0;
}

} /* extern "C" */
