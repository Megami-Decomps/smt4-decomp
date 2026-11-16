#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

extern PolyFlashKind g_polyFlashKinds[];

/* Runs the kind's late update once the object's frame is positive. */
static void runLateUpdate(PolyObject *obj)
{
    if (obj->frame > 0) {
        g_polyFlashKinds[obj->kind].lateUpdate(obj);
    }
}

/* Steps a flash polygon object one frame, then runs the kind's late update once frame is positive. */
void effPolyFlashUpdateLate(PolyObject *obj)
{
    g_polyFlashKinds[obj->kind].update(obj);
    obj->frame++;
    runLateUpdate(obj);
}

} /* extern "C" */
