#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00544ca0[]; /* ././effMisc.h: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
void rt_memclr(void *block, s32 size);

/* Allocates a zeroed effect object of `size` bytes from the main heap, 16-byte aligned. */
static __inline void *effAllocCleared(s32 size)
{
    void *block;

    asdDebugTrace(DAT_00544ca0, 450);
    block = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    rt_memclr(block, size);
    return block;
}

/* Resolve and clamp the descriptor's particle capacity. */
static __inline u32 effEmitterGetCapacity(const EffEmitterDesc *desc)
{
    u32 maxCount;

    if (desc->countOverride == 0) {
        maxCount = desc->countDefault * desc->multiplier;
    } else {
        maxCount = desc->countOverride * desc->multiplier;
    }
    if (maxCount > 100) {
        maxCount = 100;
    }
    return maxCount;
}

/* Creates the smaller emitter object for `desc`. */
EffEmitter *effEmitterCreateSmall(EffEmitterDesc *desc)
{
    u32 maxCount = effEmitterGetCapacity(desc);
    EffEmitter *emitter;
    emitter = (EffEmitter *)effAllocCleared(sizeof(EffEmitter) - 0x24);
    emitter->unk04 = -1;
    emitter->maxCount = maxCount;
    emitter->scale = 1.0f;
    emitter->unk34 = 1;
    return emitter;
}

} /* extern "C" */
