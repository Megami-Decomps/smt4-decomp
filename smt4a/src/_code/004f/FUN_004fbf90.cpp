#include "battle/btlReflect.h"

extern "C" {

ReflectAction *FUN_004102d8(void *reflection,s32 id,u32 category,u32 options);
/* Creates reflection state 58. */
void FUN_004fbf90(s32 id,u32 options) { ReflectAction *entry=FUN_004102d8(g_btlActionReflect,(s16)id,0,options);entry->kind=58; }
}
