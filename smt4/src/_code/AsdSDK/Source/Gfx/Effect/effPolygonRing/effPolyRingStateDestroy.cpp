#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

extern PolyRingKind g_polyRingKinds[];
void FUN_002570a8(void *geometry);
void asdMemFree(void *block);

/* Frees a ring effect's state: its geometry, its polygon object (releasing the kind's state first)
 * and the buffer it drew from. */
void effPolyRingStateDestroy(PolyRingState *state)
{
    PolyObject *obj;

    FUN_002570a8(state->geom);
    obj = state->obj;
    g_polyRingKinds[obj->kind].release(obj->state);
    asdMemFree(obj);
    asdMemFree(state->values);
}

} /* extern "C" */
