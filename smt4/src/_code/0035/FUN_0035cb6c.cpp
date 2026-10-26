#include "common.h"

extern "C" {

/* Virtual getter: copies the source word into the destination and reports success. */
s32 FUN_0035cb6c(void *self, u32 *destination, void *unused, const u32 *source)
{
    *destination = *source;
    return 1;
}

} /* extern "C" */
