/* NON_MATCHING: written like effPolyRingCreate; retail moves the resolved resource from r5 to fp after the header
 * lookup and keeps the kind in r5, so the saved registers are numbered differently and the object's field stores schedule
 * differently. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemCopy.h"

static __inline void quaternionSetIdentity(PolyVec4 *quaternion)
{
    PolyVec4 zero = {0, 0, 0, 0};
    *quaternion = zero;
    quaternion->w = 1.0f;
}

extern "C" {
u32 *resourceResolveDataPointer(PolyWindDesc *desc);
void *resourceResolveHeaderPointer(PolyWindDesc *desc);
extern PolyWindKind g_polyWindKinds[];
extern PolyVec4 g_polyDefaultColor;
extern const char DAT_00544cd8[];

/* Create and start the descriptor's wind kind, retaining its resolved resource. */
PolyObject *effPolyWindCreateFromDesc(PolyWindDesc *desc)
{
    u32 *resource = resourceResolveDataPointer(desc);
    /* Native and indexed resources have different ownership at creation time. */
    switch (desc->type) {
    case 1:
        break;
    case 4:
        resource = NULL;
        break;
    }
    void *params = resourceResolveHeaderPointer(desc);
    u32 kind = desc->kind;
    s32 workSize = g_polyWindKinds[kind].workSize;
    asdDebugTrace(DAT_00544cd8, 1517);
    PolyObject *object = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);
    object->unk30 = -1;
    object->work = object->workData;
    object->frame = 0;
    object->kind = kind;
    object->color = g_polyDefaultColor;
    quaternionSetIdentity(&object->rotation0);
    quaternionSetIdentity(&object->rotation1);
    rt_memcpy(object->work, params, workSize);
    object->state = g_polyWindKinds[kind].create(params, (s32)resource);
    g_polyWindKinds[kind].start(object);
    return object;
}
}
