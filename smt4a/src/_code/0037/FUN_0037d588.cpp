#include "shard/Shard0037.h"

extern "C" {

extern u32 FUN_00261424(void);
extern void scrSetResult(u32 value);

/* Script command: result is FUN_00261424(). */
u32 FUN_0037d588(void)
{
    scrSetResult(FUN_00261424());
    return 1;
}

} /* extern "C" */
