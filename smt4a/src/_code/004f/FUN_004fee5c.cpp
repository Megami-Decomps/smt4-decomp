#include "battle/btlReflect.h"

extern "C" {


/* Creates reflection state 71 with two arguments. */
void FUN_004fee5c(s32 id,u32 options,u32 first,u32 second){ReflectAction *entry=btlQueueReflectAction(g_btlActionReflect,(s16)id,0,options);entry->kind=71;entry->first=first;entry->second=second;}
}
