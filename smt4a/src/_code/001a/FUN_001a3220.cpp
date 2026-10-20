#include "common.h"

extern "C" {

void FUN_0018b868(void);
void FUN_0018b964(void);
u32 FUN_001b0508(u32 a, u32 b);

/* Calls FUN_001b0508 between FUN_0018b868 and FUN_0018b964 (a lock/unlock pair); returns its result. */
u32 FUN_001a3220(u32 a, u32 b)
{
    u32 result;

    FUN_0018b868();
    result = FUN_001b0508(a, b);
    FUN_0018b964();
    return result;
}

} /* extern "C" */
