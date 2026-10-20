/* NON_MATCHING: register allocation only: retail moves obj into r0 before the late-update dispatch and loads the kind from it. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

s32 FUN_001acf08(void);

extern PolyFlashKind g_polyFlashKinds[];

/* Steps a flash polygon object by the frame step, then runs the kind's late update once frame is positive. */
void effPolyFlashUpdateLate(PolyObject *obj)
{
    g_polyFlashKinds[obj->kind].update(obj);
    obj->frame += FUN_001acf08();
    if (obj->frame > 0) {
        g_polyFlashKinds[obj->kind].lateUpdate(obj);
    }
}

} /* extern "C" */
