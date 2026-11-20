#include "ui/MessageBannerSelection.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script command: open the banner message window with the text id from argument 0. */
u32 FUN_00310730(void)
{
    u32 textId = scrGetArg(0);
    messageBannerInitSelectionInline(0, 0);
    messageTargetSetValueInline(textId, 0);
    return 1;
}

} /* extern "C" */
