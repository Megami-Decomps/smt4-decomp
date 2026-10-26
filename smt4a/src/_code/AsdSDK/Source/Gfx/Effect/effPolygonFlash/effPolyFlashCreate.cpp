/* NON_MATCHING: the debug trace and identity quaternions now match retail; retail copies the default color with an ldm of three words plus one ldr/str (integer) interleaved with the quaternion stores, here word-by-word. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

static void quaternionSetIdentity(PolyVec4 *quaternion)
{
    memset(quaternion, 0, sizeof(*quaternion));
    quaternion->w = 1.0f;
}

extern "C" {

extern const char DAT_00544ba8[]; /* effect source file name (__FILE__) */
void *memAlloc(int, int, int, int size, int align, int);
void rt_memcpy(void *dst, const void *src, int size);

extern PolyFlashKind g_polyFlashKinds[];
extern PolyVec4 g_polyDefaultColor;

/* Creates a flash polygon object of the given kind: allocates the object and its work area,
 * copies the parameter block into the work area, builds the kind's state and starts it. */
PolyObject *effPolyFlashCreate(u32 kind, void *params, s32 arg)
{
    s32 workSize = g_polyFlashKinds[kind].workSize;
    asdDebugTrace(DAT_00544ba8, 3409);
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
    rt_memcpy(obj->work, params, workSize);
    obj->state = g_polyFlashKinds[kind].create(params, arg);
    g_polyFlashKinds[kind].start(obj);
    return obj;
}

} /* extern "C" */
