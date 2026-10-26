#ifndef SHARD_W5_W5MATCH5_GAME_SAVE_VIEWS_H
#define SHARD_W5_W5MATCH5_GAME_SAVE_VIEWS_H

#include "gamedata/GameData.h"
#include <stddef.h>

/* Apocalypse's work image follows the save header. */
struct GameSaveWork {
    /* 0x00000 */ u8 unk00[0x27E1E];
    /* 0x27E1E */ u8 state;
    /* 0x27E1F */ u8 unk27E1F[0x99];
    /* 0x27EB8 */ u8 flags[0x2864];
};

struct GameSaveImage {
    /* 0x00 */ u8 header[0x88];
    /* 0x88 */ GameSaveWork work;
};

struct SlotRecord {
    union {
        /* 0x00 */ u8 unk00[0x62];
        struct {
            u8 unk00BeforeStatus[0x60];
            /* 0x60 */ u16 mask;
        } status;
    };
    /* 0x62 */ u16 entryId;
    /* 0x64 */ u16 sortKey;
    /* 0x66 */ u8 unk66[0x5E];
};
typedef char SlotRecordStatusOffsetCheck[
    offsetof(SlotRecord, status.mask) == 0x60 &&
    sizeof(SlotRecord) == 0xC4 ? 1 : -1];

struct GameSlotEntry {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ SlotRecord record;
};

struct GameSlotTable {
    /* 0x00 */ u8 unk00[0x8C];
    /* 0x8C */ GameSlotEntry slots[1];
};

struct SlotSortInfo {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 priority;
};

extern "C" {
extern GameDataBlocksA g_gameDataBlocks;
SlotRecord *gameGetSlotRecord(s32 slotIndex);
SlotSortInfo *FUN_00184310(u16 entryId);
}

#ifdef __cplusplus
extern "C" {
#endif

void* FUN_00178b04(u32 memoryType, u32 unusedFirst, u32 unusedSecond);

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
