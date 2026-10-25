#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

void scrCommMessageShowPlainBody(u32 owner);

/* Script command for the battle's script owner: forwards to scrCommMessageShowPlainBody, the function that follows it. */
void scrCommBtlMessageShowPlainBody(void)
{
    scrCommMessageShowPlainBody(btlGetMainState()->commandMessage.auxiliaryMessage);
}

} /* extern "C" */
