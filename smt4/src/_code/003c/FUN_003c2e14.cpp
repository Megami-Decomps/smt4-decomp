#include "common.h"

extern "C" {

int touchGetPointByMode(u32 a, u32 b, int c);

void FUN_003c2e14(u32 a, u32 b)
{
    touchGetPointByMode(a, b, 3);
}

} /* extern "C" */
