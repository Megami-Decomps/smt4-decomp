#include "ui/MessageBannerSelection.h"

extern "C" {

/* Starts the banner's countdown at `value` (messageBannerSetCountdown with flag 0, inlined). */
s32 messageSetTargetState(u32 value)
{
    return messageBannerSetCountdownInline(value, 0);
}

} /* extern "C" */
