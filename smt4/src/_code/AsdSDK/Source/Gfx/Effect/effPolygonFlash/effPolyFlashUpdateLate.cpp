/* NON_MATCHING: register allocation only: retail moves obj into r0 before the late-update dispatch and loads the kind from it. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

extern PolyFlashKind g_polyFlashKinds[];

/* Steps a flash polygon object one frame, then runs the kind's late update once frame is positive. */
void effPolyFlashUpdateLate(PolyObject *obj)
{
    g_polyFlashKinds[obj->kind].update(obj);
    obj->frame++;
    if (obj->frame > 0) {
        g_polyFlashKinds[obj->kind].lateUpdate(obj);
    }
}

} /* extern "C" */
