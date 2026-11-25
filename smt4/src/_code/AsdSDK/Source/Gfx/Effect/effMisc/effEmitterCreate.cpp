#include "AsdSDK/Source/Gfx/Effect/effMisc.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "runtime/String.h"

extern "C" {
extern const char g_effMiscHeaderNestedSourceFileName[]; /* "...\Effect\././effMisc.h": __FILE__ of the header's allocator */


/* Allocates a zeroed effect object of `size` bytes from the extra heap, 16-byte aligned
 * (effMisc.h line 450: the header's inline allocator). */
static __inline void *effAllocCleared(s32 size)
{
    void *block;

    asdDebugTrace(g_effMiscHeaderNestedSourceFileName, 450);
    block = memAlloc(ASD_HEAP_EXTRA, ASD_ALIGN_DEFAULT, 0, size, 0x10, 1);
    rt_memclr(block, size);
    return block;
}

/* Creates an emitter object able to hold `maxCount` particles. */
EffEmitter *effEmitterCreate(u32 maxCount)
{
    EffEmitter *emitter = (EffEmitter *)effAllocCleared(sizeof(EffEmitter));

    emitter->handle = -1;
    emitter->maxCount = maxCount;
    emitter->scale = 1.0f;
    return emitter;
}

} /* extern "C" */
