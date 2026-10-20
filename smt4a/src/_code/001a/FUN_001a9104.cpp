#include "common.h"

extern "C" {

extern void FUN_001a9110(void *area);

/* Forwards to the function that follows it in the binary. */
void FUN_001a9104(void *base)
{
    FUN_001a9110((u8 *)base + 0x38a8);
}

} /* extern "C" */
