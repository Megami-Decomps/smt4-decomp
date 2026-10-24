#include "common.h"
#include "shard/S3BtlMain.h"

extern "C" {

BtlMainState *btlGetMainState(void);
void scrCommShowMessage(u32 owner, u32 kind);

/* Script command for the battle's script owner: shows a message of kind 6 through scrCommShowMessage, the function that follows it. */
void FUN_002e48a8(void)
{
    scrCommShowMessage(btlGetMainState()->scriptOwner, 6);
}

} /* extern "C" */
