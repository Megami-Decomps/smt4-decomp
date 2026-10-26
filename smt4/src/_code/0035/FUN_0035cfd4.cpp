#include "common.h"

extern "C" {

/* Copies one word from the second argument to the first and reports success. */
u32 FUN_0035cfd4(void *self, u32 *destination, const u32 *source)
{
    *destination = *source;
    return 1;
}

} /* extern "C" */
