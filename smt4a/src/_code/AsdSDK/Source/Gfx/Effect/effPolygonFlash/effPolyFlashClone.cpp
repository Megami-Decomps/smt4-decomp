/* NON_MATCHING: retail also loads the allocation's __FILE__/__LINE__ pool constants (unused) and zeroes the quaternions through a shared zero register; the rest matches; retail 77 vs built 74 rows, 90 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyObject *effPolyFlashCreate(u32 kind, void *params, s32 arg);
void rt_memcpy(void *dst, const void *src, int size);

extern PolyFlashKind g_polyFlashKinds[];
extern PolyVec4 g_polyDefaultColor;

/* Copies a flash polygon object: kinds with a clone callback get a fresh object with the source's
 * work area and cloned state, the others are rebuilt from the source's work area as parameters. */
PolyObject *effPolyFlashClone(PolyObject *src)
{
    u16 kind = src->kind;
    u8 *srcWork = src->work;
    PolyObject *obj;

    if (g_polyFlashKinds[kind].clone != NULL) {
        s32 workSize = g_polyFlashKinds[kind].workSize;

        obj = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);
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
        obj->state = g_polyFlashKinds[src->kind].clone(src);
        g_polyFlashKinds[obj->kind].start(obj);
    } else {
        obj = effPolyFlashCreate(kind, srcWork, 0);
    }
    return obj;
}

} /* extern "C" */
