#include "common.h"

extern "C" {

void FUN_00180998(int *param_1, int arg1, int arg2);

/* Forwards to FUN_00180998, the function that follows it, with its two optional arguments at their defaults. */
void FUN_0018098c(int *param_1)
{
    FUN_00180998(param_1, 0, -1);
}

} /* extern "C" */
