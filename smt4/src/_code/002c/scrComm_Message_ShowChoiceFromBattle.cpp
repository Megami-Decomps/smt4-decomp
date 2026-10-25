#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {


extern void scrShowChoiceInWindow(u32 messageWindow);

/* Script command: shows a choice from the battle's message window (scrShowChoiceInWindow). */
void scrComm_Message_ShowChoiceFromBattle(void)
{
    scrShowChoiceInWindow(btlGetMainState()->dialog.messageWindow);
}

} /* extern "C" */
