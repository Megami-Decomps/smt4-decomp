/* NON_MATCHING: float constant pool/register allocation and grouped preset-store scheduling differ. */
#include "map/LmapViewGlobals.h"

extern "C" {

// Initialize the remaining per-camera preset columns after the base defaults.
void FUN_00352a14(void)
{
    LmapViewA *camera = g_lmapViewHolder.view;
    camera->targetHeight[1] = 145.0f;
    camera->eyeHeight[1] = 165.0f;
    camera->lateralDistance[1] = 40.0f;
    camera->rearDistance[1] = 130.0f;
    camera->fieldOfView[1] = 42.0f;
    camera->eyeHeight[2] = 210.0f;
    camera->lateralDistance[2] = 0.0f;
    camera->rearDistance[2] = 460.0f;
    camera->fieldOfView[2] = 43.0f;
    camera->eyeHeight[3] = 220.0f;
    camera->lateralDistance[3] = 0.0f;
    camera->rearDistance[3] = 380.0f;
    camera->fieldOfView[3] = 42.0f;
    camera->eyeHeight[4] = 160.0f;
    camera->lateralDistance[4] = 40.0f;
    camera->targetHeight[2] = 170.0f;
    camera->targetHeight[3] = 100.0f;
    camera->targetHeight[4] = 150.0f;
    camera->rearDistance[4] = 150.0f;
    camera->fieldOfView[4] = 42.0f;
    camera->eyeHeight[5] = 200.0f;
    camera->lateralDistance[5] = 0.0f;
    camera->rearDistance[5] = 50.0f;
    camera->fieldOfView[5] = 42.0f;
    camera->eyeHeight[6] = 50.0f;
    camera->lateralDistance[6] = 0.0f;
    camera->targetHeight[5] = 150.0f;
    camera->targetHeight[6] = 200.0f;
    camera->rearDistance[6] = 150.0f;
    camera->fieldOfView[6] = 42.0f;
    camera->targetHeight[7] = 160.0f;
    camera->eyeHeight[7] = 170.0f;
    camera->lateralDistance[7] = 0.0f;
    camera->rearDistance[7] = 450.0f;
    camera->fieldOfView[7] = 42.0f;
    camera->targetHeight[8] = 60.0f;
    camera->eyeHeight[8] = 250.0f;
    camera->lateralDistance[8] = 0.0f;
    camera->rearDistance[8] = 100.0f;
    camera->fieldOfView[8] = 42.0f;
    camera->targetHeight[9] = 105.0f;
    camera->eyeHeight[9] = 125.0f;
    camera->lateralDistance[9] = 0.0f;
    camera->rearDistance[9] = 70.0f;
    camera->fieldOfView[9] = 42.0f;
    camera->targetHeight[10] = 230.0f;
    camera->eyeHeight[10] = 160.0f;
    camera->lateralDistance[10] = 0.0f;
    camera->fieldOfView[10] = 42.0f;
    camera->targetHeight[11] = 145.0f;
    camera->eyeHeight[11] = 165.0f;
    camera->lateralDistance[11] = 40.0f;
    camera->fieldOfView[11] = 42.0f;
    camera->rearDistance[10] = 160.0f;
    camera->rearDistance[11] = 230.0f;
}
}
