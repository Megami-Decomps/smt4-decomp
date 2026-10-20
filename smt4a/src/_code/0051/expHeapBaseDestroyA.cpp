#include "shard/Shard0051.h"

extern "C" {

extern u8 DAT_00558378;
extern void nn_fnd_ExpHeapBase_Finalize(u32 *heap);
extern u32 *FUN_001af814(u32 *heap);

void expHeapBaseDestroyA(u32 *heap)
{
    *heap = (u32)&DAT_00558378;
    nn_fnd_ExpHeapBase_Finalize(heap);
    FUN_001af814(heap);
}

} /* extern "C" */
