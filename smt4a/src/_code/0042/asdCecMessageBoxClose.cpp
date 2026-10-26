#include "common.h"
#include "util/CalleeContracts.h"
#include "shard/asdCecMessageBoxClose.h"

extern "C" {

extern void FUN_0042e870(int box, int arg);

/* Forwards to the function that follows it in the binary. */
void asdCecMessageBoxClose(AsdCecMessageBox *box)
{
    FUN_0042e870(reinterpret_cast<int>(box), 0);
}

} /* extern "C" */
