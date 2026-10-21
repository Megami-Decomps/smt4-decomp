#include "shard/Shard0039.h"

extern "C" {

extern s32 gameDataTableGetFlag(void);
extern void scrSetResult(s32 value);

/* Script command: result is whether gameDataTableGetFlag returns 4. */
u32 FUN_0039dc50(void)
{
    scrSetResult(gameDataTableGetFlag() == 4);
    return 1;
}

} /* extern "C" */
