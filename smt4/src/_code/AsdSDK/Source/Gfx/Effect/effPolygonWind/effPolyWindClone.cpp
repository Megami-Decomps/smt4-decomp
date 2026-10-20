/* NON_MATCHING: retail also loads the allocation's __FILE__/__LINE__ pool constants (unused) and zeroes the quaternions through a shared zero register; the rest matches; retail 67 vs built 65 rows, 61 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void rt_memcpy(void *dst, const void *src, int size);

extern PolyWindKind g_polyWindKinds[];
extern PolyVec4 g_polyDefaultColor;

/* Copies a wind polygon object: a fresh object with the source's work area, the kind's cloned
 * state, started. */
PolyObject *effPolyWindClone(PolyObject *src)
{
    u8 *srcWork = src->work;
    u16 kind = src->kind;
    s32 workSize = g_polyWindKinds[kind].workSize;
    PolyObject *obj = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);

    obj->unk30 = -1;
    obj->work = obj->workData;
    obj->frame = 0;
    obj->kind = kind;
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
    rt_memcpy(obj->work, srcWork, workSize);
    obj->state = g_polyWindKinds[src->kind].clone(src);
    g_polyWindKinds[src->kind].start(obj);
    return obj;
}

} /* extern "C" */
