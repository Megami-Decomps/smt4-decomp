/* NON_MATCHING: register allocation only: retail moves obj into r0 before the late-update dispatch and loads the kind from it. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

s32 effGetFrameCounter(void);

extern PolyRingKind g_polyRingKinds[];

/* Steps a ring polygon object by the frame step, then runs the kind's late update once frame is positive. */
void effPolyRingUpdateLate(PolyObject *obj)
{
    g_polyRingKinds[obj->kind].update(obj);
    obj->frame += effGetFrameCounter();
    if (obj->frame > 0) {
        g_polyRingKinds[obj->kind].lateUpdate(obj);
    }
}

} /* extern "C" */
