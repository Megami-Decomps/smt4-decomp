#include "common.h"

extern "C" {

int FUN_00460064(u32 a, u32 b);
extern u32 FUN_001b1998(void);

void FUN_00463894(u32 value)
{
    u32 a = FUN_001b1998();

    FUN_00460064(a, value);
}

} /* extern "C" */
