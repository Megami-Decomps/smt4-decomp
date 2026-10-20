/* NON_MATCHING: retail materialises the zero arguments through one register (r4) and stores them with stm; this stores each constant separately */
/* Allocation callback of the Mobiclip player: allocates `size` bytes (4-aligned) from its own heap. */
#include "common.h"

extern "C" {

void *nn_fnd_ExpHeapBase_Allocate(void *heap, u32 size, int alignment, u8 mode, int a, u8 b);

extern u8 DAT_00617ca0[];

void *mobiclipHeapAllocB(u32 size)
{
    return nn_fnd_ExpHeapBase_Allocate(DAT_00617ca0, size, 4, 0, 0, 0);
}

} /* extern "C" */
