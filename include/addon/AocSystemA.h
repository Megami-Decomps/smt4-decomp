/* The add-on content (AOC) system, g_aocSystem (Apocalypse layout, 0x470 bytes; Shin Megami Tensei IV's
 * is AocSystem in addon/AocSystem.h). The two share their layout up to 0x424, except for the content
 * table's entry size. Included by Apocalypse units only. */
#ifndef ADDON_AOCSYSTEMA_H
#define ADDON_AOCSYSTEMA_H

#include "common.h"
#include <stddef.h>
#include "gamedata/DataTable42Record.h"
#include "addon/AocPackage.h"
#include "shard/W6_W6Match5_QueuedRequest.h"

struct NkmBaseRecord;
struct NkmEnemyRecordA;
struct AocLookupRecord;
struct AocTableSearchRecordA;
struct EntryState;

/* One entry of the content table in Apocalypse: an id and 0x40 bytes of data. */
typedef struct AocEntryA {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 data[0x40];
} AocEntryA;

typedef struct AocSystemA {
    /* The request waiting on the content system (_ZN10AocSystemA17getPendingRequestEv). */
    RequestParameters getPendingRequest();

    /* 0x000 */ u8 unk000[0x310];
    /* 0x310 */ s32 packageCount;
    /* 0x314 */ u32 packageHandle;      /* nonzero while packages are mounted */
    /* 0x318 */ AocPackage *packages;
    /* 0x31C */ RequestParameters mountResult; /* what the mount thread ended with (FUN_00471adc) */
    /* 0x330 */ u8 requestPending;
    /* 0x331 */ u8 unk331[0x13];
    /* 0x344 */ u32 state;              /* the mount's step (aocSystemMountStep) */
    /* 0x348 */ u8 unk348[8];
    /* 0x350 */ s32 unk350;             /* failed mounts so far; the third one is not retried */
    /* 0x354 */ s32 loadIndex;          /* the package whose files are being loaded */
    /* 0x358 */ s32 loadStep;           /* 0: request that package's files, 1: wait for them */
    /* 0x35C */ u32 devilCount;
    /* 0x360 */ NkmBaseRecord *devils;
    /* 0x364 */ u32 table00Count;
    /* 0x368 */ NkmEnemyRecordA *table00Records;
    /* 0x36C */ u8 unk36C[8];
    /* 0x374 */ u32 table01Count;
    /* 0x378 */ AocLookupRecord *table01Records;
    /* 0x37C */ u8 unk37C[8];
    /* 0x384 */ u32 table1bCount;
    /* 0x388 */ AocTableSearchRecordA *table1bRecords;
    /* 0x38C */ u32 entryCount;
    /* 0x390 */ AocEntryA *entries;
    /* 0x394 */ u8 unk394[8];
    /* 0x39C */ AocRecordTable table08[6]; /* data table 8, sections 0-5 */
    /* 0x3E4 */ AocRecordList table23[8];  /* data table 0x23, sections 0-7 */
    /* 0x424 */ u8 unk424[0x20];
    /* 0x444 */ s32 stateCount;             /* the package files of kind 0x33 (FUN_004715a8) */
    /* 0x448 */ s32 itemCount;              /* the package files of one kind (FUN_00471d94) */
    /* 0x44C */ EntryState *states;
    /* 0x450 */ AocPackageFile *items;
    /* 0x454 */ u8 unk454[0xC];
    /* 0x460 */ s32 aiDemonId;              /* the demon whose add-on AI script is in use, -1 when none */
    /* 0x464 */ u32 phase;
    /* 0x468 */ s32 waitFrames;         /* frames the mount thread's start has been held back */
    /* 0x46C */ u8 unk46C[4];
} AocSystemA;

typedef char AocSystemALayoutCheck[sizeof(AocSystemA) == 0x470 &&
    offsetof(AocSystemA, packageCount) == 0x310 && offsetof(AocSystemA, packages) == 0x318 &&
    offsetof(AocSystemA, requestPending) == 0x330 && offsetof(AocSystemA, devils) == 0x360 &&
    offsetof(AocSystemA, table00Records) == 0x368 && offsetof(AocSystemA, table01Records) == 0x378 &&
    offsetof(AocSystemA, table1bCount) == 0x384 && offsetof(AocSystemA, entries) == 0x390 &&
    offsetof(AocSystemA, table08[3].records) == 0x3C4 && offsetof(AocSystemA, table23[4].count) == 0x404 &&
    offsetof(AocSystemA, table23[7].records) == 0x420 && offsetof(AocSystemA, stateCount) == 0x444 && offsetof(AocSystemA, itemCount) == 0x448 &&
    offsetof(AocSystemA, states) == 0x44C &&
    offsetof(AocSystemA, items) == 0x450 && offsetof(AocSystemA, aiDemonId) == 0x460 &&
    offsetof(AocSystemA, phase) == 0x464 ? 1 : -1];

extern "C" AocSystemA *g_aocSystem;

extern "C" {
u32 groupedFileTablesCountRecordsOfKind(AocSystemA *system, s32 kind, u32 tableIndex);
DataTable42Record *dataArchiveGetMergedRecord(AocSystemA *system, s32 index);
void aocActivateFileGroupFlags(AocSystemA *system);
s32 aocCountPackageItemsOfType(AocSystemA *system, s32 type);
void aocReleasePackageOwner(AocSystemA *system);
s32 aocPackageGrantsItem(AocSystemA *system, u32 itemId, s32 checkAvailable);
u32 aocContentLookupSucceeds(AocSystemA *system, u32 id);
AocPackageDirectoryEntry *packageFindRecordByName(AocSystemA *system, s32 kind, u32 key);
AocPackageFile *packageFindFileRefByName(AocSystemA *system, s32 kind, u32 key);
u8 aocDataBlockHasEntries(u32 a, s32 b);
u8 aocHasType36(AocSystemA *system, u32 id);
u32 aocReadyAndAccepts(AocSystemA *system, u32 id);
void aocReleaseObjectBufferAndFlag(void *object);
}

#endif
