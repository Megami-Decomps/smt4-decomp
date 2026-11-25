#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

extern u32 DAT_005c1130;

/* Resets the packed color of a kind-1 ring geometry. */
void FUN_00392034(PolyObject *obj)
{
    polyGeomSetColor(*(PolyGeom **)obj->state, DAT_005c1130);
}

} /* extern "C" */
