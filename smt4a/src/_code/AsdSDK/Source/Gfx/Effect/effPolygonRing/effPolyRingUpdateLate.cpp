#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {

extern PolyRingKind g_polyRingKinds[];

/* Runs the kind's late update once the object's frame is positive. */
static void runLateUpdate(PolyObject *obj)
{
    if (obj->frame > 0) {
        g_polyRingKinds[obj->kind].lateUpdate(obj);
    }
}

/* Steps a ring polygon object by the frame step, then runs the kind's late update once frame is positive. */
void effPolyRingUpdateLate(PolyObject *obj)
{
    g_polyRingKinds[obj->kind].update(obj);
    obj->frame += effGetFrameStep();
    runLateUpdate(obj);
}

} /* extern "C" */
