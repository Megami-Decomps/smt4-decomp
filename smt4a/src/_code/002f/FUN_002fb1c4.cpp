#include "common.h"

extern "C" {

void FUN_002e6e14(void *memory);
void FUN_002fd02a(void);

/* Runs FUN_002fd02a, then frees `memory`. */
void FUN_002fb1c4(void *memory)
{
    FUN_002fd02a();
    FUN_002e6e14(memory);
}

} /* extern "C" */
