#include "common.h"
#include "code/Code003c_Smt4.h"

extern "C" {

int touchGetPointByMode(u32 a, u32 b, int c);

void FUN_003c2e0c(u32 a, u32 b)
{
    touchGetPointByMode(a, b, 1);
}

} /* extern "C" */
