#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_001b4120_hook(int a, int b, int c);

void FUN_001b4120(int a, int b)
{
    FUN_001b4120_hook(a, b, 1);
}

} /* extern "C" */
