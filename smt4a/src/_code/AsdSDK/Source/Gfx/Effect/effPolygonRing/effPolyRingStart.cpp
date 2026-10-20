#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

extern PolyRingKind g_polyRingKinds[];

/* Restarts a ring polygon object: runs its kind's start callback and resets the frame counter. */
void effPolyRingStart(PolyObject *obj)
{
    g_polyRingKinds[obj->kind].start(obj);
    obj->frame = 0;
}

} /* extern "C" */
