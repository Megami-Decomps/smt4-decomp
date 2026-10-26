#include "common.h"
#include "network/CecControl_AsdCec.h"

extern "C" {

__declspec(noreturn) __weak void asdCecMessageBoxClose_hook(int a, int b);

void asdCecMessageBoxClose(AsdCecMessageBox *box)
{
    asdCecMessageBoxClose_hook(reinterpret_cast<int>(box), 0);
}

} /* extern "C" */
