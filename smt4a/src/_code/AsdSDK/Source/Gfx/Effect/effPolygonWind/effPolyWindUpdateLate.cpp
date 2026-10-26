/* NON_MATCHING: register allocation only: retail moves obj into r0 before the late-update dispatch and loads the kind from it. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {


extern PolyWindKind g_polyWindKinds[];

/* Steps a wind polygon object by the frame step, then runs the kind's late update once frame is positive. */
void effPolyWindUpdateLate(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].update(obj);
    obj->frame += effGetFrameStep();
    if (obj->frame > 0) {
        g_polyWindKinds[obj->kind].lateUpdate(obj);
    }
}

} /* extern "C" */
