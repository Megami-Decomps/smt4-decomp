#include "battle/btlReflect.h"

extern "C" {


/* Creates reflection state 72. */
void FUN_004fecd4(s32 id,u32 options) { ReflectAction *entry=btlQueueReflectAction(g_btlActionReflect,(s16)id,0,options);entry->kind=72; }
}
