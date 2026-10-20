#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"

extern "C" {

extern PolyThunderKind g_polyThunderKinds[];

/* Restarts a thunder polygon object: runs its kind's start callback and resets the frame counter. */
void effPolyThunderStart(PolyThunderObject *obj)
{
    g_polyThunderKinds[obj->kind].start(obj);
    obj->frame = 0;
}

} /* extern "C" */
