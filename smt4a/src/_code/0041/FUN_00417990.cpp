#include "common.h"

extern "C" {

s32 asdMemFree(void *block);

/* Releases the allocation passed as the second argument (the first is the owning object). */
void FUN_00417990(void *owner, void *block)
{
    asdMemFree(block);
}

} /* extern "C" */
