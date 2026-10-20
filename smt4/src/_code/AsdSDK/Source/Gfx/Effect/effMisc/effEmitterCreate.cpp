#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00410380[]; /* ././effMisc.h: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
void rt_memclr(void *block, s32 size);

/* Allocates a zeroed effect object of `size` bytes from the main heap, 16-byte aligned. */
static __inline void *effAllocCleared(s32 size)
{
    void *block;

    asdDebugTrace(DAT_00410380, 450);
    block = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    rt_memclr(block, size);
    return block;
}

/* Creates an emitter object able to hold `maxCount` particles. */
EffEmitter *effEmitterCreate(u32 maxCount)
{
    EffEmitter *emitter = (EffEmitter *)effAllocCleared(sizeof(EffEmitter));

    emitter->unk04 = -1;
    emitter->maxCount = maxCount;
    emitter->scale = 1.0f;
    return emitter;
}

} /* extern "C" */
