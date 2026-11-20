#include "common.h"

extern "C" {

extern void statGrowthAccumulate(void);

/* Forwards to the function that follows it in the binary. */
void FUN_003daaf4(void)
{
    statGrowthAccumulate();
}

} /* extern "C" */
