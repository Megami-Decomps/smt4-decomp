#include "common.h"
extern "C" {
struct BattleAction { u32 unk00; u8 kind; };
extern void *g_btlActionReflect;
BattleAction *FUN_0022699c(void *owner,s16 id,u32 mode,u32 argument);
/* Create a reflected battle action of kind forty-six. */
BattleAction *FUN_0023c5c0(s32 id,u32 argument) { BattleAction *action=FUN_0022699c(g_btlActionReflect,(s16)id,0,argument); action->kind=46; return action; }
}
