#include "common.h"

extern "C" {
s32 btlGetActiveShareRating();
s32 messageAuxDispatch(s32 mode, s32 value);
/* Forwards the current selection to its handler. */
s32 FUN_0030b85c()
{
    return messageAuxDispatch(0, btlGetActiveShareRating());
}
}
