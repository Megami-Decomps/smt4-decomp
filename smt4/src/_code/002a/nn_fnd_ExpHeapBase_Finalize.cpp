#include "common.h"

extern "C" {

int FUN_0035ac98(u32 *block);

typedef struct ExpHeapBase {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 block;
} ExpHeapBase;

void nn_fnd_ExpHeapBase_Finalize(ExpHeapBase *heap)
{
    if (heap->block != 0) {
        FUN_0035ac98(&heap->block);
        heap->block = 0;
    }
}

} /* extern "C" */
