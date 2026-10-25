#include "common.h"
struct ReflectionEntry {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u8 state;
    /* 0x5 */ u8 unk5[35];
    /* 0x28 */ u32 first;
    /* 0x2C */ u8 unk2C[32];
    /* 0x4C */ u32 second;
};
extern "C" {
extern void *g_btlActionReflect;
ReflectionEntry *FUN_004102d8(void *reflection,s32 id,u32 category,u32 options);
/* Creates reflection state 25 with two arguments. */
ReflectionEntry *btlReflectCreateKind19(s32 id,u32 options,u32 first,u32 second){ReflectionEntry *entry=FUN_004102d8(g_btlActionReflect,(s16)id,0,options);entry->state=25;entry->first=first;entry->second=second;return entry;}
}
