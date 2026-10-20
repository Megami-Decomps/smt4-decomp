#include "common.h"

extern "C" {

void asdMemFree(void *memory);

/* Frees the buffer held in `*slot` (if any), clears the slot and frees the slot itself. */
void FUN_00237210(void **slot)
{
    if (*slot != NULL) {
        asdMemFree(*slot);
        *slot = NULL;
    }
    asdMemFree(slot);
}

} /* extern "C" */
