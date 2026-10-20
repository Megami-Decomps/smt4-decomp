/* NON_MATCHING: register allocation (retail keeps the address in r5 and the lock/heap pointers in r4/r6 across the calls). */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;
extern AsdVramHeap g_asdVramHeapA; /* VRAM bank A */
extern AsdVramHeap g_asdVramHeapB; /* VRAM bank B */

void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
void FUN_001a1244(void *expHeap, u32 addr);
void asdVramHeapFree(AsdVramHeap *heap, u32 addr);

/* Frees a block: finds the region its address lies in and hands it to that region's allocator. */
void asdMemoryFreeRegion(u32 addr)
{
    AsdMemSystem *sys = g_asdMemory.system;

    if (sys->main.base <= addr && addr < sys->main.base + sys->main.size) {
        nn_os_CriticalSection_Enter(sys->mainLock);
        FUN_001a1244(sys->mainHeap, addr);
        nn_os_CriticalSection_Leave(sys->mainLock);
        return;
    }
    if (sys->extra.base <= addr && addr < sys->extra.base + sys->extra.size) {
        nn_os_CriticalSection_Enter(sys->extraLock);
        FUN_001a1244(sys->extraHeap, addr);
        nn_os_CriticalSection_Leave(sys->extraLock);
        return;
    }
    if (sys->vramA.base <= addr && addr < sys->vramA.base + sys->vramA.size) {
        asdVramHeapFree(&g_asdVramHeapA, addr);
        return;
    }
    if (sys->vramB.base <= addr && addr < sys->vramB.base + sys->vramB.size) {
        asdVramHeapFree(&g_asdVramHeapB, addr);
        return;
    }
}

} /* extern "C" */
