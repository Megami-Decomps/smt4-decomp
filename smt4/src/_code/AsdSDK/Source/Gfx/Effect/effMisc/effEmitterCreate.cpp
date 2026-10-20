/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 29 vs built 23 rows, 21 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void FUN_002c3944(void *block, s32 size);

/* Creates an emitter object able to hold `maxCount` particles. */
EffEmitter *effEmitterCreate(u32 maxCount)
{
    EffEmitter *emitter = (EffEmitter *)memAlloc(0x10000, 0x100, 0, 0x5c, 0x10, 1);

    FUN_002c3944(emitter, 0x5c);
    emitter->unk04 = -1;
    emitter->maxCount = maxCount;
    emitter->scale = 1.0f;
    return emitter;
}

} /* extern "C" */
