#include "common.h"

extern "C" {

void handleSetState(u32 object, s32 mode);

/* Calls handleSetState with mode 3. */
void FUN_002e6e50(u32 object)
{
    handleSetState(object, 3);
}

} /* extern "C" */
