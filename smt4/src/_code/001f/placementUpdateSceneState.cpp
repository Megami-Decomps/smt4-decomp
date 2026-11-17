#include "common.h"
#include "map/LmapGlobals.h"
extern "C" {
struct ModelPlacement { u8 active; u8 unk01[3]; MapVector position; f32 heading; u32 counter; u8 enabled; };
struct ModelPlacementWork { u32 state; u32 counter; u8 unk08[4]; u8 requested; u8 unk0D[3]; ModelPlacement placement; };
extern ModelPlacementWork *g_mapModelWork;
/* Activate a requested placement using the local scene's position and heading. */
void placementUpdateSceneState(void)
{
    if (g_mapModelWork->state == 1) {
        g_mapModelWork->counter = 0;
        g_mapModelWork->state = 2;
        g_mapModelWork->requested = 0;
        ModelPlacement *placement = &g_mapModelWork->placement;
        placement->active = 1;
        placement->position = g_lmapScene->pose.position;
        placement->heading = g_lmapScene->pose.heading;
        placement->counter = 0;
        placement->enabled = 1;
    }
}
}
