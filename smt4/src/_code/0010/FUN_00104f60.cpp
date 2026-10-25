/* NON_MATCHING: instruction scheduling and register choice only (retail routes nnosGetApplicationMemorySize's result through r4 before nnosInitAddressSpaceOnce and
 * schedules the constructor stores differently); the same instructions otherwise. */
#include "shard/S2AsdMemInit.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {

extern u8 DAT_00420f30; /* ExpHeapBase vtable */
extern NnCriticalSection DAT_004e40f4;
extern NnCriticalSection *DAT_00465124;
extern AsdMemSystemFull DAT_004e3ff0;
extern AsdMemoryFull g_asdMemory;

u32 nnosGetAppMemAlloc(void);
u32 FUN_0010f97c(void);
void FUN_0010f898(u32 size);
void FUN_0010f9d0(u32 size);
u32 nnosGetApplicationMemorySize(void);
void nnosInitAddressSpaceOnce(u32 base, u32 size);
void FUN_0010fae4(void);
void nn_init_InitializeAllocator(u32 size);
void nn_os_CriticalSection_Initialize(void *lock);
void addressBlockAllocate(void *block, u32 size);
void rt_memclr(u32 base, u32 size);
void heapOwnerCreate(void *expHeap, u32 base, u32 size, u32 flags);

static __inline void criticalSectionConstruct(NnCriticalSection *lock)
{
    lock->unk00 = 0;
    lock->unk04 = 0;
    lock->unk08 = -1;
}

static __inline void expHeapConstruct(NnExpHeap *heap)
{
    u32 i;

    for (i = 0; i < 6; i++) {
        heap->base.unk04[i] = 0;
    }
    heap->base.unk54 = 0;
    criticalSectionConstruct(&heap->lock);
    heap->base.vtable = &DAT_00420f30;
}

/* Reserves the application memory, brings up the nn allocator and builds the engine's memory
 * state: an ExpHeap with its lock for the main region and one for the extra region. */
void FUN_00104f60(u32 reserveSize, u32 allocatorSize, u32 extraReserve)
{
    AsdMemSystemFull *system;
    NnExpHeap *heap;
    u32 appMemSize = nnosGetAppMemAlloc();
    u32 addressSpaceSize;

    FUN_0010f898(appMemSize - FUN_0010f97c() - reserveSize);
    FUN_0010f9d0(reserveSize);
    addressSpaceSize = nnosGetApplicationMemorySize();
    nnosInitAddressSpaceOnce(0x8000000, addressSpaceSize);
    if (allocatorSize != 0) {
        FUN_0010fae4();
        nn_init_InitializeAllocator(allocatorSize);
    }

    criticalSectionConstruct(&DAT_004e40f4);
    DAT_00465124 = &DAT_004e40f4;
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
