#include "common.h"
#include "code/Code0013_Smt4.h"

extern "C" {

__declspec(noreturn) __weak void FUN_001394c8_hook(int a, int b, int c);

void FUN_001394c8(int a)
{
    FUN_001394c8_hook(a, 0, 3);
}

} /* extern "C" */
