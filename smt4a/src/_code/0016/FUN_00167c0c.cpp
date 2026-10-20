#include "common.h"

extern "C" {

extern void FUN_00167c14(int a, int b, int c);

/* Forwards to the function that follows it in the binary. */
void FUN_00167c0c(int a, int b)
{
    FUN_00167c14(a, b, 0);
}

} /* extern "C" */
