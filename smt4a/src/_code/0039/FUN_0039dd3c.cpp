#include "shard/Shard0039.h"

extern "C" {

extern BtlStateB *btlGetMainState(void);
extern void scrSetResult(s32 value);

/* Script command: result is the battle state's halfword at +0x2356. */
u32 FUN_0039dd3c(void)
{
    scrSetResult(btlGetMainState()->unk2356);
    return 1;
}

} /* extern "C" */
