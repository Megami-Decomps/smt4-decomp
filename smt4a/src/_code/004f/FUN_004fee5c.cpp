#include "battle/btlReflect.h"

extern "C" {

ReflectAction *FUN_004102d8(void *reflection,s32 id,u32 category,u32 options);
/* Creates reflection state 71 with two arguments. */
void FUN_004fee5c(s32 id,u32 options,u32 first,u32 second){ReflectAction *entry=FUN_004102d8(g_btlActionReflect,(s16)id,0,options);entry->kind=71;entry->first=first;entry->second=second;}
}
