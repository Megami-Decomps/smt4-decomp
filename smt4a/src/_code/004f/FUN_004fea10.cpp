#include "common.h"
struct ReflectionEntry {u8 unk00[4];u8 state;u8 unk05[35];u32 argument;};
extern "C" {
extern void *g_btlActionReflect;
ReflectionEntry *FUN_004102d8(void *reflection,s32 id,u32 category,u32 options);
/* Creates reflection state 6 with its argument. */
void FUN_004fea10(s32 id,u32 options,u32 argument){ReflectionEntry *entry=FUN_004102d8(g_btlActionReflect,(s16)id,0,options);entry->state=6;entry->argument=argument;}
}
