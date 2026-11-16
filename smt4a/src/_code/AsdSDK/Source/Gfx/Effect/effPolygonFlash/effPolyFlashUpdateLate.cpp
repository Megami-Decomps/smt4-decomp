#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {

extern PolyFlashKind g_polyFlashKinds[];

/* Runs the kind's late update once the object's frame is positive. */
static void runLateUpdate(PolyObject *obj)
{
    if (obj->frame > 0) {
        g_polyFlashKinds[obj->kind].lateUpdate(obj);
    }
}

/* Steps a flash polygon object by the frame step, then runs the kind's late update once frame is positive. */
void effPolyFlashUpdateLate(PolyObject *obj)
{
    g_polyFlashKinds[obj->kind].update(obj);
    obj->frame += effGetFrameStep();
    runLateUpdate(obj);
}

} /* extern "C" */
