#include "gamedata/MapSaveBlock.h"
#include "map/mapDepart.h"
#include "game/GameState.h"

extern "C" {

void mapAdjustPositionToGround(MapVector *position);
void mapBlockLoadTableRecord(void);

// Reset the departure state; when `save` is set, record the current position in the map block.
void MapDepart_InitState(MapDepartJobWork *work, s32 save)
{
    MapSaveBlock *point = gameGetMapBlock();
    work->state = 0;
    work->counter = 0;
    work->listActive = 0;
    work->listDelay = 0;
    work->listFrame = 0;
    work->listDone = 0;
    work->promptActive = 0;
    work->promptDelay = 0;
    work->promptReady = 0;
    work->promptFrame = 0;
    work->effectActive = 0;
    work->effectDelay = 0;
    work->effectFrame = 0;
    mapAdjustPositionToGround(&g_gameState.position);
    if (save) {
        point->savePoint.scale = (s16)g_gameState.overviewHeading;
        point->savePoint.mapId = g_gameState.mapId;
        point->savePoint.areaId = g_gameState.areaId;
        point->savePointObjectId = g_gameState.currentObjectId;
        point->savePoint.x = (s16)g_gameState.position.x;
        point->savePoint.y = (s16)g_gameState.position.y;
        point->savePoint.z = (s16)g_gameState.position.z;
        point->savePoint.heading = (s16)g_gameState.heading;
        point->savePoint.tableType = g_gameState.tableKind;
        point->savePoint.tableId = g_gameState.recordId;
    }
    mapBlockLoadTableRecord();
    GameStateDepartBlock *block = &g_mapDepartState.depart;
    block->foundCount = 0;
    block->listCount = 0;
    block->listShown = 0;
}

} /* extern "C" */
