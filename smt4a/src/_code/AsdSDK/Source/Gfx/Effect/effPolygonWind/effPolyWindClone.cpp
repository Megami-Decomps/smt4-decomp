/* NON_MATCHING: the debug trace and identity quaternions now match retail; retail copies the default color with an ldm of three words plus one ldr/str (integer) interleaved with the quaternion stores, here word-by-word. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

static void quaternionSetIdentity(PolyVec4 *quaternion)
{
    memset(quaternion, 0, sizeof(*quaternion));
    quaternion->w = 1.0f;
}

extern "C" {

extern const char DAT_00544cd8[]; /* effect source file name (__FILE__) */
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
    asdDebugTrace(DAT_00544cd8, 1517);
    PolyObject *obj = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);

    obj->unk30 = -1;
    obj->work = obj->workData;
    obj->frame = 0;
    obj->kind = kind;
    obj->color.x = g_polyDefaultColor.x;
    obj->color.y = g_polyDefaultColor.y;
    obj->color.z = g_polyDefaultColor.z;
    obj->color.w = g_polyDefaultColor.w;
    quaternionSetIdentity(&obj->rotation0);
    quaternionSetIdentity(&obj->rotation1);
    rt_memcpy(obj->work, srcWork, workSize);
    obj->state = g_polyWindKinds[src->kind].clone(src);
    g_polyWindKinds[src->kind].start(obj);
    return obj;
}

} /* extern "C" */
