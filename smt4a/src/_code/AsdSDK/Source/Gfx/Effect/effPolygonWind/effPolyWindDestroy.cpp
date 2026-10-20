#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

void asdMemFree(void *block);

extern PolyWindKind g_polyWindKinds[];

/* Destroys a wind polygon object: releases the kind's state, then frees the object. */
void effPolyWindDestroy(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].release(obj);
    asdMemFree(obj);
}

} /* extern "C" */
