/* NON_MATCHING: color copy and quaternion initialization differ from inlined retail constructors; descriptor type test differs. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32 heap, u32 type, u32 options, u32 size, u32 alignment, u32 clear);
void rt_memcpy(void *destination, const void *source, u32 size);
s32 resourceResolveDataPointer(const PolyWindDesc *description);
void *resourceResolveHeaderPointer(const PolyWindDesc *description);
extern PolyWindKind g_polyWindKinds[];
extern PolyVec4 g_polyDefaultColor;
extern const char DAT_00544cd8[];

// Allocate the selected wind effect, copy its parameters, then create and start its state.
PolyObject *effPolyWindCreateFromDesc(PolyWindDesc *description)
{
    s32 flags = resourceResolveDataPointer(description);
    if (description->type == 4)
        flags = 0;
    void *parameters = resourceResolveHeaderPointer(description);
    u32 kind = description->kind;
    s32 workSize = g_polyWindKinds[kind].workSize;
    asdDebugTrace(DAT_00544cd8, 1517);
    PolyObject *object = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);
    object->unk30 = -1;
    object->work = object->workData;
    object->frame = 0;
    object->kind = kind;
    object->color = g_polyDefaultColor;
    object->rotation0.x = 0;
    object->rotation0.y = 0;
    object->rotation0.z = 0;
    object->rotation0.w = 1.0f;
    object->rotation1.x = 0;
    object->rotation1.y = 0;
    object->rotation1.z = 0;
    object->rotation1.w = 1.0f;
    rt_memcpy(object->workData, parameters, workSize);
    object->state = g_polyWindKinds[kind].create(parameters, flags);
    g_polyWindKinds[kind].start(object);
    return object;
}
}
