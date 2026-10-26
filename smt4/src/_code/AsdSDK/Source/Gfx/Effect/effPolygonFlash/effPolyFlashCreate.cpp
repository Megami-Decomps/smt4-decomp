/* NON_MATCHING: retail also loads the allocation's __FILE__/__LINE__ pool constants (unused) and zeroes the quaternions through a shared zero register; the rest matches; retail 61 vs built 61 rows, 77 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

static __inline void quaternionSetIdentity(PolyVec4 *quaternion)
{
    PolyVec4 zero = {0, 0, 0, 0};
    *quaternion = zero;
    quaternion->w = 1.0f;
}

// Copies through pointers so armcc moves the 16 bytes with VFP vldmia/vstmia.
static __inline void polyVec4Copy(const PolyVec4 *source, PolyVec4 *destination)
{
    *destination = *source;
}

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void rt_memcpy(void *dst, const void *src, int size);

extern PolyFlashKind g_polyFlashKinds[];
extern PolyVec4 g_polyDefaultColor;
extern const char DAT_00410408[];

/* Creates a flash polygon object of the given kind: allocates the object and its work area,
 * copies the parameter block into the work area, builds the kind's state and starts it. */
PolyObject *effPolyFlashCreate(u32 kind, void *params, s32 arg)
{
    s32 workSize = g_polyFlashKinds[kind].workSize;
    asdDebugTrace(DAT_00410408, 3402);
    PolyObject *obj = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);

    obj->unk30 = -1;
    obj->work = obj->workData;
    obj->frame = 0;
    obj->kind = kind;
    polyVec4Copy(&g_polyDefaultColor, &obj->color);
    quaternionSetIdentity(&obj->rotation0);
    quaternionSetIdentity(&obj->rotation1);
    rt_memcpy(obj->work, params, workSize);
    obj->state = g_polyFlashKinds[kind].create(params, arg);
    g_polyFlashKinds[kind].start(obj);
    return obj;
}

} /* extern "C" */
