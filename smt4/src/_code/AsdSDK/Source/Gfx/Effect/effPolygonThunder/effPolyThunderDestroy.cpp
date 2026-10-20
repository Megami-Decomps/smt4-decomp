#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"

extern "C" {

void asdMemFree(void *block);

extern PolyThunderKind g_polyThunderKinds[];

/* Destroys a thunder polygon object: releases the kind's state, then frees the object. */
void effPolyThunderDestroy(PolyThunderObject *obj)
{
    g_polyThunderKinds[obj->kind].release(obj);
    asdMemFree(obj);
}

} /* extern "C" */
