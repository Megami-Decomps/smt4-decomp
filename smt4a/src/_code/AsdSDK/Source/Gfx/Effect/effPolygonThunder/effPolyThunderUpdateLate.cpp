/* NON_MATCHING: register allocation only: retail moves obj into r0 before the late-update dispatch and loads the kind from it. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {


extern PolyThunderKind g_polyThunderKinds[];

/* Steps a thunder polygon object by the frame step, then runs the kind's late update once frame is positive. */
void effPolyThunderUpdateLate(PolyThunderObject *obj)
{
    g_polyThunderKinds[obj->kind].update(obj);
    obj->frame += effGetFrameStep();
    if (obj->frame > 0) {
        g_polyThunderKinds[obj->kind].lateUpdate(obj);
    }
}

} /* extern "C" */
