#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {

extern PolyThunderKind g_polyThunderKinds[];

/* Runs the kind's late update once the object's frame is positive. */
static void runLateUpdate(PolyThunderObject *obj)
{
    if (obj->frame > 0) {
        g_polyThunderKinds[obj->kind].lateUpdate(obj);
    }
}

/* Steps a thunder polygon object by the frame step, then runs the kind's late update once frame is positive. */
void effPolyThunderUpdateLate(PolyThunderObject *obj)
{
    g_polyThunderKinds[obj->kind].update(obj);
    obj->frame += effGetFrameStep();
    runLateUpdate(obj);
}

} /* extern "C" */
