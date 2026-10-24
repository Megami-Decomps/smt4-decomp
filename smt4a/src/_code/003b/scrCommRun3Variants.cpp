#include "shard/Shard003B.h"

extern "C" {

extern void FUN_003ae9d8(s32 a, s32 b);

/* Script command: calls FUN_003ae9d8 with (0, 1), (0, 2) and (0, 3). */
u32 scrCommRun3Variants(void)
{
    FUN_003ae9d8(0, 1);
    FUN_003ae9d8(0, 2);
    FUN_003ae9d8(0, 3);
    return 1;
}

} /* extern "C" */
