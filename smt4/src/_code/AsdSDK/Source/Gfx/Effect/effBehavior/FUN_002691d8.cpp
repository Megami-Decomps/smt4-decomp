/* NON_MATCHING: allocation arithmetic scheduling and vector initialization use different saved GPR/VFP registers. */
#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern EffectBehaviorType DAT_00473590[];
extern const char DAT_004148c8[];
void *memAlloc(u32, u32, u32, u32, u32, u32);
void *rt_memcpy(void *, const void *, u32);

EffectBehaviorBlock *FUN_002691d8(s32 type, s32 count, const EffectBehaviorParameters *parameters)
{
    u32 parameterSize = DAT_00473590[type].parameterSize;
    s32 elementCount = count * (parameters->rows * parameters->columns) + count;
    u32 elementsSize = elementCount * 0x28;
    u32 allocationSize = DAT_00473590[type].elementSize * count + elementsSize + parameterSize * 2 + sizeof(EffectBehaviorBlock);
    asdDebugTrace(DAT_004148c8, 4032);
    EffectBehaviorBlock *block = static_cast<EffectBehaviorBlock *>(memAlloc(0x10000, 0x100, 0, allocationSize, 16, 1));
    u8 *storage = reinterpret_cast<u8 *>(block + 1);
    EffectBehaviorParameters *copy = reinterpret_cast<EffectBehaviorParameters *>(storage + elementsSize);
    block->elements = storage;
    block->initialParameters = reinterpret_cast<EffectBehaviorParameters *>(reinterpret_cast<u8 *>(copy) + parameterSize);
    block->workspace = reinterpret_cast<u8 *>(block->initialParameters) + parameterSize;
    block->parameters = copy;
    block->type = type;
    block->count = count;
    block->elementCount = elementCount;
    block->flags = 0;
    block->state = 0;
    block->elapsed = 0.0f;
    block->owner = block;
    rt_memcpy(copy, parameters, parameterSize);
    rt_memcpy(block->initialParameters, parameters, parameterSize);
    EffectBehaviorParameters *current = block->parameters;
    current->vectors[0].x = 0.0f;
    current->vectors[0].y = 0.0f;
    current->vectors[0].z = 0.0f;
    current->vectors[0].w = 1.0f;
    current->vectors[1].x = 0.0f;
    current->vectors[1].y = 0.0f;
    current->vectors[1].z = 0.0f;
    current->vectors[1].w = 1.0f;
    if (current->enabled)
        block->flags |= 1;
    if (type == 12 || type == 13)
        block->flags |= 2;
    return block;
}
}
