/* NON_MATCHING: retail loads 0x2010000 once into a register and lays the memory-type tests out as a decision tree around it (`sub ip, kind, r3; beq; bge` then `cmp ip, #0x10000; cmpne ip, #0x20000`) with the bodies after the tests, keeps NULL in fp and carries the block index in a pre-indexed ldr; this build tests the types as an if chain and allocates registers differently (a switch over the same four types gives another tree). */
#include "classes/AsdAllocatorObject.h"
#include "shard/S1NwGfx.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

// One vertex data block of a model resource.
struct VertexDataBlock {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 size;
    /* 0x0C */ RelativePointer source;  // the data in the resource file
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 memoryType;          // 0: default (0x2010000)
    /* 0x18 */ void *header;            // 0x70-byte record from the allocator
    /* 0x1C */ u32 headerSize;
    /* 0x20 */ void *deviceMemory;      // copy placed in GPU-visible memory
    /* 0x24 */ u32 deviceMemoryType;
};

// The list of vertex data blocks the resource owns.
struct VertexDataList {
    /* 0x00 */ u32 count;
    /* 0x04 */ RelativePointer blocks;  // relative pointer to `count` relative pointers to VertexDataBlock
    /* 0x08 */ u32 unk08;
    /* 0x0C */ RelativePointer results; // `count` block pointers filled in here
    /* 0x10 */ u32 unk10;
    /* 0x14 */ AsdAllocatorObject *allocator;
};

extern "C" {
extern AsdAllocatorObject *DAT_00471c40;
extern void *(*g_gfxAllocateCallback)(u32 memoryType, u32 flags, void *tag, u32 size);
void FUN_002a666c(void *source, void *destination, u32 size);
void nnnstdMemCpy(void *destination, const void *source, u32 size);

// Gives each vertex data block of the resource a header record and, for the memory types that need
// it, a GPU-visible copy of its data.
void FUN_0036e8e4(VertexDataList **resource, AsdAllocatorObject *allocator)
{
    if (allocator == NULL) {
        allocator = DAT_00471c40;
    }
    (*resource)->allocator = allocator;
    u32 count = (*resource)->count;
    void **results = static_cast<void **>((*resource)->results.get());
    for (u32 i = 0; i < count; ++i) {
        RelativePointer *blocks = static_cast<RelativePointer *>((*resource)->blocks.get());
        VertexDataBlock *block = static_cast<VertexDataBlock *>(blocks[i].get());
        results[i] = block;
        u32 size = 0x70;
        block->header = allocator->allocate(size, 4);
        block->headerSize = size;
        if (block->deviceMemory != NULL) {
            block->deviceMemoryType = 0;
            continue;
        }
        u32 memoryType = block->memoryType;
        if (memoryType == 0) {
            memoryType = 0x2010000;
        }
        size = block->size;
        void *tag = results[i];
        u32 kind = memoryType & 0xffff0000;
        if (kind == 0x2010000) {
            FUN_002c2424((u32)(block->source.get()), size);
        } else if (kind > 0x2010000) {
            if (kind == 0x2020000 || kind == 0x2030000) {
                u32 pool = memoryType & 0x30000;
                void *memory = g_gfxAllocateCallback(pool, 0x102, tag, size);
                FUN_002a666c(block->source.get(), memory, size);
                block->deviceMemory = memory;
                block->deviceMemoryType = pool;
            }
        } else if (kind == 0x1010000) {
            void *memory = g_gfxAllocateCallback(0x10000, 0x102, tag, size);
            nnnstdMemCpy(memory, block->source.get(), size);
            FUN_002c2424((u32)(memory), size);
            block->deviceMemory = memory;
            block->deviceMemoryType = 0x10000;
        }
    }
}
}
