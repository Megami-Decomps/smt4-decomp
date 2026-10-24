#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"

extern "C" {

extern PolyThunderKind g_polyThunderKinds[];

/* Runs the kind's late update once the thunder polygon object's frame is positive. */
void FUN_002d18ec(PolyThunderObject *obj)
{
    if (obj->frame > 0) {
        g_polyThunderKinds[obj->kind].lateUpdate(obj);
    }
}

} /* extern "C" */
