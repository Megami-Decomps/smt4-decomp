#include "common.h"

extern "C" {

void handleSetState(u32 object, s32 mode);

/* Calls handleSetState with mode 5. */
void FUN_00120896(u32 object)
{
    handleSetState(object, 5);
}

} /* extern "C" */
