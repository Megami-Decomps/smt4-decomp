#include "battle/btlReflect.h"
#include "battle/BtlMainAccess.h"

extern "C" {


/* Creates reflection state 6 with its argument. */
void FUN_004fea10(s32 id, s32 options, s32 argument){ReflectAction *entry=btlQueueReflectAction(g_btlActionReflect,(s16)id,0,options);entry->kind=6;entry->value=argument;}
}
