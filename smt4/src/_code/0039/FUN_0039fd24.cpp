#include "common.h"

extern "C" {

int FUN_00230f44(...);

int FUN_0039fd24(u32 a, u32 b)
{
    int valueA = FUN_00230f44();
    int valueB = FUN_00230f44(b);

    return valueB - valueA;
}

} /* extern "C" */
