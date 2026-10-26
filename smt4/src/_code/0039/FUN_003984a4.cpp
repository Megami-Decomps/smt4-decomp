#include "common.h"
#include "code/Code0039_Smt4.h"

extern "C" {

__declspec(noreturn) __weak void FUN_003984a4_hook(int a, int b);

void FUN_003984a4(int a)
{
    FUN_003984a4_hook(a, 0);
}

} /* extern "C" */
