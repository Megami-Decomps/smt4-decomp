#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"
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

extern PolyRingKind g_polyRingKinds[];
extern PolyVec4 g_polyDefaultColor;

/* Creates a ring polygon object of the given kind: allocates the object and its work area,
 * copies the parameter block into the work area, builds the kind's state and starts it. */
PolyObject *effPolyRingCreate(u32 kind, void *params)
{
    s32 workSize = g_polyRingKinds[kind].workSize;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonRing.cpp", 724);
    PolyObject *obj = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);

    obj->work = obj->workData;
    obj->frame = 0;
    obj->kind = kind;
    obj->unk30 = -1;
    obj->color = g_polyDefaultColor;
    quaternionSetIdentity(&obj->rotation0);
    quaternionSetIdentity(&obj->rotation1);
    rt_memcpy(obj->work, params, workSize);
    obj->state = g_polyRingKinds[kind].create(params);
    g_polyRingKinds[kind].start(obj);
    return obj;
}

} /* extern "C" */
