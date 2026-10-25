#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

void scrCommShowMessage(u32 owner, u32 kind);

/* Script command for the battle's script owner: shows a message of kind 6 through scrCommShowMessage, the function that follows it. */
void FUN_002e48a8(void)
{
    scrCommShowMessage(btlGetMainState()->commandMessage.auxiliaryMessage, 6);
}

} /* extern "C" */
