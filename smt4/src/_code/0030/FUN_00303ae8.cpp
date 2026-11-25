#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

extern u32 DAT_00472560;

/* Resets the packed color of a kind-0 ring geometry. */
void FUN_00303ae8(PolyObject *obj)
{
    polyGeomSetColor(*(PolyGeom **)obj->state, DAT_00472560);
}

} /* extern "C" */
