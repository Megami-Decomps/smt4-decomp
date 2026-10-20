/* NON_MATCHING: the retail build has stripped debug calls (file/line setup + nop) before each allocation. */
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
extern AsdMemoryApoc g_asdMemory;
extern AsdVramHeap g_asdVramHeapA; /* VRAM bank A */
extern AsdVramHeap g_asdVramHeapB; /* VRAM bank B */
extern u8 DAT_00557dbc;          /* allocator vtables */
extern u8 DAT_00557c80;
extern u8 DAT_00557d18;
extern u8 DAT_00557d70;

void nn_os_CriticalSection_Enter(void *lock);
void nn_os_CriticalSection_Leave(void *lock);
u32 nn_fnd_ExpHeapBase_Allocate(void *heap, u32 size, int alignment, u8 mode, int unk, u8 unk2);
int nngxGetVramEndAddr(u32 heapId);
u32 FUN_00188ca4(void);
u32 FUN_00188c94(void);
u32 FUN_001c44b4(u32 heapId);
void FUN_002e6dd4(u32 base, u32 size);
void FUN_00159110(void *expHeap, u32 base, u32 size, u32 flags);
void FUN_00188b60(void *lock);
void FUN_00159138(void *expHeap, u32 block, u32 size);
void FUN_0013ea48(u32 mainBase, u32 mainSize, u32 extraBase, u32 extraSize, u32 vramABase, u32 vramASize, u32 vramBBase, u32 vramBSize);
void FUN_00140728(AsdVramHeap *heap, u32 base, u32 size);
void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
void *asdMemoryAlloc(int heap, int alignClass, int unk08, u32 size, int fromFront);

/* Sets up the FCRAM extra heap, both VRAM allocators, the allocation table and the new/delete allocator objects. */
void asdMemoryInit(void)
{
    AsdMemSystem *sys = g_asdMemory.system;
    AsdMemTable *table;
    AsdAllocator *allocator;
    u32 extraBlock;

    sys->extra.base = FUN_00188ca4();
    sys->extra.size = FUN_00188c94();
    FUN_002e6dd4(sys->extra.base, sys->extra.size);
    FUN_00159110(sys->extraHeap, sys->extra.base, sys->extra.size, 0x100);
    FUN_00188b60(sys->extraLock);

    /* Large extra regions give up their tail: grab all but 32 MB from the back and trim it. */
    if (sys->extra.size > 0x2000100) {
        nn_os_CriticalSection_Enter(sys->extraLock);
        extraBlock = nn_fnd_ExpHeapBase_Allocate(sys->extraHeap, sys->extra.size - 0x1ffff80, -0x80, 0, 0, 0);
        nn_os_CriticalSection_Leave(sys->extraLock);
        g_asdMemory.extraBlock = extraBlock;
        nn_os_CriticalSection_Enter(sys->extraLock);
        FUN_00159138(sys->extraHeap, extraBlock, 0x100);
        nn_os_CriticalSection_Leave(sys->extraLock);
    }

    sys->vramA.base = FUN_001c44b4(ASD_HEAP_VRAM_A);
    sys->vramA.size = nngxGetVramEndAddr(ASD_HEAP_VRAM_A) - sys->vramA.base;
    sys->vramABase = sys->vramA.base;
    sys->vramB.base = FUN_001c44b4(ASD_HEAP_VRAM_B);
    sys->vramB.size = nngxGetVramEndAddr(ASD_HEAP_VRAM_B) - sys->vramB.base;
    sys->vramBBase = sys->vramB.base;
    FUN_0013ea48(sys->main.base, sys->main.size, sys->extra.base, sys->extra.size,
                 sys->vramA.base, sys->vramA.size, sys->vramB.base, sys->vramB.size);

    table = (AsdMemTable *)asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdMemTable), 1);
    g_asdMemory.table = table;
    table->entries = asdMemoryAllocTracked(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, 0x2800, 1);
    table->count = 0;

    FUN_00140728(&g_asdVramHeapA, sys->vramA.base, sys->vramA.size);
    FUN_00140728(&g_asdVramHeapB, sys->vramB.base, sys->vramB.size);

    /* The allocator objects the engine's operator new/delete use. */
    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_00557dbc;
    }
    g_asdMemory.allocatorA = allocator;

    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_00557c80;
    }
    g_asdMemory.allocatorB = allocator;
    g_asdMemory.useAllocatorA = 0;

    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_00557d18;
    }
    g_asdMemory.allocatorC = allocator;

    allocator = (AsdAllocator *)asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(AsdAllocator), 1);
    if (allocator != NULL) {
        allocator->vtable = &DAT_00557d70;
    }
    g_asdMemory.allocatorD = allocator;
}

} /* extern "C" */
