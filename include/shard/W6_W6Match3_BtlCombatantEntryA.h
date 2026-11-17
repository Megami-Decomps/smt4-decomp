#ifndef SHARD_W6_W6MATCH3_BTL_COMBATANT_ENTRY_A_H
#define SHARD_W6_W6MATCH3_BTL_COMBATANT_ENTRY_A_H

#include "common.h"
#include "battle/BtlEntryA.h"

extern "C" {
u8 hasAnyOf3DC2(u32 mask);
}

#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_004c6c8c(u32 unused,s32 first,s32 second,s32 adjustment,f32 value,f32 unused1,f32 unused2,f32 scale);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 partyFindSlotById(u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 entryDefIsAvailable(void *unused, u16 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 btlFindEntryValue(s32 id, u32 index);

#ifdef __cplusplus
}
#endif

#endif
