#include "battle/btlReflect.h"

extern "C" {


/* Creates reflection state 34. */
void FUN_004feecc(s32 id,u32 options) { ReflectAction *entry=btlQueueReflectAction(g_btlActionReflect,(s16)id,0,options);entry->kind=34; }
}
