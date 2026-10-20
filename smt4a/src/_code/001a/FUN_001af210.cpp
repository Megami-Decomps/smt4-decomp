#include "common.h"

extern "C" {

extern void FUN_001af214(void);

/* Forwards to the function that follows it in the binary. */
void FUN_001af210(void)
{
    FUN_001af214();
}

} /* extern "C" */
