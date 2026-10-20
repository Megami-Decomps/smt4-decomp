#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

extern PolyFlashKind g_polyFlashKinds[];
void asdMemFree(void *block);

/* Destroys a flash polygon object: releases the kind's state, then frees the object. */
void effPolyFlashDestroy(PolyObject *obj)
{
    g_polyFlashKinds[obj->kind].release(obj->state);
    asdMemFree(obj);
}

} /* extern "C" */
