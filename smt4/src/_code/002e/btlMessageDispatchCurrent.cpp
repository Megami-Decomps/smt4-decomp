#include "battle/BtlMainAccess.h"
#include "common.h"

namespace {
}

extern "C" {
u32 scrCommMessageDispatchWithTransition(u32 message, s32 mode);

/* Dispatches the current battle message using mode 5. */
u32 btlMessageDispatchCurrent(void)
{
    return scrCommMessageDispatchWithTransition(btlGetMainState()->dialog.messageWindow, 5);
}
}
