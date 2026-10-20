#include "common.h"

extern "C" {

void asdMemFree(void *memory);

/* Frees `memory` if it is not NULL. */
void asdOperatorDeleteC(void *memory)
{
    if (memory != NULL) {
        asdMemFree(memory);
        return;
    }
}

} /* extern "C" */
