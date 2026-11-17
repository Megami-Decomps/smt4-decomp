/* NON_MATCHING: retail retains a second game-state base with add #0 after the global load; remaining body matches. */
#include "gamedata/MapSaveBlock.h"
#include "map/mapDepart.h"
#include "map/mapMain.h"
#include "game/GameState.h"

extern "C" {
extern MapMain *g_mapMain;
void mapAdjustPositionToGround(MapVector *position);

// Save the return map and pose, unless a one-shot suppression flag was set.
void FUN_00276138()
{
    MapMain *map = g_mapMain;
    MapSaveBlock *save = gameGetMapBlock();
    GameState *state = &g_gameState;
    if (g_gameState.map.unk84 != 0) {
        state->map.unk84 = 0;
    } else {
        mapAdjustPositionToGround(&state->position);
        state->map.savedLocationSet = 1;
        state->savedMapId = save->savePoint.mapId;
        state->savedAreaId = save->savePoint.areaId;
        state->savedObjectId = save->savePointObjectId;
        state->savedPosition.x = save->savePoint.x;
        state->savedPosition.y = save->savePoint.y;
        state->savedPosition.z = save->savePoint.z;
        state->savedHeading = save->savePoint.heading;
        state->savedHeadingCopy = save->savePoint.heading;
        state->targetMapId = map->mapId;
        state->targetAreaId = map->areaId;
        state->targetPosition = state->position;
        state->targetHeading = state->overviewHeading;
        state->targetHeadingCopy = state->overviewHeading;
    }
}
}
