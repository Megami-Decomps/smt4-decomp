#include "common.h"
#include "shard/FUN_0021c118.h"

extern "C" {

__declspec(noreturn) __weak void FUN_0021c118_hook(int a, int b, int c);

void FUN_0021c118(int a, int b)
{
    FUN_0021c118_hook(a, b, 0);
}

} /* extern "C" */
