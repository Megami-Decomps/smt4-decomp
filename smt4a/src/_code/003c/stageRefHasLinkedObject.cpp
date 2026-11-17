#include "shard/Shard003C.h"
#include "map/MapGimicGlobal.h"
#include "Model/MoriModelContent.h"

extern "C" {

extern s32 animationChannelsAllFinished(Obj557b18 *body);

/* True when the stage's sub-record is active and animationChannelsAllFinished accepts its linked object. */
u32 stageRefHasLinkedObject(void)
{
    MapGimicStageActorA *sub = &g_mapGimic->stageActor;

    if (sub->active == 0 || animationChannelsAllFinished(sub->obj->body) == 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
