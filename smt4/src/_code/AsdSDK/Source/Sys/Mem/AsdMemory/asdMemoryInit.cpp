/* NON_MATCHING: heap/lock, locked allocation and VRAM bank helpers, debug traces and the VFP spill now match; the three allocator objects are built by retail through an (empty) constructor call guarded by a null check, and zero/one/four constants sit in different saved registers. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/AsdDebug.h"
extern const char g_asdMemorySourcePath[]; /* __FILE__ of AsdMemory.cpp */
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
u32 nnosGetHeapBase(void);
u32 FUN_002c3984(void);
u32 vramAreaGetBaseAddress(u32 heapId);
void rt_memclr(u32 base, u32 size);
void heapOwnerCreate(void *expHeap, u32 base, u32 size, u32 flags);
void nn_os_CriticalSection_Initialize(void *lock);
void FUN_0011bfec(void *expHeap, u32 block, u32 size);
void FUN_0010a174(u32 mainBase, u32 mainSize, u32 extraBase, u32 extraSize, u32 vramABase, u32 vramASize, u32 vramBBase, u32 vramBSize);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);
void asdVramBlockListInsert(void *list, AsdVramBlock *block);

/* Creates an ExpHeap owner; the heap object embeds its critical section at +0x58. */
static __inline void createHeapWithLock(u8 *heap, u32 base, u32 size)
{
    heapOwnerCreate(heap, base, size, 0x100);
    nn_os_CriticalSection_Initialize(heap + 0x58);
}

/* A VRAM bank starts as one free block covering the whole bank. */
static __inline void vramHeapInitFree(AsdVramHeap *heap, u32 vramBase, u32 vramSize)
{
    AsdVramBlock *block;
    heap->used.head = NULL;
    heap->used.tail = NULL;
    heap->used.count = 0;
    heap->free.head = NULL;
    heap->free.tail = NULL;
    heap->free.count = 0;
    heap->freeBytes = vramSize;
    asdDebugTrace(g_asdMemorySourcePath, 597);
    block = (AsdVramBlock *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdVramBlock), 1);
    block->prev = NULL;
    block->next = NULL;
    block->addr = vramBase;
    block->size = vramSize;
    asdVramBlockListInsert(&heap->free, block);
}
/* Allocates from an ExpHeap while holding its lock. */
static __inline u32 allocLocked(u8 *heap, u8 *lock, u32 size, int alignment, u8 mode, int unk, u8 unk2)
{
    u32 block;
    nn_os_CriticalSection_Enter(lock);
    block = nn_fnd_ExpHeapBase_Allocate(heap, size, alignment, mode, unk, unk2);
    nn_os_CriticalSection_Leave(lock);
    return block;
}

/* Shrinks a heap block to `size` bytes while holding the heap's lock. */
static __inline void trimBlockLocked(u8 *heap, u8 *lock, u32 block, u32 size)
{
    nn_os_CriticalSection_Enter(lock);
    FUN_0011bfec(heap, block, size);
    nn_os_CriticalSection_Leave(lock);
}
/* Sets up the FCRAM extra heap, both VRAM allocators and the new/delete allocator objects. */
void asdMemoryInit(void)
{
    u32 vramBase;
    u32 vramSize;
    AsdVramBlock *block;
    AsdAllocator *allocator;
    u32 extraBlock;

    g_asdMemory.system->extra.base = nnosGetHeapBase();
    g_asdMemory.system->extra.size = FUN_002c3984();
    rt_memclr(g_asdMemory.system->extra.base, g_asdMemory.system->extra.size);
    createHeapWithLock(g_asdMemory.system->extraHeap, g_asdMemory.system->extra.base, g_asdMemory.system->extra.size);

    /* Large extra regions give up their tail: grab all but 32 MB from the back and trim it. */
    if (g_asdMemory.system->extra.size > 0x2000100) {
        extraBlock = allocLocked(g_asdMemory.system->extraHeap, g_asdMemory.system->extraLock,
                                 g_asdMemory.system->extra.size - 0x1ffff80, -0x80, 0, 0, 0);
        g_asdMemory.extraBlock = extraBlock;
        trimBlockLocked(g_asdMemory.system->extraHeap, g_asdMemory.system->extraLock, extraBlock, 0x100);
    }

    g_asdMemory.system->vramA.base = vramAreaGetBaseAddress(ASD_HEAP_VRAM_A);
    g_asdMemory.system->vramA.size = nngxGetVramEndAddr(ASD_HEAP_VRAM_A) - g_asdMemory.system->vramA.base;
    g_asdMemory.system->vramABase = g_asdMemory.system->vramA.base;
    g_asdMemory.system->vramB.base = vramAreaGetBaseAddress(ASD_HEAP_VRAM_B);
    g_asdMemory.system->vramB.size = nngxGetVramEndAddr(ASD_HEAP_VRAM_B) - g_asdMemory.system->vramB.base;
    g_asdMemory.system->vramBBase = g_asdMemory.system->vramB.base;
    FUN_0010a174(g_asdMemory.system->main.base, g_asdMemory.system->main.size, g_asdMemory.system->extra.base, g_asdMemory.system->extra.size,
                 g_asdMemory.system->vramA.base, g_asdMemory.system->vramA.size, g_asdMemory.system->vramB.base, g_asdMemory.system->vramB.size);

    /* Each VRAM bank starts as one free block covering the whole bank. */
    vramHeapInitFree(&g_asdVramHeapA, g_asdMemory.system->vramA.base, g_asdMemory.system->vramA.size);
    vramHeapInitFree(&g_asdVramHeapA + 1, g_asdMemory.system->vramB.base, g_asdMemory.system->vramB.size);

    /* The allocator objects the engine's operator new/delete use. */
    asdDebugTrace(g_asdMemorySourcePath, 172);
    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_00420938;
    }
    g_asdMemory.allocatorA = allocator;

    asdDebugTrace(g_asdMemorySourcePath, 172);
    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_004207f8;
    }
    g_asdMemory.allocatorB = allocator;
    g_asdMemory.useAllocatorA = 0;

    asdDebugTrace(g_asdMemorySourcePath, 172);
    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_00420870;
    }
    g_asdMemory.allocatorC = allocator;
}

} /* extern "C" */
