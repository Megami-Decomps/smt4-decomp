/* NON_MATCHING: the lock/heap/address registers now match retail; the build keeps the address in r0 and the g_asdMemory literal load before the push where retail copies the address to r5 first */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/W6_W6Match1_CriticalSection.h"

extern "C" {
extern AsdMemory g_asdMemory;
extern AsdVramHeap g_asdVramHeapA; /* VRAM bank A */
extern AsdVramHeap g_asdVramHeapB; /* VRAM bank B */

void FUN_002b3194(void *expHeap, u32 addr);
void asdVramHeapFree(AsdVramHeap *heap, u32 addr);

/* Frees `addr` back to an ExpHeap while holding the heap's critical section. */
static void heapFreeLocked(void *heap, void *lock, u32 addr)
{
    ScopedCriticalLock guard(lock);
    FUN_002b3194(heap, addr);
}

/* Frees a block: finds the region its address lies in and hands it to that region's allocator. */
void asdMemoryFreeRegion(u32 addr)
{
    AsdMemSystem *sys = g_asdMemory.system;

    if (sys->main.base <= addr && addr < sys->main.base + sys->main.size) {
        heapFreeLocked(sys->mainHeap, sys->mainLock, addr);
        return;
    }
    if (sys->extra.base <= addr && addr < sys->extra.base + sys->extra.size) {
        heapFreeLocked(sys->extraHeap, sys->extraLock, addr);
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
