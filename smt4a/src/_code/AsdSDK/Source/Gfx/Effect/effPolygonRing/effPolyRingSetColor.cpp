/* NON_MATCHING: retail loads the colour global's address into r1 before the push and the colour before the geometry
 * pointer; the build loads the address after the state and swaps the two registers. A `PolyGeom *geom = state->geom;`
 * local stored through once (as effPolyRingDraw declares it) makes this unit IDENTICAL in both games, but it is a
 * single-use temporary before one store, so it is not kept. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

extern PolyRingKind g_polyRingKinds[];
extern u32 DAT_005c1130;

/* Sets the packed color of a ring effect's geometry and restarts its polygon object. */
void effPolyRingSetColor(PolyObject *effect)
{
    PolyRingState *state = (PolyRingState *)effect->state;
    PolyObject *obj;

    state->geom->color = DAT_005c1130;
    obj = state->obj;
    g_polyRingKinds[obj->kind].start(obj);
    obj->frame = 0;
}

} /* extern "C" */
