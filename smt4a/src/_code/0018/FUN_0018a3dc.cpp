#include "common.h"

extern "C" {

void FUN_001a165c(u8 *object);
extern u8 DAT_00643380[];

/* Calls FUN_001a165c on the master manager at 0x643380. */
void FUN_0018a3dc(void)
{
    FUN_001a165c(DAT_00643380);
}

} /* extern "C" */
