#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"
#include "gfx/ControllerModel.h"

extern "C" {

void mapGimicApplyValue(s32 value)
{
    MapGimicStageActorA *entry = &g_mapGimic->stageActor;
    if (entry->active != 0) {
        modelPlayClip(entry->obj->body, value, 2, 0.0f, 0.0f);
    }
}

} /* extern "C" */
