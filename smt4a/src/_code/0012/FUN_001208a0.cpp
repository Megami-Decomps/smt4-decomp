#include "common.h"

extern "C" {

void handleSetState(u32 object, s32 mode);

/* Calls handleSetState with mode 0. */
void FUN_001208a0(u32 object)
{
    handleSetState(object, 0);
}

} /* extern "C" */
