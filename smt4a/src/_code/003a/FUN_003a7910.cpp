#include "shard/Shard003A.h"

extern "C" {

extern s32 FUN_004186e0(void);
extern void scrSetResult(s32 value);

/* Script command: result is FUN_004186e0(). */
u32 FUN_003a7910(void)
{
    scrSetResult(FUN_004186e0());
    return 1;
}

} /* extern "C" */
