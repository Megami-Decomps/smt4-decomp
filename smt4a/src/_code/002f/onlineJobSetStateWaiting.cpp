#include "common.h"

extern "C" {

void handleSetState(u32 object, s32 mode);

/* Calls handleSetState with mode 2. */
void onlineJobSetStateWaiting(u32 object)
{
    handleSetState(object, 2);
}

} /* extern "C" */
