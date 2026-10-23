/* NON_MATCHING: config stores, color stores, self-relative addressing and VFP register allocation differ. */
#include "AsdSDK/AsdSceneFog.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *asdMemoryAlloc(s32 heap, s32 alignment, s32 flags, u32 size, s32 clear);
AsdAllocator *asdMemoryGetDefaultAllocator();
AsdFogObject *FUN_0015d814(const AsdFogCreateInfo *info, AsdAllocator *allocator);
extern AsdSceneFogRegistry DAT_005b3cd8;
extern const char DAT_0053d1e4[];

// Create the two scene fog channels with the engine's default color and range.
void FUN_00141724()
{
    for (s32 index = 0; index < 2; ++index) {
        asdDebugTrace(DAT_0053d1e4, 1477);
        AsdSceneFog *fog = static_cast<AsdSceneFog *>(asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdSceneFog), 1));
        *reinterpret_cast<u32 *>(fog) = 0;
        fog->object = NULL;
        fog->resource = NULL;
        fog->parameters = NULL;
        fog->id = index;
        fog->enabled = 0;
        AsdAllocator *allocator = asdMemoryGetDefaultAllocator();
        AsdFogCreateInfo info;
        info.enabled = 1;
        info.allocateResource = 1;
        info.unk04 = 0;
        info.unk08 = 0;
        info.unk0C = 0;
        fog->object = FUN_0015d814(&info, allocator);
        fog->resource = fog->object->resource;
        f32 *color = fog->resource->color;
        color[0] = 0.3f;
        color[1] = 0.3f;
        color[2] = 0.5f;
        color[3] = 1.0f;
        fog->parameters = fog->resource->parameters();
        fog->parameters->mode = 3;
        fog->parameters->density = 10.0f;
        fog->parameters->start = 100.0f;
        fog->parameters->end = 5000.0f;
        DAT_005b3cd8.entries[index] = fog;
    }
}
}
