#include "shard/Shard0043.h"

extern "C" {

typedef struct ExpHeapBase {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 block;
} ExpHeapBase;

extern void nn_fnd_detail_DestroyHeap(u32 *block);

void nn_fnd_ExpHeapBase_Finalize(ExpHeapBase *heap)
{
    if (heap->block != 0) {
        nn_fnd_detail_DestroyHeap(&heap->block);
        heap->block = 0;
    }
}

} /* extern "C" */
