#include "common.h"

extern "C" {

void asdMemFree(void *memory);

/* Frees the buffer held in `*slot` (if any) and clears the slot. */
void asdMemFreeAndClear(void **slot)
{
    if (*slot != NULL) {
        asdMemFree(*slot);
        *slot = NULL;
    }
}

} /* extern "C" */
