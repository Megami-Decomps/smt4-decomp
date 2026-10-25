/* NON_MATCHING: incremented frame uses r0 rather than r1, and object setup follows the late-kind load. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

extern PolyWindKind g_polyWindKinds[];

static void dispatchWindLateUpdate(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].lateUpdate(obj);
}

/* Steps a wind polygon object one frame, then runs the kind's late update once frame is positive. */
void effPolyWindUpdateLate(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].update(obj);
    obj->frame++;
    if (obj->frame > 0) {
        dispatchWindLateUpdate(obj);
    }
}

} /* extern "C" */
