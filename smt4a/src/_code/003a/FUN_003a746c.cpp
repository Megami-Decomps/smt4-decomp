#include "shard/Shard003A.h"

extern "C" {

extern s32 FUN_001b347c(void);
extern void scrSetResult(s32 value);

/* Script command: result is FUN_001b347c(). */
u32 FUN_003a746c(void)
{
    scrSetResult(FUN_001b347c());
    return 1;
}

} /* extern "C" */
