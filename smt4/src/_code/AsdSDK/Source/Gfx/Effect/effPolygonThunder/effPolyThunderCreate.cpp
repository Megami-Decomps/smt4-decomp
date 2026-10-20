/* NON_MATCHING: retail also loads the allocation's __FILE__/__LINE__ pool constants (unused) and zeroes the quaternions through a shared zero register; the rest matches; retail 58 vs built 53 rows, 52 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunder.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void rt_memcpy(void *dst, const void *src, int size);

extern PolyThunderKind g_polyThunderKinds[];

/* Creates a thunder polygon object of the given kind: allocates the object and its work area,
 * copies the parameter block into it, builds the kind's state and starts it. */
PolyThunderObject *effPolyThunderCreate(u32 kind, void *params)
{
    s32 workSize = g_polyThunderKinds[kind].workSize;
    PolyThunderObject *obj = (PolyThunderObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x40, 0x10, 1);

    obj->unk24 = -1;
    obj->work = obj->workData;
    obj->frame = 0;
    obj->kind = kind;
    obj->scale = 1.0f;
    obj->rotation0.x = 0;
    obj->rotation0.y = 0;
    obj->rotation0.z = 0;
    obj->rotation0.w = 1.0f;
    obj->rotation1.x = 0;
    obj->rotation1.y = 0;
    obj->rotation1.z = 0;
    obj->rotation1.w = 1.0f;
    rt_memcpy(obj->work, params, workSize);
    obj->state = g_polyThunderKinds[kind].create(params);
    g_polyThunderKinds[kind].start(obj);
    return obj;
}

} /* extern "C" */
