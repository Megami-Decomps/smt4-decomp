/* NON_MATCHING: register choices around the address-space value, the stm vs strd stores of the critical section fields and the reload of the system pointer. */
#include <new>
#include "common.h"
#include "shard/S2AsdMemInit.h"
#include "nn/os/CriticalSection.h"
#include "code/Code0015_Smt4a.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

u32 nnosGetAppMemAlloc(void);
u32 FUN_00146ac0(void);
void osSetHeapSize(u32 size);
void FUN_00146b14(u32 size);
u32 FUN_00146898(void);
void nnosInitAddressSpaceOnce(u32 base, u32 size);
void FUN_00146c28(void);
void nn_init_InitializeAllocator(u32 size);
void FUN_001400ac(void);
void addressBlockAllocate(void *block, u32 size);
void rt_memclr(u32 base, u32 size);

extern AsdMemoryFull g_asdMemory;
extern AsdMemSystemFull DAT_00640414;       /* the memory system object */
extern const u32 _ZTV9Obj55840c[];          /* ExpHeapBase vtable */

static __inline void expHeapConstruct(NnExpHeap *heap)
{
    u32 i;

    for (i = 0; i < 6; i++) {
        heap->base.unk04[i] = 0;
    }
    heap->base.unk54 = 0;
    new (&heap->lock) NnCriticalSection;
    heap->base.vtable = _ZTV9Obj55840c + 2;
}

/* Sets up the process memory: keeps `reserve` bytes of the application's memory aside, maps the
 * address space, initializes the allocator (if `heapSize` is set) and the AsdMemSystem, and
 * creates the main heap over the block it reserves (everything but `heapSize` + `arg2` bytes). */
void asdMemoryInitializeHeaps(u32 reserve, u32 heapSize, u32 arg2)
{
    AsdMemSystemFull *system;
    NnExpHeap *heap;
    u32 appMemSize = nnosGetAppMemAlloc();
    u32 addressSpaceSize;

    osSetHeapSize(appMemSize - FUN_00146ac0() - reserve);
    FUN_00146b14(reserve);
    addressSpaceSize = FUN_00146898();
    nnosInitAddressSpaceOnce(0x8000000, addressSpaceSize);
    if (heapSize != 0) {
        FUN_00146c28();
        nn_init_InitializeAllocator(heapSize);
    }
    FUN_001400ac();

    system = &DAT_00640414;
    sysMemClear(system, sizeof(*system));
    system->block.unk00 = 0;
    system->block.unk04 = 0;
    system->block.base = 0;
    system->block.size = 0;
    system->block.unk10 = 0;
    expHeapConstruct(&system->mainHeap);
    expHeapConstruct(&system->extraHeap);
    g_asdMemory.system = system;

    addressBlockAllocate(g_asdMemory.system, FUN_00146898() - heapSize - arg2);
    g_asdMemory.system->main.base = g_asdMemory.system->block.base;
    g_asdMemory.system->main.size = g_asdMemory.system->block.size;
    rt_memclr(g_asdMemory.system->main.base, g_asdMemory.system->main.size);
    heap = &g_asdMemory.system->mainHeap;
    heapOwnerCreate((HeapOwner *)heap, g_asdMemory.system->main.base, g_asdMemory.system->main.size, 0x100);
    nn_os_CriticalSection_Initialize(&heap->lock);
}

} /* extern "C" */
