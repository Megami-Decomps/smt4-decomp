#include "common.h"

extern "C" {

void asdMemFree(void *memory);

/* Frees `memory` if it is not NULL. */
void FUN_002e3328(void *memory)
{
    if (memory != NULL) {
        asdMemFree(memory);
        return;
    }
}

} /* extern "C" */
