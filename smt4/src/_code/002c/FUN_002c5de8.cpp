#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_002c5de8_hook(u8 *p, int a, int b);

void FUN_002c5de8(u8 *base, int a, int count)
{
    FUN_002c5de8_hook(base + 0x34f8, a, count * 2);
}

} /* extern "C" */
