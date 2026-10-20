#include "common.h"

extern "C" {

void FUN_002ee50c(void);

/* Calls FUN_002ee50c and returns 1 when `object` is non-NULL; returns 0 otherwise. */
u32 FUN_0010aafa(u32 unused, void *object)
{
    if (object != NULL) {
        FUN_002ee50c();
        return 1;
    }
    return 0;
}

} /* extern "C" */
