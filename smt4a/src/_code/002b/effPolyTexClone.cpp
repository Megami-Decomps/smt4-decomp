#include "AsdSDK/Source/Gfx/Effect/effPolygonTex.h"

extern "C" {
void *handleBlockRefCreate(void *resource);
void handleBlockUnref(void *resource);
void handleBlockRefDrop(void *resource);
void *handleRefIncrement(void *resource);
PolyGeom *FUN_00271d28(PolyGeom *geometry);
PolyTexObject *effPolyTexCreate(u32 flags);
void rt_memcpy_w(void *destination, const void *source, u32 size);

/* Clones polygon geometry and parameters while retaining its referenced texture resource. */
PolyTexObject *effPolyTexClone(const PolyTexObject *source)
{
    PolyTexObject *clone = effPolyTexCreate(0);
    clone->geom = FUN_00271d28(source->geom);
    rt_memcpy_w(clone->params, source->params, sizeof(clone->params));
    if (source->resource2 != NULL) {
        if (clone->resource2 != NULL) {
            handleBlockRefDrop(clone->resource2);
        }
        clone->resource2 = handleBlockRefCreate(source->resource2);
    } else if (source->resource7 != NULL) {
        if (clone->resource7 != NULL) {
            handleBlockUnref(clone->resource7);
        }
        clone->resource7 = handleRefIncrement(source->resource7);
    }
    return clone;
}
}
