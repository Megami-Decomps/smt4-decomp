#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

extern PolyRingKind g_polyRingKinds[];
void asdMemFree(void *block);

/* Destroys a ring polygon object: releases the kind's state, then frees the object. */
void effPolyRingDestroy(PolyObject *obj)
{
    g_polyRingKinds[obj->kind].release(obj->state);
    asdMemFree(obj);
}

} /* extern "C" */
