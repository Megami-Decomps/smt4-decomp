#include "ui/MessageBannerSelection.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script command: open the banner with the money as its value and start its counter at the message id from argument 0. */
u32 FUN_00321b9c(void)
{
    u32 messageId = scrGetArg(0);
    messageBannerInitSelectionInline(0, 0);
    messageTargetSetValueInline(messageId, 0);
    return 1;
}

} /* extern "C" */
