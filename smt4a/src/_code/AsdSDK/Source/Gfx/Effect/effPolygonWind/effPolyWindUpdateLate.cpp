/* NON_MATCHING: register allocation only: retail moves obj into r0 before the late-update dispatch and loads the kind from it. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

s32 FUN_001acf08(void);

extern PolyWindKind g_polyWindKinds[];

/* Steps a wind polygon object by the frame step, then runs the kind's late update once frame is positive. */
void effPolyWindUpdateLate(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].update(obj);
    obj->frame += FUN_001acf08();
    if (obj->frame > 0) {
        g_polyWindKinds[obj->kind].lateUpdate(obj);
    }
}

} /* extern "C" */
