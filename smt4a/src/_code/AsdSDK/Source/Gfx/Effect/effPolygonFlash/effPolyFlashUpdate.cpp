#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

s32 effGetFrameStep(void);

extern PolyFlashKind g_polyFlashKinds[];

/* Steps a flash polygon object: runs its kind's update callback and advances the frame counter by the frame step. */
void effPolyFlashUpdate(PolyObject *obj)
{
    g_polyFlashKinds[obj->kind].update(obj);
    obj->frame += effGetFrameStep();
}

} /* extern "C" */
