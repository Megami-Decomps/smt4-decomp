/* NON_MATCHING: instruction scheduling and register choice only (retail routes nnosGetApplicationMemorySize's result through r4 before nnosInitAddressSpaceOnce,
 * sets the -1 register after the first lock store, and forms the heap locks' addresses in r1 just before their stm); the same instructions otherwise. */
#include <new>
#include "protos__code.h"
#include "nn/os/CriticalSection.h"
#include "shard/S2AsdMemInit.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern const u32 _ZTV9Obj420f28[]; /* ExpHeapBase vtable */
extern NnCriticalSection DAT_004e40f4;
extern NnCriticalSection *DAT_00465124;
extern AsdMemSystemFull DAT_004e3ff0;
extern AsdMemoryFull g_asdMemory;

u32 nnosGetAppMemAlloc(void);
u32 FUN_0010f97c(void);
void osSetHeapSize(u32 size);
void FUN_0010f9d0(u32 size);
u32 nnosGetApplicationMemorySize(void);
void nnosInitAddressSpaceOnce(u32 base, u32 size);
void FUN_0010fae4(void);
void addressBlockAllocate(void *block, u32 size);
void rt_memclr(u32 base, u32 size);
void heapOwnerCreate(void *expHeap, u32 base, u32 size, u32 flags);

static __inline void expHeapConstruct(NnExpHeap *heap)
{
    u32 i;

    for (i = 0; i < 6; i++) {
        heap->base.unk04[i] = 0;
    }
    heap->base.unk54 = 0;
    new (&heap->lock) NnCriticalSection;
    heap->base.vtable = _ZTV9Obj420f28 + 2;
}

/* Reserves the application memory, brings up the nn allocator and builds the engine's memory
 * state: an ExpHeap with its lock for the main region and one for the extra region. */
void asdMemInitializeSystem(u32 reserveSize, u32 allocatorSize, u32 extraReserve)
{
    AsdMemSystemFull *system;
    NnExpHeap *heap;
    u32 appMemSize = nnosGetAppMemAlloc();
    u32 addressSpaceSize;

    osSetHeapSize(appMemSize - FUN_0010f97c() - reserveSize);
    FUN_0010f9d0(reserveSize);
    addressSpaceSize = nnosGetApplicationMemorySize();
    nnosInitAddressSpaceOnce(0x8000000, addressSpaceSize);
    if (allocatorSize != 0) {
        FUN_0010fae4();
        nn_init_InitializeAllocator(allocatorSize);
    }

    DAT_00465124 = new (&DAT_004e40f4) NnCriticalSection;
    nn_os_CriticalSection_Initialize(&DAT_004e40f4);

    system = &DAT_004e3ff0;
    memClear(system, sizeof(*system));
    system->block.unk00 = 0;
    system->block.unk04 = 0;
    system->block.base = 0;
    system->block.size = 0;
    system->block.unk10 = 0;
    expHeapConstruct(&system->mainHeap);
    expHeapConstruct(&system->extraHeap);
    g_asdMemory.system = system;

    addressBlockAllocate(g_asdMemory.system, nnosGetApplicationMemorySize() - allocatorSize - extraReserve);
    g_asdMemory.system->main.base = g_asdMemory.system->block.base;
    g_asdMemory.system->main.size = g_asdMemory.system->block.size;
    rt_memclr(g_asdMemory.system->main.base, g_asdMemory.system->main.size);
    heap = &g_asdMemory.system->mainHeap;
    heapOwnerCreate(heap, g_asdMemory.system->main.base, g_asdMemory.system->main.size, 0x100);
    nn_os_CriticalSection_Initialize(&heap->lock);
}

} /* extern "C" */
