/* NON_MATCHING: color global is restored; compiler schedules its load after the push and swaps r1/r2. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

extern PolyRingKind g_polyRingKinds[];

/* Sets the packed color of a ring effect's geometry and restarts its polygon object. */
extern u32 DAT_00472560;
void effPolyRingSetColor(PolyObject *effect)
{
    PolyRingState *state = (PolyRingState *)effect->state;
    PolyObject *obj;

    state->geom->color = DAT_00472560;
    obj = state->obj;
    g_polyRingKinds[obj->kind].start(obj);
    obj->frame = 0;
}

} /* extern "C" */
