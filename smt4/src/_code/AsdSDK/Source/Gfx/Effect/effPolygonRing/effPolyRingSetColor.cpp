#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

extern PolyRingKind g_polyRingKinds[];
extern u32 DAT_00472560;

/* Sets the packed color of a ring effect's geometry and restarts its polygon object. */
void effPolyRingSetColor(PolyObject *effect)
{
    PolyRingState *state = (PolyRingState *)effect->state;
    PolyObject *obj;

    polyGeomSetColor(state->geom, DAT_00472560);
    obj = state->obj;
    g_polyRingKinds[obj->kind].start(obj);
    obj->frame = 0;
}

} /* extern "C" */
