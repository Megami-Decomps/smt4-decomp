#include "common.h"

extern "C" {

s32 asdMemFree(void *block);

/* Releases the allocation. */
void FUN_00390034(void *block)
{
    asdMemFree(block);
}

} /* extern "C" */
