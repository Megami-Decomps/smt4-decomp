#include "battle/btlReflect.h"
extern "C" {


/* Create a reflected battle action of kind twenty-five. */
ReflectAction *FUN_00256898(s32 id,u32 argument) { ReflectAction *action=btlQueueReflectAction(g_btlActionReflect,(s16)id,0,argument); action->kind=25; return action; }
}
