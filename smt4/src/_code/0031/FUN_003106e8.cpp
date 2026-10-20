#include "common.h"

extern "C" {

int FUN_002897b0(int value);
extern int FUN_002897e0(void);

u32 FUN_003106e8(void)
{
    if (FUN_002897e0() != 0) {
        FUN_002897b0(1);
    }
    return 1;
}

} /* extern "C" */
