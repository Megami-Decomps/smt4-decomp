#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

s32 effGetFrameStep(void);

extern PolyWindKind g_polyWindKinds[];

/* Steps a wind polygon object by the frame step: runs its kind's update callback and advances the frame counter. */
void effPolyWindUpdate(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].update(obj);
    obj->frame += effGetFrameStep();
}

} /* extern "C" */
