/* NON_MATCHING: frame sum uses r0 rather than r1, and the late-dispatch object setup follows the kind load. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {


extern PolyThunderKind g_polyThunderKinds[];

static void dispatchThunderLateUpdate(PolyThunderObject *obj)
{
    g_polyThunderKinds[obj->kind].lateUpdate(obj);
}

/* Steps a thunder polygon object by the frame step, then runs the kind's late update once frame is positive. */
void effPolyThunderUpdateLate(PolyThunderObject *obj)
{
    g_polyThunderKinds[obj->kind].update(obj);
    obj->frame += effGetFrameCounter();
    if (obj->frame > 0) {
        dispatchThunderLateUpdate(obj);
    }
}

} /* extern "C" */
