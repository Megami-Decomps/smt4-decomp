#include "common.h"

extern "C" {

__declspec(noreturn) __weak void FUN_001ab810_hook(u8 *p);

void FUN_001ab810(u8 *p)
{
    FUN_001ab810_hook(p + 448);
}

} /* extern "C" */
