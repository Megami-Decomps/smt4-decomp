#include "common.h"

extern "C" {

void FUN_00158e6c(u8 *object);
extern u8 DAT_00643100[];

/* Calls FUN_00158e6c on the object at 0x643100. */
void FUN_00146c28(void)
{
    FUN_00158e6c(DAT_00643100);
}

} /* extern "C" */
