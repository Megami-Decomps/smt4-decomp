/* NON_MATCHING: the retail build has stripped debug calls (file/line setup + nop) before each allocation. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemory g_asdMemory;
extern AsdVramHeap g_asdVramHeapA; /* VRAM bank A */
extern AsdVramHeap g_asdVramHeapB; /* VRAM bank B */
extern u8 DAT_00420938;          /* allocator vtables */
extern u8 DAT_004207f8;
extern u8 DAT_00420870;

void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
u32 nn_fnd_ExpHeapBase_Allocate(void *heap, u32 size, int alignment, u8 mode, int unk, u8 unk2);
int nngxGetVramEndAddr(u32 heapId);
u32 FUN_002c3994(void);
u32 FUN_002c3984(void);
u32 vramAreaGetBaseAddress(u32 heapId);
void rt_memclr(u32 base, u32 size);
void heapOwnerCreate(void *expHeap, u32 base, u32 size, u32 flags);
void nn_os_CriticalSection_Initialize(void *lock);
void FUN_0011bfec(void *expHeap, u32 block, u32 size);
void FUN_0010a174(u32 mainBase, u32 mainSize, u32 extraBase, u32 extraSize, u32 vramABase, u32 vramASize, u32 vramBBase, u32 vramBSize);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdVramBlockListInsert(void *list, AsdVramBlock *block);

/* Sets up the FCRAM extra heap, both VRAM allocators and the new/delete allocator objects. */
void asdMemoryInit(void)
{
    AsdMemSystem *sys = g_asdMemory.system;
    u32 vramBase;
    u32 vramSize;
    AsdVramBlock *block;
    AsdAllocator *allocator;
    u32 extraBlock;

    sys->extra.base = FUN_002c3994();
    sys->extra.size = FUN_002c3984();
    rt_memclr(sys->extra.base, sys->extra.size);
    heapOwnerCreate(sys->extraHeap, sys->extra.base, sys->extra.size, 0x100);
    nn_os_CriticalSection_Initialize(sys->extraLock);

    /* Large extra regions give up their tail: grab all but 32 MB from the back and trim it. */
    if (sys->extra.size > 0x2000100) {
        nn_os_CriticalSection_Enter(sys->extraLock);
        extraBlock = nn_fnd_ExpHeapBase_Allocate(sys->extraHeap, sys->extra.size - 0x1ffff80, -0x80, 0, 0, 0);
        nn_os_CriticalSection_Leave(sys->extraLock);
        g_asdMemory.extraBlock = extraBlock;
        nn_os_CriticalSection_Enter(sys->extraLock);
        FUN_0011bfec(sys->extraHeap, extraBlock, 0x100);
        nn_os_CriticalSection_Leave(sys->extraLock);
    }

    sys->vramA.base = vramAreaGetBaseAddress(ASD_HEAP_VRAM_A);
    sys->vramA.size = nngxGetVramEndAddr(ASD_HEAP_VRAM_A) - sys->vramA.base;
    sys->vramABase = sys->vramA.base;
    sys->vramB.base = vramAreaGetBaseAddress(ASD_HEAP_VRAM_B);
    sys->vramB.size = nngxGetVramEndAddr(ASD_HEAP_VRAM_B) - sys->vramB.base;
    sys->vramBBase = sys->vramB.base;
    FUN_0010a174(sys->main.base, sys->main.size, sys->extra.base, sys->extra.size,
                 sys->vramA.base, sys->vramA.size, sys->vramB.base, sys->vramB.size);

    /* Each VRAM bank starts as one free block covering the whole bank. */
    vramBase = sys->vramA.base;
    vramSize = sys->vramA.size;
    g_asdVramHeapA.used.head = NULL;
    g_asdVramHeapA.used.tail = NULL;
    g_asdVramHeapA.used.count = 0;
    g_asdVramHeapA.free.head = NULL;
    g_asdVramHeapA.free.tail = NULL;
    g_asdVramHeapA.free.count = 0;
    g_asdVramHeapA.freeBytes = vramSize;
    block = (AsdVramBlock *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdVramBlock), 1);
    block->prev = NULL;
    block->next = NULL;
    block->addr = vramBase;
    block->size = vramSize;
    asdVramBlockListInsert(&g_asdVramHeapA.free, block);

    vramBase = sys->vramB.base;
    vramSize = sys->vramB.size;
    g_asdVramHeapB.used.head = NULL;
    g_asdVramHeapB.used.tail = NULL;
    g_asdVramHeapB.used.count = 0;
    g_asdVramHeapB.free.head = NULL;
    g_asdVramHeapB.free.tail = NULL;
    g_asdVramHeapB.free.count = 0;
    g_asdVramHeapB.freeBytes = vramSize;
    block = (AsdVramBlock *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdVramBlock), 1);
    block->prev = NULL;
    block->next = NULL;
    block->addr = vramBase;
    block->size = vramSize;
    asdVramBlockListInsert(&g_asdVramHeapB.free, block);

    /* The allocator objects the engine's operator new/delete use. */
    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_00420938;
    }
    g_asdMemory.allocatorA = allocator;

    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_004207f8;
    }
    g_asdMemory.allocatorB = allocator;
    g_asdMemory.useAllocatorA = 0;

    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_00420870;
    }
    g_asdMemory.allocatorC = allocator;
}

} /* extern "C" */
