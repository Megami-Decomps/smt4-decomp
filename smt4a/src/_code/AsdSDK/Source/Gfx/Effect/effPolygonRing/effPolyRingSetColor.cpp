/* NON_MATCHING: register choice differs (r1/r2 swapped) and retail carries one extra literal-pool word. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

extern PolyRingKind g_polyRingKinds[];

/* Sets the packed color of a ring effect's geometry and restarts its polygon object. */
void effPolyRingSetColor(PolyObject *effect, u32 *color)
{
    PolyRingState *state = (PolyRingState *)effect->state;
    PolyObject *obj;

    state->geom->color = *color;
    obj = state->obj;
    g_polyRingKinds[obj->kind].start(obj);
    obj->frame = 0;
}

} /* extern "C" */
