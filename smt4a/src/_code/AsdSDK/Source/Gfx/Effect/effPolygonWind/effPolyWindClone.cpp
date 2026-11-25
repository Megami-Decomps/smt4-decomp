/* NON_MATCHING: retail interleaves the default color's core-register copy with the quaternion stores and keeps the work pointer in r0; this build copies color with VFP. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

static __inline void quaternionSetIdentity(PolyVec4 *quaternion)
{
    PolyVec4 zero = {0, 0, 0, 0};
    *quaternion = zero;
    quaternion->w = 1.0f;
}

extern "C" {

extern const char DAT_00544cd8[]; /* effect source file name (__FILE__) */
void __aeabi_memcpy(void *dst, const void *src, int size);

extern PolyWindKind g_polyWindKinds[];
extern PolyVec4 g_polyDefaultColor;

/* Copies a wind polygon object: a fresh object with the source's work area, the kind's cloned
 * state, started. */
PolyObject *effPolyWindClone(PolyObject *src)
{
    u8 *srcWork = src->work;
    u16 kind = src->kind;
    s32 workSize = g_polyWindKinds[kind].workSize;
    asdDebugTrace(DAT_00544cd8, 1517);
    PolyObject *obj = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);

    obj->unk30 = -1;
    obj->work = obj->workData;
    obj->frame = 0;
    obj->kind = kind;
    obj->color = g_polyDefaultColor;
    quaternionSetIdentity(&obj->rotation0);
    quaternionSetIdentity(&obj->rotation1);
    __aeabi_memcpy(obj->work, srcWork, workSize);
    obj->state = g_polyWindKinds[src->kind].clone(src);
    g_polyWindKinds[src->kind].start(obj);
    return obj;
}

} /* extern "C" */
