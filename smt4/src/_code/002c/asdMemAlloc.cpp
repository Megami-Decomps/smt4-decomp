#include "AsdSDK/AsdMemAlloc.h"
#include "common.h"
#include "shard/asdMemAlloc.h"

extern "C" {

extern void nn_os_CriticalSection_Enter(u32 section);
extern void nn_os_CriticalSection_Leave(u32 section);

extern void *asdMemoryAlloc(int heap, u32 a, u32 b, u32 size, u32 c);
extern void rt_memclr(void *dst, u32 size);

typedef struct AsdMemGlobals {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 lock;
} AsdMemGlobals;

extern AsdMemGlobals DAT_00465120; /* 0x465120: allocator state, proposed g_asdMem */

/* Allocates a block under the memory lock and zero-fills it. */
void *asdMemAlloc(int heap, u32 a, u32 b, u32 size, u32 c)
{
    void *block;

    nn_os_CriticalSection_Enter(DAT_00465120.lock);
    block = asdMemoryAlloc(heap, a, b, size, c);
    if (block != NULL) {
        rt_memclr(block, size);
    }
    nn_os_CriticalSection_Leave(DAT_00465120.lock);
    return block;
}

} /* extern "C" */
