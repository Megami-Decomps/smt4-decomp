/* NON_MATCHING: allocation arithmetic and the zero-then-w vector reset match retail; only the scheduling of the block pointer stores (retail delays `mov r4, r0`, the build writes back through r0) differs. */
#include "AsdSDK/Source/Gfx/Effect/EffectBehaviorBlock.h"
#include "AsdSDK/AsdDebug.h"

/* Resets a vector to (0, 0, 0, 1). */
static __inline void behaviorVectorSetIdentity(EffectBehaviorVector *vector)
{
    EffectBehaviorVector zero = {0, 0, 0, 0};
    *vector = zero;
    vector->w = 1.0f;
}

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
    u32 elementsBytes = DAT_00473590[type].elementSize * count;
    u32 allocationSize = elementsBytes + elementsSize + parameterSize * 2 + sizeof(EffectBehaviorBlock);
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
    behaviorVectorSetIdentity(&current->vectors[0]);
    behaviorVectorSetIdentity(&current->vectors[1]);
    if (current->enabled)
        block->flags |= 1;
    if (type == 12 || type == 13)
        block->flags |= 2;
    return block;
}
}
