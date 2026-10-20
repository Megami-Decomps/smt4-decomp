#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_00180000_hook(int a);

void FUN_00180000(void)
{
    FUN_00180000_hook(1);
}

} /* extern "C" */
