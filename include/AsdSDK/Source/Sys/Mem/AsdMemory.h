/* AsdSDK/Source/Sys/Mem/AsdMemory.cpp: the engine's heaps.
 *
 * The game owns four regions, each addressed by a heap id. The two FCRAM regions are managed by
 * nn::fnd ExpHeaps (each behind a critical section); the two VRAM banks by a small first-fit
 * block allocator (AsdVramHeap). Allocation requests carry a heap id, an alignment class and a
 * size; frees find the owning region from the address alone. */
#ifndef ASDSDK_SOURCE_SYS_MEM_ASDMEMORY_H
#define ASDSDK_SOURCE_SYS_MEM_ASDMEMORY_H

#include "common.h"

#define ASD_HEAP_MAIN 0x100      /* FCRAM, the default heap */
#define ASD_HEAP_EXTRA 0x10000   /* the second FCRAM region (what the OS leaves after the main one) */
#define ASD_HEAP_VRAM_A 0x20000  /* VRAM bank A */
#define ASD_HEAP_VRAM_B 0x30000  /* VRAM bank B */

/* Alignment classes: the 2nd argument of an allocation request. */
#define ASD_ALIGN_DEFAULT 0x100  /* 4 bytes */
#define ASD_ALIGN_VRAM 0x101     /* 128 bytes */
#define ASD_ALIGN_TEXTURE 0x103  /* 64 bytes */
#define ASD_ALIGN_16 0x104       /* 16 bytes (0x105 as well); anything else is 8 */

/* A byte range one heap owns. */
typedef struct AsdMemRegion {
    /* 0x00 */ u32 base;
    /* 0x04 */ u32 size;
} AsdMemRegion;

/* The allocators' state: two FCRAM ExpHeaps and the two VRAM banks' ranges. */
typedef struct AsdMemSystem {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ AsdMemRegion main;      /* ASD_HEAP_MAIN */
    /* 0x1c */ u8 mainHeap[0x58];      /* nn::fnd::ExpHeapBase */
    /* 0x74 */ u8 mainLock[0xc];       /* nn::os::CriticalSection */
    /* 0x80 */ AsdMemRegion extra;     /* ASD_HEAP_EXTRA */
    /* 0x88 */ u8 extraHeap[0x58];     /* nn::fnd::ExpHeapBase */
    /* 0xe0 */ u8 extraLock[0xc];      /* nn::os::CriticalSection */
    /* 0xec */ AsdMemRegion vramA;     /* ASD_HEAP_VRAM_A */
    /* 0xf4 */ u32 vramABase;
    /* 0xf8 */ AsdMemRegion vramB;     /* ASD_HEAP_VRAM_B */
    /* 0x100 */ u32 vramBBase;
} AsdMemSystem;

/* Allocator object: just the vtable pointer (the engine's operator new/delete targets). */
typedef struct AsdAllocator {
    /* 0x00 */ const void *vtable;
} AsdAllocator;

/* The memory module's globals (IV). */
typedef struct AsdMemory {
    /* 0x00 */ u8 useAllocatorA;       /* selects allocatorA over allocatorB for the default allocator */
    /* 0x04 */ AsdMemSystem *system;
    /* 0x08 */ AsdAllocator *allocatorA;
    /* 0x0c */ AsdAllocator *allocatorB;
    /* 0x10 */ AsdAllocator *allocatorC;
    /* 0x14 */ u32 extraBlock;         /* what the extra heap's reservation returned */
} AsdMemory;

/* The allocation table Apocalypse keeps: a 0x2800-byte buffer and its fill count. */
typedef struct AsdMemTable {
    /* 0x00 */ void *entries;
    /* 0x04 */ u32 count;
} AsdMemTable;

/* The same globals in Apocalypse, which has one more allocator and a table pointer. */
typedef struct AsdMemoryApoc {
    /* 0x00 */ u8 useAllocatorA;
    /* 0x04 */ AsdMemSystem *system;
    /* 0x08 */ AsdAllocator *allocatorA;
    /* 0x0c */ AsdAllocator *allocatorB;
    /* 0x10 */ AsdAllocator *allocatorC;
    /* 0x14 */ AsdAllocator *allocatorD;
    /* 0x18 */ AsdMemTable *table;
    /* 0x1c */ u32 extraBlock;
} AsdMemoryApoc;

/* A run of VRAM, in a heap's used or free list (sorted by address). */
typedef struct AsdVramBlock {
    /* 0x00 */ u32 addr;
    /* 0x04 */ u32 size;
    /* 0x08 */ struct AsdVramBlock *prev;
    /* 0x0c */ struct AsdVramBlock *next;
} AsdVramBlock;

typedef struct AsdVramBlockList {
    /* 0x00 */ AsdVramBlock *head;
    /* 0x04 */ AsdVramBlock *tail;
    /* 0x08 */ s32 count;
} AsdVramBlockList;

/* One VRAM bank's allocator. */
typedef struct AsdVramHeap {
    /* 0x00 */ AsdVramBlockList used;
    /* 0x0c */ AsdVramBlockList free;
    /* 0x18 */ u32 freeBytes;
} AsdVramHeap;

extern "C" {
u8 FUN_004186a4(void);
}

extern "C" {
bool partyPanelIsActive(void);
}

extern "C" {
u32 partyEntryFlagsBit1(s32 index);
}

extern "C" {
/* operator new: `size` bytes from the main heap. Some call sites pass the requesting owner as a second
 * argument, which the allocator never reads. */
void *asdOperatorNew(u32 size, ...);
}

#endif
