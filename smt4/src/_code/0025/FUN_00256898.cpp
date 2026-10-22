#include "battle/btlReflect.h"
extern "C" {

ReflectAction *FUN_0022699c(void *owner,s16 id,u32 mode,u32 argument);
/* Create a reflected battle action of kind twenty-five. */
ReflectAction *FUN_00256898(s32 id,u32 argument) { ReflectAction *action=FUN_0022699c(g_btlActionReflect,(s16)id,0,argument); action->kind=25; return action; }
}
