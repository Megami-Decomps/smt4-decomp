/* NON_MATCHING: register choices around the address-space value, the stm vs strd stores of the critical section fields (retail reaches the heap and its lock through one ExpHeap object: lock at heap + 0x58) and the reload of the system pointer. */
#include "common.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "shard/S3AsdMemInit.h"

extern "C" {

u32 nnosGetAppMemAlloc(void);
u32 FUN_00146ac0(void);
void FUN_00146910(u32 size);
void FUN_00146b14(u32 size);
u32 FUN_00146898(void);
void nnosInitAddressSpaceOnce(u32 base, u32 size);
void FUN_00146c28(void);
void nn_init_InitializeAllocator(u32 size);
void FUN_001400ac(void);
void sysMemClear(void *ptr, u32 size);
void addressBlockAllocate(AsdMemSystemInit *system, u32 size);
void rt_memclr(void *ptr, u32 size);
void heapOwnerCreate(AsdExpHeapBaseInit *heap, u32 base, u32 size, u32 arg3);
void nn_os_CriticalSection_Initialize(AsdCriticalSectionInit *cs);

extern AsdMemoryApoc g_asdMemory;
extern AsdMemSystemInit DAT_00640414;       /* the memory system object */
extern const u8 DAT_00558414;               /* ExpHeapBase vtable */

/* Sets up the process memory: keeps `reserve` bytes of the application's memory aside, maps the
 * address space, initializes the allocator (if `heapSize` is set) and the AsdMemSystem, and
 * creates the main heap over the block it reserves (everything but `heapSize` + `arg2` bytes). */
void FUN_001396d8(u32 reserve, u32 heapSize, u32 arg2)
{
    FUN_00146910(nnosGetAppMemAlloc() - FUN_00146ac0() - reserve);
    FUN_00146b14(reserve);
    u32 addressSpace = FUN_00146898();

    nnosInitAddressSpaceOnce(0x8000000, addressSpace);
    if (heapSize != 0) {
        FUN_00146c28();
        nn_init_InitializeAllocator(heapSize);
    }
    FUN_001400ac();

    AsdMemSystemInit *system = &DAT_00640414;

    sysMemClear(system, sizeof(*system));
    system->unk00 = 0;
    system->unk04 = 0;
    system->blockBase = 0;
    system->blockSize = 0;
    system->unk10 = 0;
    system->mainHeap.field04 = 0;
    system->mainHeap.field08 = 0;
    system->mainHeap.field0C = 0;
    system->mainHeap.field10 = 0;
    system->mainHeap.field14 = 0;
    system->mainHeap.field18 = 0;
    system->mainHeap.field54 = 0;
    system->mainLock.field00 = 0;
    system->mainLock.field04 = 0;
    system->mainLock.owner = -1;
    system->extraHeap.field04 = 0;
    system->mainHeap.vtbl = &DAT_00558414;
    system->extraHeap.field08 = 0;
    system->extraHeap.field0C = 0;
    system->extraHeap.field10 = 0;
    system->extraHeap.field14 = 0;
    system->extraHeap.field18 = 0;
    system->extraHeap.field54 = 0;
    system->extraLock.field00 = 0;
    system->extraLock.field04 = 0;
    system->extraLock.owner = -1;
    system->extraHeap.vtbl = &DAT_00558414;
    g_asdMemory.system = (AsdMemSystem *)system;
    addressBlockAllocate((AsdMemSystemInit *)g_asdMemory.system, FUN_00146898() - heapSize - arg2);

    AsdMemSystemInit *reserved = (AsdMemSystemInit *)g_asdMemory.system;

    reserved->mainBase = reserved->blockBase;
    reserved->mainSize = reserved->blockSize;
    rt_memclr((void *)reserved->blockBase, reserved->blockSize);
    reserved = (AsdMemSystemInit *)g_asdMemory.system;
    heapOwnerCreate(&reserved->mainHeap, reserved->mainBase, reserved->mainSize, 256);
    nn_os_CriticalSection_Initialize(&reserved->mainLock);
}

} /* extern "C" */
