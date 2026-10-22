#include "battle/btlReflect.h"
extern "C" {

ReflectAction *btlQueueReflectAction(void *owner,s16 id,u32 mode,u32 argument);
/* Create a reflected battle action of kind forty-six. */
ReflectAction *FUN_0023c5c0(s32 id,u32 argument) { ReflectAction *action=btlQueueReflectAction(g_btlActionReflect,(s16)id,0,argument); action->kind=46; return action; }
}
