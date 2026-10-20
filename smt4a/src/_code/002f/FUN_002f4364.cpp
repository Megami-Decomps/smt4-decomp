#include "common.h"

extern "C" {

void sharedRefRelease(void);
void FUN_002eb5f4(void);

/* Runs FUN_002eb5f4, then sharedRefRelease. */
void FUN_002f4364(void)
{
    FUN_002eb5f4();
    sharedRefRelease();
}

} /* extern "C" */
