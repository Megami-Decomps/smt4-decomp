/* The NPC rooms: data table 0x35, npc_room/NpcRoomTable.tbb, in both games (the table ids follow the
 * game's data-file list, NKMBaseTable.tbb = 0). Section 1 lists the room events (NpcRoomEventRecord),
 * each available while its required flags are set and its excluded flags clear. */
#ifndef GAMEDATA_NPCROOMTABLE_H
#define GAMEDATA_NPCROOMTABLE_H

#include "gamedata/DataTable.h"
#include <stddef.h>

/* One 0x54-byte row of NpcRoomTable.tbb table 1 (data table 0x35, section 1). */
struct NpcRoomEventRecord {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 npcId;                 /* whose portrait stands in the room */
    /* 0x04 */ u16 isDemon;               /* nonzero: a demon's portrait, else a character's */
    /* 0x06 */ s16 x;                     /* where the portrait stands: the two are added */
    union {
        /* 0x08 */ u16 value;
        /* 0x08 */ s16 xOffset;
    };
    /* 0x0A */ u16 group;                 /* events of one nonzero group share a display row */
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 layer;                  /* the portrait job's draw layer, counted from 3 */
    /* 0x0E */ u16 requiredFlagA;         /* 0 = none; else a game flag that must be set */
    /* 0x10 */ u16 requiredFlagB;
    /* 0x12 */ u16 excludedFlagA;         /* 0 = none; else a game flag that must be clear */
    /* 0x14 */ u16 excludedFlagB;
    /* 0x16 */ char label[0x3C];          /* the script entry the event starts at */
    /* 0x52 */ u8 param;                  /* passed to gameSaveWorkOrFlagMask with `id` */
    /* 0x53 */ u8 unk53;
};

typedef char NpcRoomEventRecordLayoutCheck[
    sizeof(NpcRoomEventRecord) == 0x54 &&
    offsetof(NpcRoomEventRecord, requiredFlagA) == 0x0E &&
    offsetof(NpcRoomEventRecord, group) == 0x0A && offsetof(NpcRoomEventRecord, layer) == 0x0D &&
    offsetof(NpcRoomEventRecord, excludedFlagA) == 0x12 &&
    offsetof(NpcRoomEventRecord, param) == 0x52 ? 1 : -1];

/* IV: a way out of a room, taken as the room opens when `requiredFlag` is set and `excludedFlag` (if any) is
 * clear: sequence 4 is requested with `sequence` and `name`. */
struct NpcRoomExitIV {
    /* 0x00 */ u16 requiredFlag;          /* 0 = unused */
    /* 0x02 */ u16 excludedFlag;
    /* 0x04 */ u16 sequence;
    /* 0x06 */ char name[0x12];
};

/* IV: one 0x6C-byte row of NpcRoomTable.tbb table 0 (data table 0x35, section 0): a room. */
struct NpcRoomRecordIV {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0x20];
    /* 0x22 */ u16 background;            /* 1-based row of data table 0x1A, which holds the background's image */
    /* 0x24 */ NpcRoomExitIV exits[3];
};

/* IV: one 0xD4-byte row of table 1 (section 1): an event of room `id`, available while its required flags
 * are set and its excluded flags clear. Its files are npc_room/n<id>/n<id>.mbm and .bf. */
struct NpcRoomEventRecordIV {
    /* 0x00 */ u16 id;
    /* 0x02 */ u16 npcId;                 /* whose portrait stands in the room */
    /* 0x04 */ u16 isDemon;               /* nonzero: a demon's portrait (FUN_00252190), else a character's */
    /* 0x06 */ s16 x;                     /* where the portrait stands: the two are added */
    /* 0x08 */ s16 xOffset;
    /* 0x0A */ u16 group;                 /* events of one nonzero group share a display row */
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 layer;                  /* the portrait job's draw layer, counted from 3 */
    /* 0x0E */ u16 requiredFlagA;         /* 0 = none; else a game flag that must be set */
    /* 0x10 */ u16 requiredFlagB;
    /* 0x12 */ u16 excludedFlagA;         /* 0 = none; else a game flag that must be clear */
    /* 0x14 */ u16 excludedFlagB;
    /* 0x16 */ char label[0xBE];          /* the script entry the event starts at */
};

typedef char NpcRoomRecordIVLayoutCheck[
    sizeof(NpcRoomExitIV) == 0x18 && sizeof(NpcRoomRecordIV) == 0x6C && offsetof(NpcRoomRecordIV, exits) == 0x24 &&
    sizeof(NpcRoomEventRecordIV) == 0xD4 && offsetof(NpcRoomEventRecordIV, requiredFlagA) == 0x0E &&
    offsetof(NpcRoomEventRecordIV, group) == 0x0A && offsetof(NpcRoomEventRecordIV, layer) == 0x0D &&
    offsetof(NpcRoomRecordIV, background) == 0x22 &&
    offsetof(NpcRoomEventRecordIV, label) == 0x16 ? 1 : -1];

#ifdef __cplusplus
/* Apocalypse: the first event for `id` whose required/excluded flag conditions hold. */
extern "C" NpcRoomEventRecord *dataTableFindMatching35(u32 id);

/* The rows of section 1 of `table` (dataTableGet(0x35, 1)). */
static inline NpcRoomEventRecord *npcRoomEventRecords(void *table)
{
    return static_cast<NpcRoomEventRecord *>(dataTableGetEntries(table));
}
#endif

#endif
