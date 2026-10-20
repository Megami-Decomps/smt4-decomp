/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 37 vs built 30 rows, 42 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
void FUN_002c3944(void *block, s32 size);

/* Creates the smaller emitter object for `desc`, with room for count * multiplier particles
 * (capped at 100). */
EffEmitter *effEmitterCreateSmall(EffEmitterDesc *desc)
{
    EffEmitter *emitter;
    s32 count = desc->countOverride;
    u32 maxCount;

    if (count == 0) {
        count = desc->countDefault;
    }
    maxCount = count * desc->multiplier;
    if (maxCount > 100) {
        maxCount = 100;
    }
    emitter = (EffEmitter *)memAlloc(0x10000, 0x100, 0, 0x38, 0x10, 1);
    FUN_002c3944(emitter, 0x38);
    emitter->unk04 = -1;
    emitter->maxCount = maxCount;
    emitter->scale = 1.0f;
    emitter->unk34 = 1;
    return emitter;
}

} /* extern "C" */
