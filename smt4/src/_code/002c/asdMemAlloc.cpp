#include "AsdSDK/AsdMemAlloc.h"
#include "classes/AllocatorState.h"
#include "common.h"
#include "bible/bibleAnalyze.h"

extern "C" {

extern void nn_os_CriticalSection_Enter(void *section);
extern void nn_os_CriticalSection_Leave(void *section);

extern void *asdMemoryAlloc(int heap, u32 a, u32 b, u32 size, u32 c);
extern void rt_memclr(void *dst, u32 size);


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
