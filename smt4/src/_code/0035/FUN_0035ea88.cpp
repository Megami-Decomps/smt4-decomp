/* NON_MATCHING: readable body; register assignment of the block/memory arguments differs (retail copies the block pointer, build copies the memory pointer). */
#include "common.h"

struct MemoryBlock {
    u8 *begin;
    u8 *end;
    u32 used;
};

extern "C" {
void rt_memclr(void *base, u32 size);

void FUN_0035ea88(MemoryBlock *block, u8 *memory)
{
    block->begin = memory;
    block->end = memory + 0xC00;
    block->used = 0;
    rt_memclr(memory, 0xC00);
}
}
