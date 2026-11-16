#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

extern PolyWindKind g_polyWindKinds[];

/* Runs the kind's late update once the object's frame is positive. */
static void runLateUpdate(PolyObject *obj)
{
    if (obj->frame > 0) {
        g_polyWindKinds[obj->kind].lateUpdate(obj);
    }
}

/* Steps a wind polygon object one frame, then runs the kind's late update once frame is positive. */
void effPolyWindUpdateLate(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].update(obj);
    obj->frame++;
    runLateUpdate(obj);
}

} /* extern "C" */
