#include "battle/BtlMainAccess.h"
#include "common.h"
extern "C" {
struct BattleMessageState { u8 unk00[0x2234]; u32 message; };
u32 scrCommMessageDispatchWithTransition(u32 message,s32 mode);
/* Dispatch the battle-selected message in confirmation mode. */
u32 scrComm_Message_ShowConfirmFromBattle(void) { return scrCommMessageDispatchWithTransition(reinterpret_cast<BattleMessageState *>(btlGetMainState())->message,6); }
}
