#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

s32 FUN_001acf08(void);

extern PolyRingKind g_polyRingKinds[];

/* Steps a ring polygon object by the frame step: runs its kind's update callback and advances the frame counter. */
void effPolyRingUpdate(PolyObject *obj)
{
    g_polyRingKinds[obj->kind].update(obj);
    obj->frame += FUN_001acf08();
}

} /* extern "C" */
