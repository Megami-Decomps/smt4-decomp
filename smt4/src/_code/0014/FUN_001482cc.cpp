#include "common.h"

extern "C" {

int FUN_002bb308(void);
int FUN_002bb378(void);
extern u32 FUN_00150030(u32 a, u32 b);

/* Runs FUN_00150030 between FUN_002bb378 and FUN_002bb308 (lock/unlock). */
u32 FUN_001482cc(u32 a, u32 b)
{
    u32 result;

    FUN_002bb378();
    result = FUN_00150030(a, b);
    FUN_002bb308();
    return result;
}

} /* extern "C" */
