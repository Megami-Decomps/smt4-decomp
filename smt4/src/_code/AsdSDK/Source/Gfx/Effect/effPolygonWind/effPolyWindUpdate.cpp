#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

extern PolyWindKind g_polyWindKinds[];

/* Steps a wind polygon object one frame: runs its kind's update callback and advances the frame counter. */
void effPolyWindUpdate(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].update(obj);
    obj->frame++;
}

} /* extern "C" */
