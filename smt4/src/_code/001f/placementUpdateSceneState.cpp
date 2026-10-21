#include "common.h"
extern "C" {
struct Vector3 { f32 x, y, z; };
struct ModelPlacement { u8 active; u8 unk01[3]; Vector3 position; u32 model; u32 counter; u8 enabled; };
struct ModelPlacementWork { u32 state; u32 counter; u8 unk08[4]; u8 requested; u8 unk0D[3]; ModelPlacement placement; };
struct LocalScenePlacement { u8 unk00[0x1C]; Vector3 position; u8 unk28[0x24]; u32 model; };
extern ModelPlacementWork *g_mapModelWork;
extern LocalScenePlacement *g_lmapScene;
/* Activate a requested placement using the local scene's position and model. */
void placementUpdateSceneState(void)
{
    if (g_mapModelWork->state == 1) {
        g_mapModelWork->counter = 0;
        g_mapModelWork->state = 2;
        g_mapModelWork->requested = 0;
        ModelPlacement *placement = &g_mapModelWork->placement;
        placement->active = 1;
        placement->position = g_lmapScene->position;
        placement->model = g_lmapScene->model;
        placement->counter = 0;
        placement->enabled = 1;
    }
}
}
