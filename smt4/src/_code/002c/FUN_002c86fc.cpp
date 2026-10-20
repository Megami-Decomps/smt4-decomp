#include "common.h"

extern "C" {

int FUN_0024c2a8(int a, int b, int c);
int FUN_0024c2ec(int a, int b);

/* For each (a, b) pair that isn't (0, 0) and isn't known to FUN_0024c2ec, registers it with FUN_0024c2a8. */
void FUN_002c86fc(int a1, int b1, int a2, int b2, int a3, int b3)
{
    if ((a1 != 0 || b1 != 0) && (FUN_0024c2ec(a1, b1) == 0)) {
        FUN_0024c2a8(a1, b1, 1);
    }
    if ((a2 != 0 || b2 != 0) && (FUN_0024c2ec(a2, b2) == 0)) {
        FUN_0024c2a8(a2, b2, 1);
    }
    if ((a3 != 0 || b3 != 0) && (FUN_0024c2ec(a3, b3) == 0)) {
        FUN_0024c2a8(a3, b3, 1);
        return;
    }
}

} /* extern "C" */
