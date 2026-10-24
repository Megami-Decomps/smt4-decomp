#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

extern PolyWindKind g_polyWindKinds[];

/* Runs the kind's late update once the wind polygon object's frame is positive. */
void FUN_00207ebc(PolyObject *obj)
{
    if (obj->frame > 0) {
        g_polyWindKinds[obj->kind].lateUpdate(obj);
    }
}

} /* extern "C" */
