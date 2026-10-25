#include "battle/BtlMainAccess.h"
#include "common.h"
extern "C" {
u32 scrCommMessageDispatchWithTransition(u32 message,s32 mode);
/* Dispatch the battle-selected message in confirmation mode. */
u32 scrComm_Message_ShowConfirmFromBattle(void) { return scrCommMessageDispatchWithTransition(btlGetMainState()->dialog.messageWindow,6); }
}
