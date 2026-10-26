#include "common.h"

extern "C" {

void *FUN_002bb484(void *object, u32 flags);
void asdMemFreeNonNull(void *memory);

/* Releases the object the first call hands back. */
void FUN_00354d40(void *object)
{
    asdMemFreeNonNull(FUN_002bb484(object, 0));
}

} /* extern "C" */
