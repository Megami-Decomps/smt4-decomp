/* AsdSDK memory module start-up: the allocator state with its embedded nn objects. */
#ifndef S2_ASD_MEM_INIT_H
#define S2_ASD_MEM_INIT_H

#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

/* nn::os::CriticalSection as its constructor leaves it (before Initialize). */
typedef struct NnCriticalSection {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 unk08;
} NnCriticalSection;

/* nn::fnd::ExpHeapBase: vtable, then fields its constructor clears. */
typedef struct NnExpHeapBase {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u32 unk04[6];
    /* 0x1c */ u8 unk1c[0x38];
    /* 0x54 */ u32 unk54;
} NnExpHeapBase;

/* nn::fnd::ExpHeap: the heap with its critical section behind it. */
typedef struct NnExpHeap {
    /* 0x00 */ NnExpHeapBase base;
    /* 0x58 */ NnCriticalSection lock;
} NnExpHeap;

/* The address range the OS handed out for the main region. */
typedef struct AsdAddressBlock {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 base;
    /* 0x0c */ u32 size;
    /* 0x10 */ u8 unk10;
} AsdAddressBlock;

/* AsdMemSystem with every member typed. */
typedef struct AsdMemSystemFull {
    /* 0x00 */ AsdAddressBlock block;
    /* 0x14 */ AsdMemRegion main;
    /* 0x1c */ NnExpHeap mainHeap;
    /* 0x80 */ AsdMemRegion extra;
    /* 0x88 */ NnExpHeap extraHeap;
    /* 0xec */ AsdMemRegion vramA;
    /* 0xf4 */ u32 vramABase;
    /* 0xf8 */ AsdMemRegion vramB;
    /* 0x100 */ u32 vramBBase;
} AsdMemSystemFull;

/* AsdMemory (IV) with the system state fully typed. */
typedef struct AsdMemoryFull {
    /* 0x00 */ u8 useAllocatorA;
    /* 0x04 */ AsdMemSystemFull *system;
    /* 0x08 */ AsdAllocator *allocatorA;
    /* 0x0c */ AsdAllocator *allocatorB;
    /* 0x10 */ AsdAllocator *allocatorC;
    /* 0x14 */ u32 extraBlock;
} AsdMemoryFull;

#endif
