#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

extern PolyFlashKind g_polyFlashKinds[];

/* Restarts a flash polygon object: runs its kind's start callback and resets the frame counter. */
void effPolyFlashStart(PolyObject *obj)
{
    g_polyFlashKinds[obj->kind].start(obj);
    obj->frame = 0;
}

} /* extern "C" */
