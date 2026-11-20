#include "ui/MessageBannerSelection.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script command: open the banner with the money as its value and start its counter at argument 0. */
u32 FUN_003a69c0(void)
{
    u32 value = scrGetArg(0);
    messageBannerInitCounterInline(0, 0);
    panelSetTargetInline(value, 0);
    return 1;
}

} /* extern "C" */
