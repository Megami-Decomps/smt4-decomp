#include "map/LmapViewGlobals.h"

extern "C" {

/* Sets camera presets 1-11 (target and eye heights, lateral and rear distances, field of view) after the base defaults. */
void lmapCameraSetPresetDefaults(void)
{
    g_lmapViewHolder.view->targetHeight[1] = 145.0f;
    g_lmapViewHolder.view->eyeHeight[1] = 165.0f;
    g_lmapViewHolder.view->lateralDistance[1] = 40.0f;
    g_lmapViewHolder.view->rearDistance[1] = 130.0f;
    g_lmapViewHolder.view->fieldOfView[1] = 42.0f;
    g_lmapViewHolder.view->targetHeight[2] = 170.0f;
    g_lmapViewHolder.view->eyeHeight[2] = 210.0f;
    g_lmapViewHolder.view->lateralDistance[2] = 0.0f;
    g_lmapViewHolder.view->rearDistance[2] = 460.0f;
    g_lmapViewHolder.view->fieldOfView[2] = 43.0f;
    g_lmapViewHolder.view->targetHeight[3] = 100.0f;
    g_lmapViewHolder.view->eyeHeight[3] = 220.0f;
    g_lmapViewHolder.view->lateralDistance[3] = 0.0f;
    g_lmapViewHolder.view->rearDistance[3] = 380.0f;
    g_lmapViewHolder.view->fieldOfView[3] = 42.0f;
    g_lmapViewHolder.view->targetHeight[4] = 150.0f;
    g_lmapViewHolder.view->eyeHeight[4] = 160.0f;
    g_lmapViewHolder.view->lateralDistance[4] = 40.0f;
    g_lmapViewHolder.view->rearDistance[4] = 150.0f;
    g_lmapViewHolder.view->fieldOfView[4] = 42.0f;
    g_lmapViewHolder.view->targetHeight[5] = 150.0f;
    g_lmapViewHolder.view->eyeHeight[5] = 200.0f;
    g_lmapViewHolder.view->lateralDistance[5] = 0.0f;
    g_lmapViewHolder.view->rearDistance[5] = 50.0f;
    g_lmapViewHolder.view->fieldOfView[5] = 42.0f;
    g_lmapViewHolder.view->targetHeight[6] = 200.0f;
    g_lmapViewHolder.view->eyeHeight[6] = 50.0f;
    g_lmapViewHolder.view->lateralDistance[6] = 0.0f;
    g_lmapViewHolder.view->rearDistance[6] = 150.0f;
    g_lmapViewHolder.view->fieldOfView[6] = 42.0f;
    g_lmapViewHolder.view->targetHeight[7] = 160.0f;
    g_lmapViewHolder.view->eyeHeight[7] = 170.0f;
    g_lmapViewHolder.view->lateralDistance[7] = 0.0f;
    g_lmapViewHolder.view->rearDistance[7] = 450.0f;
    g_lmapViewHolder.view->fieldOfView[7] = 42.0f;
    g_lmapViewHolder.view->targetHeight[8] = 60.0f;
    g_lmapViewHolder.view->eyeHeight[8] = 250.0f;
    g_lmapViewHolder.view->lateralDistance[8] = 0.0f;
    g_lmapViewHolder.view->rearDistance[8] = 100.0f;
    g_lmapViewHolder.view->fieldOfView[8] = 42.0f;
    g_lmapViewHolder.view->targetHeight[9] = 105.0f;
    g_lmapViewHolder.view->eyeHeight[9] = 125.0f;
    g_lmapViewHolder.view->lateralDistance[9] = 0.0f;
    g_lmapViewHolder.view->rearDistance[9] = 70.0f;
    g_lmapViewHolder.view->fieldOfView[9] = 42.0f;
    g_lmapViewHolder.view->targetHeight[10] = 230.0f;
    g_lmapViewHolder.view->eyeHeight[10] = 160.0f;
    g_lmapViewHolder.view->lateralDistance[10] = 0.0f;
    g_lmapViewHolder.view->rearDistance[10] = 160.0f;
    g_lmapViewHolder.view->fieldOfView[10] = 42.0f;
    g_lmapViewHolder.view->targetHeight[11] = 145.0f;
    g_lmapViewHolder.view->eyeHeight[11] = 165.0f;
    g_lmapViewHolder.view->lateralDistance[11] = 40.0f;
    g_lmapViewHolder.view->rearDistance[11] = 230.0f;
    g_lmapViewHolder.view->fieldOfView[11] = 42.0f;
}
}
