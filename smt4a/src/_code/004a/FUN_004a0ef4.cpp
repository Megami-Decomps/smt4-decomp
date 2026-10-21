#include "common.h"

extern "C" {

extern void partyAddMoneyClamped(void);

/* Forwards to the function that follows it in the binary. */
void FUN_004a0ef4(void)
{
    partyAddMoneyClamped();
}

} /* extern "C" */
