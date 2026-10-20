#include "common.h"

extern "C" {

void FUN_002b080c(int *param_1, int arg1, int arg2);

/* Forwards to FUN_002b080c, the function that follows it, with its two optional arguments at their defaults. */
void FUN_002b0800(int *param_1)
{
    FUN_002b080c(param_1, 0, -1);
}

} /* extern "C" */
