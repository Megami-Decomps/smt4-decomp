#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

s32 FUN_001acf08(void);

extern PolyWindKind g_polyWindKinds[];

/* Steps a wind polygon object by the frame step: runs its kind's update callback and advances the frame counter. */
void effPolyWindUpdate(PolyObject *obj)
{
    g_polyWindKinds[obj->kind].update(obj);
    obj->frame += FUN_001acf08();
}

} /* extern "C" */
