#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_002bd8d4_hook(u8 *p, int a, int b);

void FUN_002bd8d4(u8 *base)
{
    FUN_002bd8d4_hook(base + 0x12b8, 0, 0);
}

} /* extern "C" */
