#include "common.h"
#include "code/Code002b_Smt4.h"

extern "C" {

extern void FUN_002b0124(int value);

/* Forwards to the function that follows it in the binary. */
void FUN_002b011c(void)
{
    FUN_002b0124(1);
}

} /* extern "C" */
