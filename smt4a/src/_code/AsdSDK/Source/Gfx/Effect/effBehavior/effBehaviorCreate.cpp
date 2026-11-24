#include <string.h>
#include "shard/W5_W5Match2_EffectBehaviorQuery.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"

extern "C" {
extern EffectBehaviorEntry g_effBehaviorTable[];

/* Allocates one behavior and lays out its elements, parameter copies and workspace. */
EffectBehaviorBlock *effBehaviorCreate(u16 type, s32 count, const void *resource)
{
    const EffectBehaviorParameters *header = (const EffectBehaviorParameters *)resource;
    s32 parameterSize = g_effBehaviorTable[type].storage.parameterSize;
    s32 valueCount = count * (header->rows * header->columns) + count;
    s32 valueBytes = valueCount * 0x28;
    s32 elementBytes = g_effBehaviorTable[type].storage.elementSize * count;
    s32 size = elementBytes + valueBytes + parameterSize * 2 + sizeof(EffectBehaviorBlock);
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effBehavior.cpp", 0x1093);
    EffectBehaviorBlock *behavior = (EffectBehaviorBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    u8 *storage = (u8 *)(behavior + 1);
    behavior->elements = storage;
    storage += valueBytes;
    EffectBehaviorParameters *parameters = (EffectBehaviorParameters *)storage;
    behavior->parameters = parameters;
    storage += parameterSize;
    behavior->initialParameters = (EffectBehaviorParameters *)storage;
    storage += parameterSize;
    behavior->workspace = storage;
    behavior->type = type;
    behavior->count = count;
    behavior->elementCount = valueCount;
    behavior->flags = 0;
    behavior->state = 0;
    behavior->elapsed = 0.0f;
    behavior->owner = behavior;
    memcpy(parameters, resource, parameterSize);
    memcpy(behavior->initialParameters, resource, parameterSize);
    parameters = behavior->parameters;
    behaviorVectorSetIdentity(&parameters->vectors[0]);
    behaviorVectorSetIdentity(&parameters->vectors[1]);
    if (parameters->enabled != 0) {
        behavior->flags |= 1;
    }
    if (type == 12 || type == 13) {
        behavior->flags |= 2;
    }
    return behavior;
}
} /* extern "C" */
