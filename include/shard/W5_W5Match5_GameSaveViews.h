#ifndef SHARD_W5_W5MATCH5_GAME_SAVE_VIEWS_H
#define SHARD_W5_W5MATCH5_GAME_SAVE_VIEWS_H

#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SaveSlotRecord.h"
#include <stddef.h>

struct SlotSortInfo {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 priority;
};

extern "C" {
SlotSortInfo *devilGetRecord(u16 entryId);
}

#ifdef __cplusplus
extern "C" {
#endif

void* asdMemoryAllocTraced(u32 memoryType, u32 unusedFirst, u32 unusedSecond);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 FUN_00182054(u8 arg0);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_00184b90(u8 *owner, s32 direction);

#ifdef __cplusplus
}
#endif

#endif
