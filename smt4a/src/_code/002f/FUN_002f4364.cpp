#include "common.h"

extern "C" {

void FUN_002e7232(void);
void FUN_002eb5f4(void);

/* Runs FUN_002eb5f4, then FUN_002e7232. */
void FUN_002f4364(void)
{
    FUN_002eb5f4();
    FUN_002e7232();
}

} /* extern "C" */
