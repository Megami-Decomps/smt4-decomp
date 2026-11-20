#include "ui/MessageBannerSelection.h"

extern "C" {

/* Starts the banner's countdown at `value` (panelSetMode3 with flag 0, inlined). */
s32 messageBannerStartCounter(u32 value)
{
    return panelSetMode3Inline(value, 0);
}

} /* extern "C" */
