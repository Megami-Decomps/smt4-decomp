#include "common.h"
#include "shard/S3BtlMain.h"

extern "C" {

BtlMainState *btlGetMainState(void);
void scrCommMessageShowPlainBody(u32 owner);

/* Script command for the battle's script owner: forwards to scrCommMessageShowPlainBody, the function that follows it. */
void FUN_002e4810(void)
{
    scrCommMessageShowPlainBody(btlGetMainState()->scriptOwner);
}

} /* extern "C" */
