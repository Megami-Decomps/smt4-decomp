#include "common.h"

extern "C" {

void handleSetState(u32 object, s32 mode);

/* Calls handleSetState with mode 4. */
void onlineJobSetStateRunning(u32 object)
{
    handleSetState(object, 4);
}

} /* extern "C" */
