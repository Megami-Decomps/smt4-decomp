#include "common.h"
extern "C" {
struct BattleAction { u32 unk00; u8 kind; u8 unk05[0x23]; u32 first; u8 unk2C[0x20]; u32 second; };
extern void *g_btlActionReflect;
BattleAction *btlQueueReflectAction(void *owner,s16 id,u32 mode,u32 argument);
/* Create action seventeen with both supplied argument words. */
BattleAction *actionCreateKindSeventeen(s32 id,u32 argument,u32 first,u32 second) { BattleAction *action=btlQueueReflectAction(g_btlActionReflect,(s16)id,0,argument); action->kind=17; action->first=first; action->second=second; return action; }
}
