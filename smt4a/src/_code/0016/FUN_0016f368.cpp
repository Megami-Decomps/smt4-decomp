#include "common.h"

extern "C" {

void FUN_0016f33c(u8 *object);
extern u8 DAT_00643380[];

/* Calls FUN_0016f33c on the object at 0x643380. */
void FUN_0016f368(void)
{
    FUN_0016f33c(DAT_00643380);
}

} /* extern "C" */
