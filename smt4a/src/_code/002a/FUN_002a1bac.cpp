/* Matches with --cpu=5TE -Ospace (requested): the memory module was built for the older core, for size. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {

extern AsdMemoryApoc g_asdMemory;

extern u32 FUN_00431f04(void *heap);
extern void nn_os_CriticalSection_Enter(void *lock);
extern void nn_os_CriticalSection_Leave(void *lock);

/* Queries the main heap (its free size or similar) under the heap's lock. */
u32 FUN_002a1bac(void)
{
    void *heap = g_asdMemory.system->mainHeap;
    void *lock = g_asdMemory.system->mainLock;
    u32 result;

    nn_os_CriticalSection_Enter(lock);
    result = FUN_00431f04(heap);
    nn_os_CriticalSection_Leave(lock);
    return result;
}

} /* extern "C" */
