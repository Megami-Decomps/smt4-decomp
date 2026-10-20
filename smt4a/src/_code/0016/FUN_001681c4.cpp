#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_001681c4_hook(int a);

void FUN_001681c4(void)
{
    FUN_001681c4_hook(146);
}

} /* extern "C" */
