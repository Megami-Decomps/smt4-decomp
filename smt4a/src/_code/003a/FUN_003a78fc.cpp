#include "shard/Shard003A.h"

extern "C" {

extern s32 FUN_003dee48(void);
extern void scrSetResult(s32 value);

/* Script command: result is FUN_003dee48(). */
u32 FUN_003a78fc(void)
{
    scrSetResult(FUN_003dee48());
    return 1;
}

} /* extern "C" */
