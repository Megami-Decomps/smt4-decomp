#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_00188a34_hook(int a, int b, int c);

void FUN_00188a34(int a)
{
    FUN_00188a34_hook(a, 0, 3);
}

} /* extern "C" */
