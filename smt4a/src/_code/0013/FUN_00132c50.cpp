/* NON_MATCHING: retail retains the zero-capacity branch and uses different block/capacity register allocation and allocation-size scheduling. */
#include "common.h"

struct VectorElement {
    u32 words[3];
};
struct VectorBlock {
    VectorBlock* next;   // 0x00
    u32 capacity;        // 0x04
    VectorElement* data; // 0x08
};
struct BlockVector {
    VectorBlock* head;    // 0x00
    u32 unk04;            // 0x04
    VectorElement* begin; // 0x08
    VectorElement* end;   // 0x0c
};

extern "C" {
void* rt_malloc(u32 size);
u32 vectorGrowCapacity_0012d436(u32 capacity, BlockVector* vector);

// Prepends an allocation block and resets the writable element range.
void FUN_00132c50(BlockVector* vector, s32 singleElement)
{
    u32 capacity = 1;
    if (singleElement == 0) {
        u32 oldCapacity = vector->head ? vector->head->capacity : 0;
        capacity = vectorGrowCapacity_0012d436(oldCapacity, vector);
    }
    VectorBlock* block = static_cast<VectorBlock*>(rt_malloc(sizeof(VectorBlock)));
    block->data = static_cast<VectorElement*>(rt_malloc(capacity * sizeof(VectorElement)));
    VectorBlock* previous = vector->head;
    block->capacity = capacity;
    block->next = previous;
    vector->head = block;
    VectorElement* data = block->data;
    vector->end = data + capacity;
    vector->begin = data;
}
}
