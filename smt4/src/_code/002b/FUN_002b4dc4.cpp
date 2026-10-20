#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_002b4dc4_hook(u8 *p);

void FUN_002b4dc4(u8 *p)
{
    FUN_002b4dc4_hook(p + 8);
}

} /* extern "C" */
