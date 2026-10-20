#include "common.h"

extern "C" {

void asdMemFree(void *memory);

/* Frees the buffer held in `*slot` (if any) and clears the slot. */
void FUN_00187de4(void **slot)
{
    if (*slot != NULL) {
        asdMemFree(*slot);
        *slot = NULL;
    }
}

} /* extern "C" */
