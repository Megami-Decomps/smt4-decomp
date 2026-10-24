#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {
extern PolyFlashKind g_polyFlashKinds[];

/* Runs the kind's late-update callback while the effect has frames left. */
void effPolyFlashLateUpdateKind(PolyObject *obj)
{
    if (obj->frame > 0) {
        g_polyFlashKinds[obj->kind].lateUpdate(obj);
    }
}
}
