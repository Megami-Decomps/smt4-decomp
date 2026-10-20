#include "shard/Shard003B.h"

extern "C" {

extern void FUN_003ae9d8(s32 a, s32 b);

/* Script command: calls FUN_003ae9d8 with its own arguments and then with (0, 2) and (0, 3). */
u32 scrCommRun3Variants(s32 a, s32 b)
{
    FUN_003ae9d8(a, b);
    FUN_003ae9d8(0, 2);
    FUN_003ae9d8(0, 3);
    return 1;
}

} /* extern "C" */
