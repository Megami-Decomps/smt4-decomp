/* NON_MATCHING: instructions now match; only the literal pool order differs (armcc puts the reused 100/0/1/50 floats before the global address, retail keeps first-use order). */
#include "map/LmapViewGlobals.h"

extern "C" {
void FUN_00303710(void);
void FUN_00352a14(void);
extern Obj557c48 *g_handleRegistry;

// Reset the map camera's defaults, transitions, and tracked resource handle.
void FUN_002442ac(void)
{
    LmapViewA *camera = g_lmapViewHolder.view;
    camera->mode = 0;
    camera->phase = 0;
    camera->unk008 = 0;
    camera->contextValue = 0;
    camera->contextOverride = -1;
    camera->targetHeight[0] = 100.0f;
    camera->eyeHeight[0] = 220.0f;
    camera->lateralDistance[0] = 0.0f;
    camera->rearDistance[0] = 700.0f;
    camera->fieldOfView[0] = 42.0f;
    camera->contextMode = 0;
    camera->heightBias = 0.0f;
    camera->unk014 = 0;
    camera->scale = 1.0f;
    camera->unk210 = 0.0f;
    camera->unk214 = 0.0f;
    camera->raised = 0.0f;
    camera->unk21C = 0.0f;
    camera->unk30C = 0.0f;
    camera->unk310 = 0.0f;
    camera->moving = 0;
    camera->unk2B8 = 0;
    camera->unk304 = 0;
    camera->targetOffset.x = 0.0f;
    camera->targetOffset.y = 0.0f;
    camera->targetOffset.z = 0.0f;
    camera->requestActive = 0;
    camera->priority = 0;
    camera->requestId = 0;
    camera->unk2B2 = 0;
    camera->unk2B4 = 0;
    camera->unk2B6 = 0;
    camera->lookTo.x = 0.0f;
    camera->lookTo.y = 50.0f;
    camera->lookTo.z = 0.0f;
    camera->lookFrom.x = 0.0f;
    camera->unk080 = 40.0f;
    camera->lookFrom.y = 50.0f;
    camera->lookFrom.z = 100.0f;
    camera->height = 0.0f;
    camera->flagB4 = 0;
    camera->flagB5 = 0;
    camera->timer = 0;
    camera->step = 0;
    camera->axis.x = 0.0f;
    camera->axis.y = 0.0f;
    camera->axis.z = 1.0f;
    FUN_00352a14();
    camera = g_lmapViewHolder.view;
    camera->clip = NULL;
    camera->modelManager = g_handleRegistry;
    FUN_00303710();
}
}
