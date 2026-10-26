/* NON_MATCHING: see fdiff; trace/color/quaternion now match retail shape, register scheduling differs. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

static __inline void quaternionSetIdentity(PolyVec4 *quaternion)
{
    PolyVec4 zero = {0, 0, 0, 0};
    *quaternion = zero;
    quaternion->w = 1.0f;
}

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void rt_memcpy(void *dst, const void *src, int size);

extern PolyWindKind g_polyWindKinds[];
extern PolyVec4 g_polyDefaultColor;
extern const char DAT_00410604[];

/* Copies a wind polygon object: a fresh object with the source's work area, the kind's cloned
 * state, started. */
PolyObject *effPolyWindClone(PolyObject *src)
{
    u8 *srcWork = src->work;
    u16 kind = src->kind;
    s32 workSize = g_polyWindKinds[kind].workSize;
    asdDebugTrace(DAT_00410604, 1506);
    PolyObject *obj = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);

    obj->unk30 = -1;
    obj->work = obj->workData;
    obj->frame = 0;
    obj->kind = kind;
    obj->color = g_polyDefaultColor;
    quaternionSetIdentity(&obj->rotation0);
    quaternionSetIdentity(&obj->rotation1);
    rt_memcpy(obj->work, srcWork, workSize);
    obj->state = g_polyWindKinds[src->kind].clone(src);
    g_polyWindKinds[src->kind].start(obj);
    return obj;
}

} /* extern "C" */
