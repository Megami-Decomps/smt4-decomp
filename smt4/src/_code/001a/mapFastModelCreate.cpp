#include <stdio.h>
#include "map/MapIfGlobals.h"
#include "map/mapDepart.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "game/GameState.h"

extern "C" {
void modelPartSetRotationDegrees(AsdMdlNode *node, u32 mode, f32 x, f32 y, f32 z);

/* Places the map's fast-travel model at the given position and heading (the m099 model on map 24). */
void mapFastModelCreate(f32 x, f32 y, f32 z, f32 heading)
{
    MapIfState *state = g_mapIf.state;
    MapIfModelSlot *work = &state->slots[0];
    char path[128];
    work->active = 1;
    work->state = 0;
    work->timer = 0;
    work->position.x = x;
    work->position.y = y;
    work->position.z = z;
    work->position.w = heading;
    if (g_gameState.mapId == 24) {
        sprintf(path, "map/all/m099_fast.bam");
    } else {
        sprintf(path, "map/m%03d/m%03d_fast.bam", g_gameState.mapId, g_gameState.mapId);
    }
    work->model = asdMdlManagerCreateLoaded(path, 7);
    lightOwnerRegister(work->model, 1);
    nodeSetTranslation(work->model->node, 0, &work->position.x);
    modelPartSetRotationDegrees(work->model->node, 0, 0.0f, work->position.w, 0.0f);
}
}
