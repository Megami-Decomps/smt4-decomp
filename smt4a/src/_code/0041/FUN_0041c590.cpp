#include "common.h"

extern "C" {

extern void (*DAT_00589530)(void *block);

/* Virtual release hook: hands the block to the allocator's release function. */
void FUN_0041c590(void *self, void *block)
{
    DAT_00589530(block);
}

} /* extern "C" */
