#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" PolyRingKind g_polyRingKinds[];

/* Runs the kind's late update once the effect has started. */
extern "C" void effPolyRingLateUpdateKind(PolyObject *obj)
{
    if (obj->frame > 0) {
        g_polyRingKinds[obj->kind].lateUpdate(obj);
    }
}
