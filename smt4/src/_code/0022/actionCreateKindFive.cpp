#include "common.h"
extern "C" {
struct BattleAction { u32 unk00; u8 kind; u8 unk05[0x23]; u32 value; };
extern void *g_btlActionReflect;
BattleAction *btlQueueReflectAction(void *owner,s16 id,u32 mode,u32 argument);
/* Create an action of kind five and attach its supplied value. */
BattleAction *actionCreateKindFive(s32 id,u32 argument,u32 value) { BattleAction *action=btlQueueReflectAction(g_btlActionReflect,(s16)id,0,argument); action->kind=5; action->value=value; return action; }
}
