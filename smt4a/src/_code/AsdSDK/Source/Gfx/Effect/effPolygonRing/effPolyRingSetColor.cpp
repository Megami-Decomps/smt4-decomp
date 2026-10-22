/* NON_MATCHING: retail preloads the color address into r1 before the push; built schedules it later and swaps color/geometry registers. */
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
