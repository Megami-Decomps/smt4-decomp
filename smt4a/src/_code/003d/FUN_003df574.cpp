#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_003df574_hook(int a, int b);

void FUN_003df574(int a)
{
    FUN_003df574_hook(a, 0);
}

} /* extern "C" */
