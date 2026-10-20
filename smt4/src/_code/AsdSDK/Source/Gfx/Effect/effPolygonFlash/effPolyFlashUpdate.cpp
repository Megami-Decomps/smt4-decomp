#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

extern PolyFlashKind g_polyFlashKinds[];

/* Steps a flash polygon object one frame: runs its kind's update callback and advances the frame counter. */
void effPolyFlashUpdate(PolyObject *obj)
{
    g_polyFlashKinds[obj->kind].update(obj);
    obj->frame++;
}

} /* extern "C" */
