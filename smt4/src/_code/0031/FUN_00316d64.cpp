#include "common.h"

extern "C" {

int gameFlagIsSet(...);

/* 1 when flag `a` is unset or set, and flag `b` is unset or clear... (each flag checked only when nonzero). */
u32 FUN_00316d64(int a, int b)
{
    if (((a == 0) || (gameFlagIsSet() != 0)) &&
        ((b == 0) || (gameFlagIsSet(b) == 0))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
