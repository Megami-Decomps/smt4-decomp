/* NON_MATCHING: retail loads g_gameState's address at entry (before the work clear) and the clear's base register is r1, not r0; the rest matches. Wave 89: clearing the model through a function-scope `MapSingleModelState *` taken from `work` (as placementUpdateSceneState writes the model) while the placement block keeps its own pointer gives 4 lines (the clear moves to r1; only the g_gameState address load stays late), but the same pointer in a block scope gives 28 and reusing one pointer 36, so the form is scope-sensitive and not kept. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "map/SingleModelState.h"
#include "game/GameState.h"

extern "C" {
extern MapSingleModelWork *g_mapModelWork;

/* Clears the single-model work and, when the map names a model, creates it hidden and enters the idle state. */
void mapSingleModelInitialize(void)
{
    MapSingleModelWork *work = g_mapModelWork;
    work->state = 0;
    work->timer = 0;
    work->modelId = 0;
    work->requested = 0;
    work->model.active = 0;
    work->model.position.x = 0.0f;
    work->model.position.y = 0.0f;
    work->model.position.z = 0.0f;
    work->model.heading = 0.0f;
    work->model.motion = 0;
    work->model.changed = 0;
    work->model.node = NULL;
    g_mapModelWork->modelId = g_gameState.event.singleModelId;
    if (g_mapModelWork->modelId > 0) {
        MapSingleModelState *model = &g_mapModelWork->model;
        model->node = asdMdlManagerCreateLoaded("map/unit/u006.bam", 7);
        lightOwnerRegister(model->node, 1);
        asdMdlObjectHide(model->node);
        g_mapModelWork->state = 1;
    }
}
}
