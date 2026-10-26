#include "common.h"
#include "util/CalleeContracts.h"
#include "shard/asdCecMessageBoxClose.h"

extern "C" {

__declspec(noreturn) __weak void asdCecMessageBoxClose_hook(int a, int b);

void asdCecMessageBoxClose(AsdCecMessageBox *box)
{
    asdCecMessageBoxClose_hook(reinterpret_cast<int>(box), 0);
}

} /* extern "C" */
