#include "common.h"
#include "util/CalleeContracts.h"

extern "C" {

extern void FUN_0042e870(int box, int arg);

/* Forwards to the function that follows it in the binary. */
void asdCecMessageBoxClose(int box)
{
    FUN_0042e870(box, 0);
}

} /* extern "C" */
