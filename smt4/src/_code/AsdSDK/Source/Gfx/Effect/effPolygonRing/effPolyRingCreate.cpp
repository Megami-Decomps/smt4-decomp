/* NON_MATCHING: retail also loads the allocation's __FILE__/__LINE__ pool constants (unused) and zeroes the quaternions through a shared zero register; the rest matches; retail 59 vs built 59 rows, 61 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void rt_memcpy(void *dst, const void *src, int size);

extern PolyRingKind g_polyRingKinds[];
extern PolyVec4 g_polyDefaultColor;

/* Creates a ring polygon object of the given kind: allocates the object and its work area,
 * copies the parameter block into the work area, builds the kind's state and starts it. */
PolyObject *effPolyRingCreate(u32 kind, void *params)
{
    s32 workSize = g_polyRingKinds[kind].workSize;
    PolyObject *obj = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);

    obj->work = obj->workData;
    obj->frame = 0;
    obj->kind = kind;
    obj->unk30 = -1;
    obj->color.x = g_polyDefaultColor.x;
    obj->color.y = g_polyDefaultColor.y;
    obj->color.z = g_polyDefaultColor.z;
    obj->color.w = g_polyDefaultColor.w;
    obj->rotation0.x = 0;
    obj->rotation0.y = 0;
    obj->rotation0.z = 0;
    obj->rotation0.w = 1.0f;
    obj->rotation1.x = 0;
    obj->rotation1.y = 0;
    obj->rotation1.z = 0;
    obj->rotation1.w = 1.0f;
    rt_memcpy(obj->work, params, workSize);
    obj->state = g_polyRingKinds[kind].create(params);
    g_polyRingKinds[kind].start(obj);
    return obj;
}

} /* extern "C" */
