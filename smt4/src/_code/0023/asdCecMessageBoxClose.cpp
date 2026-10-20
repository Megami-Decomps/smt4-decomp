#include "common.h"

extern "C" {

__declspec(noreturn) __weak void asdCecMessageBoxClose_hook(int a, int b);

void asdCecMessageBoxClose(int a)
{
    asdCecMessageBoxClose_hook(a, 0);
}

} /* extern "C" */
