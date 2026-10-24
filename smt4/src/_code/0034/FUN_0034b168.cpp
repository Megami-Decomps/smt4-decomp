#include "common.h"

extern "C" {

extern void (*DAT_0044e990)(void *block);

/* Virtual release hook: hands the block to the allocator's release function. */
void FUN_0034b168(void *self, void *block)
{
    DAT_0044e990(block);
}

} /* extern "C" */
