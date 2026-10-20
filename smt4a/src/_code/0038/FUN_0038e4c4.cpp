#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_0038e4c4_hook(int a, int b);

void FUN_0038e4c4(int a)
{
    FUN_0038e4c4_hook(a, 0);
}

} /* extern "C" */
