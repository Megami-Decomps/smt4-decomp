#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

extern PolyWindKind g_polyWindKinds[];

/* Restarts a wind polygon object: runs its kind's start callback and resets the frame counter. */
void effPolyWindStart(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].start(obj);
    obj->frame = 0;
}

} /* extern "C" */
