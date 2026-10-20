#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"

extern "C" {

s32 effGetFrameStep(void);

extern PolyThunderKind g_polyThunderKinds[];

/* Steps a thunder polygon object by the frame step: runs its kind's update callback and advances the frame counter. */
void effPolyThunderUpdate(PolyThunderObject *obj)
{
    g_polyThunderKinds[obj->kind].update(obj);
    obj->frame += effGetFrameStep();
}

} /* extern "C" */
