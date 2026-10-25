#include "battle/BtlMainAccess.h"
#include "common.h"
extern "C" {
struct BattleMessageState { u8 unk00[0x2234]; u32 message; };
u32 FUN_0024b96c(void);
u32 messageAuxDispatch(u32 message,u32 name);
/* Show the battle message with the current speaker name. */
u32 scrComm_Message_ShowNamedFromBattle(void) { u32 message=reinterpret_cast<BattleMessageState *>(btlGetMainState())->message; return messageAuxDispatch(message,FUN_0024b96c()); }
}
