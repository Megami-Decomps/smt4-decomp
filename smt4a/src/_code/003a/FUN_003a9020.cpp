#include "shard/Shard003A.h"

extern "C" {

extern BtlStateB *btlGetMainState(void);
extern void scrSetResult(s32 value);

/* Script command: result is the battle's value at +0x4C72. */
u32 FUN_003a9020(void)
{
    scrSetResult(btlGetMainState()->unk4C72);
    return 1;
}

} /* extern "C" */
