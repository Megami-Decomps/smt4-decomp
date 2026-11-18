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
    /* 0x02 */ u8 unk02[6];
    /* 0x08 */ u16 value;
    /* 0x0A */ u8 unk0A[4];
    /* 0x0E */ u16 requiredFlagA;         /* 0 = none; else a game flag that must be set */
    /* 0x10 */ u16 requiredFlagB;
    /* 0x12 */ u16 excludedFlagA;         /* 0 = none; else a game flag that must be clear */
    /* 0x14 */ u16 excludedFlagB;
    /* 0x16 */ u8 unk16[0x3C];
    /* 0x52 */ u8 param;                  /* passed to gameSaveWorkOrFlagMask with `id` */
    /* 0x53 */ u8 unk53;
};

typedef char NpcRoomEventRecordLayoutCheck[
    sizeof(NpcRoomEventRecord) == 0x54 &&
    offsetof(NpcRoomEventRecord, requiredFlagA) == 0x0E &&
    offsetof(NpcRoomEventRecord, excludedFlagA) == 0x12 &&
    offsetof(NpcRoomEventRecord, param) == 0x52 ? 1 : -1];

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
