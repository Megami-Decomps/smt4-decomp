/* NON_MATCHING: resolved resource lifetime, object address writeback and default-color VFP scheduling differ. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"
#include <string.h>

extern "C" {
void *memAlloc(s32 heap, s32 category, s32 flags, s32 bytes, s32 alignment, s32 count);
void rt_memcpy(void *destination, const void *source, s32 bytes);
u32 *resourceResolveDataPointer(PolyWindDesc *desc);
void *resourceResolveHeaderPointer(PolyWindDesc *desc);
extern PolyWindKind g_polyWindKinds[];
extern PolyVec4 g_polyDefaultColor;
extern const char DAT_00410604[];

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
    asdDebugTrace(DAT_00410604, 1506);
    PolyObject *object = (PolyObject *)memAlloc(0x10000, 0x100, 0, workSize + 0x50, 0x10, 1);
    object->unk30 = -1;
    object->work = object->workData;
    object->frame = 0;
    object->kind = kind;
    object->color = g_polyDefaultColor;
    memset(&object->rotation0, 0, sizeof(object->rotation0));
    object->rotation0.w = 1.0f;
    memset(&object->rotation1, 0, sizeof(object->rotation1));
    object->rotation1.w = 1.0f;
    rt_memcpy(object->work, params, workSize);
    object->state = g_polyWindKinds[kind].create(params, (s32)resource);
    g_polyWindKinds[kind].start(object);
    return object;
}
}
