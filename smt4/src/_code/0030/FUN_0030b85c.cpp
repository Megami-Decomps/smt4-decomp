#include "common.h"

extern "C" {
s32 FUN_0024b96c();
s32 messageAuxDispatch(s32 mode, s32 value);
/* Forwards the current selection to its handler. */
s32 FUN_0030b85c()
{
    return messageAuxDispatch(0, FUN_0024b96c());
}
}
