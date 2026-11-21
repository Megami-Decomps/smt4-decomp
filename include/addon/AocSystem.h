/* The add-on content (AOC) system, g_aocSystem (Shin Megami Tensei IV layout, 0x450 bytes; Apocalypse's
 * is AocSystemA in addon/AocSystemA.h). It lists the enumerated add-on contents and their mounted
 * packages, and holds the records the packages add to the game's data tables, which the data-table
 * getters search before the base tables. Included by Shin Megami Tensei IV units only. */
#ifndef ADDON_AOCSYSTEM_H
#define ADDON_AOCSYSTEM_H

#include "common.h"
#include <stddef.h>
#include "gamedata/DataTable42Record.h"
#include "addon/AocPackage.h"
#include "shard/W6_W6Match5_QueuedRequest.h"

struct NkmBaseRecord;
struct NkmEnemyRecord;
struct AocLookupRecord;
struct AocTableSearchRecord;
struct QuestRecord;

/* One entry of the content table: an id and 0x50 bytes of data. */
typedef struct AocEntry {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 data[0x50];
} AocEntry;

typedef struct AocSystem {
    /* The request waiting on the content system (_ZN9AocSystem17getPendingRequestEv). */
    RequestParameters getPendingRequest();

    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 packageCount;
    /* 0x314 */ u32 packageHandle;      /* nonzero while packages are mounted */
    /* 0x318 */ AocPackage *packages;
    /* 0x31C */ u8 unk31C[0x14];
    /* 0x330 */ u8 requestPending;
    /* 0x331 */ u8 unk331[0x1F];
    /* 0x350 */ u32 unk350;
    /* 0x354 */ u8 unk354[8];
    /* 0x35C */ u32 devilCount;
    /* 0x360 */ NkmBaseRecord *devils;
    /* 0x364 */ u32 table00Count;
    /* 0x368 */ NkmEnemyRecord *table00Records;
    /* 0x36C */ u8 unk36C[8];
    /* 0x374 */ u32 table01Count;
    /* 0x378 */ AocLookupRecord *table01Records;
    /* 0x37C */ u8 unk37C[8];
    /* 0x384 */ u32 table1bCount;
    /* 0x388 */ AocTableSearchRecord *table1bRecords;
    /* 0x38C */ u32 entryCount;
    /* 0x390 */ AocEntry *entries;
    /* 0x394 */ u32 questCount;
    /* 0x398 */ QuestRecord *quests;
    /* 0x39C */ AocRecordTable table08[6];  /* data table 8, sections 0-5 */
    /* 0x3E4 */ AocRecordList table23[8];   /* data table 0x23, sections 0-7 */
    /* 0x424 */ u8 unk424[0x10];
    /* 0x434 */ AocRecordList skills;          /* data table 4, section 0 (0x68-byte SkillDataRecord rows) */
    /* 0x43C */ AocRecordList table43C;        /* 0x3C-byte rows sorted by the id at 0x20 */
    /* 0x444 */ s32 aiDemonId;              /* the demon whose add-on AI script is in use, -1 when none */
    /* 0x448 */ u32 phase;
    /* 0x44C */ u8 unk44C[4];
} AocSystem;

typedef char AocSystemLayoutCheck[sizeof(AocSystem) == 0x450 &&
    offsetof(AocSystem, packageCount) == 0x310 && offsetof(AocSystem, packages) == 0x318 &&
    offsetof(AocSystem, requestPending) == 0x330 && offsetof(AocSystem, devils) == 0x360 &&
    offsetof(AocSystem, table00Records) == 0x368 && offsetof(AocSystem, table01Records) == 0x378 &&
    offsetof(AocSystem, table1bCount) == 0x384 && offsetof(AocSystem, entries) == 0x390 &&
    offsetof(AocSystem, quests) == 0x398 && offsetof(AocSystem, table08[3].records) == 0x3C4 &&
    offsetof(AocSystem, table23[4].count) == 0x404 && offsetof(AocSystem, table23[7].records) == 0x420 &&
    offsetof(AocSystem, skills) == 0x434 && offsetof(AocSystem, table43C) == 0x43C &&
    offsetof(AocSystem, aiDemonId) == 0x444 && offsetof(AocSystem, phase) == 0x448 ? 1 : -1];

extern "C" AocSystem *g_aocSystem;

extern "C" {
u32 groupedFileTablesCountRecordsOfKind(AocSystem *system, s32 kind, u32 tableIndex);
DataTable42Record *dataArchiveGetMergedRecord(AocSystem *system, s32 index);
void aocActivateFileGroupFlags(AocSystem *system);
u8 *aocFindPackageTable22Record(AocSystem *system, s32 id);
void *aocFindQuestPayloadById(AocSystem *system, s32 id);
/* The payload after the id of the first record `id` in a loaded package's kind-0x21 tables (section 1), or NULL. */
const char *aocFindDisplayNameOverrideText(AocSystem *system, s32 id);
void aocReleasePackageOwner(AocSystem *system);
u32 aocContentLookupSucceeds(AocSystem *system, u32 id);
AocPackageDirectoryEntry *packageFindRecordByName(AocSystem *system, s32 kind, u32 key);
AocPackageFile *packageFindFileRefByName(AocSystem *system, s32 kind, u32 key);
}

#endif
