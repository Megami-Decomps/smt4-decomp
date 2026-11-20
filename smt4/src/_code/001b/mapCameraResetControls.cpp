#include "map/LmapViewGlobals.h"

extern "C" {
void FUN_002df5f8(void);

/* Resets map camera controls, scalar tracks, and transition defaults. */
void mapCameraResetControls(void)
{
    LmapViewHolder *globals = &g_lmapViewHolder;
    LmapView *work = globals->view;
    work->mode = 0;
    work->phase = 0;
    work->unk008 = 0;
    work->preset = 0;
    work->contextOverride = -1;
    work->targetHeight[0] = 100.0f;
    work->eyeHeight[0] = 220.0f;
    work->lateralDistance[0] = 0.0f;
    work->rearDistance[0] = 700.0f;
    work->fieldOfView[0] = 42.0f;
    work->contextMode = 0;
    work->active = 0;
    work->scale = 1.0f;
    work->values[0] = 0.0f;
    work->values[1] = 0.0f;
    work->values[2] = 0.0f;
    work->values[3] = 0.0f;
    work->tracking = 0;
    work->moving = 0;
    work->targetOffset.x = 0.0f;
    work->targetOffset.y = 0.0f;
    work->targetOffset.z = 0.0f;
    work->requestActive = 0;
    work->priority = 0;
    work->requestId = 0;
    work->unk2AA = 0;
    work->unk2AC = 0;
    work->unk2AE = 0;
    work->lookTo.x = 0.0f;
    work->lookTo.y = 50.0f;
    work->lookTo.z = 0.0f;
    work->lookFrom.x = 0.0f;
    work->unk07C = 40.0f;
    work->weight = 0.0f;
    work->lookFrom.y = 50.0f;
    work->lookFrom.z = 100.0f;
    work->turning = 0;
    work->turnHeld = 0;
    work->cooldown = 0;
    work->elapsed = 0;
    work->turnStart = 0.0f;
    work->turnTarget = 0.0f;
    work->turnDirection = 1.0f;
    FUN_002df5f8();
}
}
