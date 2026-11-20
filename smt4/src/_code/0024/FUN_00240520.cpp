#include "common.h"

extern "C" {

int arraySortQsort(u32 a, u32 b, int c, int d);

void FUN_00240520(u32 a, u32 b)
{
    arraySortQsort(a, b, 0x20, 0x2d042c);
}

} /* extern "C" */
