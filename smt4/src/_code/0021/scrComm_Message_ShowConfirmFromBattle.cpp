#include "common.h"
extern "C" {
struct BattleMessageState { u8 unk00[0x2234]; u32 message; };
BattleMessageState *btlGetMainState(void);
u32 scrCommMessageDispatchWithTransition(u32 message,s32 mode);
/* Dispatch the battle-selected message in confirmation mode. */
u32 scrComm_Message_ShowConfirmFromBattle(void) { return scrCommMessageDispatchWithTransition(btlGetMainState()->message,6); }
}
