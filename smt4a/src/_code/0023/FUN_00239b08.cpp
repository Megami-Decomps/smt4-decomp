#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_00239b08_hook(int a);

void FUN_00239b08(void)
{
    FUN_00239b08_hook(0);
}

} /* extern "C" */
