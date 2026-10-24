#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {
extern PolyWindKind g_polyWindKinds[];

/* Runs the kind's late-update callback while the effect has frames left. */
void effPolyWindLateUpdateKind(PolyObject *obj)
{
    if (obj->frame > 0) {
        g_polyWindKinds[obj->kind].lateUpdate(obj);
    }
}
}
