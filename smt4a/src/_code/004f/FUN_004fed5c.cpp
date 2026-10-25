#include "battle/btlReflect.h"

extern "C" {


/* Creates reflection state 64 with its argument. */
void FUN_004fed5c(s32 id,u32 options,u32 argument){ReflectAction *entry=btlQueueReflectAction(g_btlActionReflect,(s16)id,0,options);entry->kind=64;entry->value=argument;}
}
