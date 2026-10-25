#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {


extern PolyRingKind g_polyRingKinds[];

/* Steps a ring polygon object by the frame step: runs its kind's update callback and advances the frame counter. */
void effPolyRingUpdate(PolyObject *obj)
{
    g_polyRingKinds[obj->kind].update(obj);
    obj->frame += effGetFrameCounter();
}

} /* extern "C" */
