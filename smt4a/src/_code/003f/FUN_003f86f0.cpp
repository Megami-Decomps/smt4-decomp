#include "common.h"

extern "C" {

extern void loadSlotEnsureLoaded(int value);

/* Forwards to the function that follows it in the binary. */
void FUN_003f86f0(void)
{
    loadSlotEnsureLoaded(54);
}

} /* extern "C" */
