#include "common.h"
#include "shard/S3BtlMain.h"

extern "C" {

BtlMainState *btlGetMainState(void);
void FUN_002e4828(u32 owner);

/* Script command for the battle's script owner: forwards to FUN_002e4828, the function that follows it. */
void FUN_002e4810(void)
{
    FUN_002e4828(btlGetMainState()->scriptOwner);
}

} /* extern "C" */
