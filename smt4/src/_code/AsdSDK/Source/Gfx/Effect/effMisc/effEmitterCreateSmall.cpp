/* NON_MATCHING: the particle-count computation schedules differently (retail loads the override and the multiplier together and conditionally multiplies; built loads them in sequence and keeps the count in r4/r5 swapped). */
#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410578[]; /* ././effMisc.h: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
void FUN_002c3944(void *block, s32 size);

/* Allocates a zeroed effect object of `size` bytes from the main heap, 16-byte aligned. */
static __inline void *effAllocCleared(s32 size)
{
    void *block;

    asdDebugTrace(DAT_00410578, 450);
    block = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    FUN_002c3944(block, size);
    return block;
}

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
    emitter = (EffEmitter *)effAllocCleared(sizeof(EffEmitter) - 0x24);
    emitter->unk04 = -1;
    emitter->maxCount = maxCount;
    emitter->scale = 1.0f;
    emitter->unk34 = 1;
    return emitter;
}

} /* extern "C" */
