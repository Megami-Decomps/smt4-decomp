#include "common.h"
#include "code/Code0018_Smt4a.h"

extern "C" {

__declspec(noreturn) __weak void FUN_00180000_hook(int a);

void FUN_00180000(void)
{
    FUN_00180000_hook(1);
}

} /* extern "C" */
