/* NON_MATCHING: Canonical vector fields use VFP zero stores; retail clears weights redundantly, and allocation/pointer scheduling differs. */
#include "shard/W5_W5Match2_EffectBehaviorQuery.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"

extern "C" {
extern EffectBehaviorEntry DAT_005c1d60[];
void *memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 tag, u32 mode);
void *rt_memcpy(void *destination, const void *source, u32 size);

/* Allocates one behavior, its value storage and two parameter copies, then resets the two positions. */
EffectBehaviorBlock *FUN_002b2d74(s32 type, s32 count, const EffectBehaviorParameters *source)
{
    s32 parameterSize = DAT_005c1d60[type].storage.parameterSize;
    s32 valueCount = count * (source->rows * source->columns) + count;
    s32 valueBytes = valueCount * 0x28;
    s32 size = DAT_005c1d60[type].storage.elementSize * count + valueBytes + parameterSize * 2 + 0x30;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effBehavior.cpp", 0x1093);
    EffectBehaviorBlock *behavior = (EffectBehaviorBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    u8 *values = (u8 *)(behavior + 1);
    EffectBehaviorParameters *parameters = (EffectBehaviorParameters *)(values + valueBytes);
    behavior->elements = values;
    behavior->initialParameters = (EffectBehaviorParameters *)((u8 *)parameters + parameterSize);
    behavior->workspace = (u8 *)behavior->initialParameters + parameterSize;
    behavior->parameters = parameters;
    behavior->type = type;
    behavior->count = count;
    behavior->elementCount = valueCount;
    behavior->flags = 0;
    behavior->state = 0;
    behavior->elapsed = 0.0f;
    behavior->owner = behavior;
    rt_memcpy(parameters, source, parameterSize);
    rt_memcpy(behavior->initialParameters, source, parameterSize);
    parameters = behavior->parameters;
    parameters->vectors[0].x = 0.0f;
    parameters->vectors[0].y = 0.0f;
    parameters->vectors[0].z = 0.0f;
    parameters->vectors[0].w = 1.0f;
    parameters->vectors[1].x = 0.0f;
    parameters->vectors[1].y = 0.0f;
    parameters->vectors[1].z = 0.0f;
    parameters->vectors[1].w = 1.0f;
    if (parameters->enabled != 0) {
        behavior->flags |= 1;
    }
    if (type == 12 || type == 13) {
        behavior->flags |= 2;
    }
    return behavior;
}
}
