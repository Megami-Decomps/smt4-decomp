#include "common.h"

extern "C" {

void asdOperatorDeleteArray(void *memory);
void FUN_002fd02a(void);

/* Runs FUN_002fd02a, then frees `memory`. */
void FUN_002fb1c4(void *memory)
{
    FUN_002fd02a();
    asdOperatorDeleteArray(memory);
}

} /* extern "C" */
