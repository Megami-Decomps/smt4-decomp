/* NON_MATCHING: compiler merges lifecycle and resource owner pointers, changing saved-register allocation. */
#include "ui/HunterDatabaseWork.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
extern "C" {
extern HunterDatabaseWork *DAT_0057f244;
extern void *g_aocSystem;
void ifTouchRegionRemove(void);
void asdMemFreeSlot(u32 slot);
void asdTMTexTableReleaseNode(u32 table, s32 node);
void asdMemFree(void *memory);
void loadedRecordTableClear(void *system);
void jobStop(u32 job, s32 flags);
void asdOperatorDelete(void *object);

// Release the database UI's touch regions, sprite slots, tables and message buffers.
void FUN_003b01e8(void)
{
    HunterDatabaseWork *work = DAT_0057f244;
    for (s32 index = 0; index < work->touch.touchRegionCount; ++index)
        ifTouchRegionRemove();
    for (s32 index = 0; index < 6; ++index) {
        asdMemFreeSlot(work->sprites[index]);
        work->sprites[index] = 0;
    }
    for (s32 index = 0; index < 2; ++index) {
        if (work->acquiredTables[index]) {
            u32 table;
            switch ((u8)index) {
            case 0: table = 1; break;
            case 1: table = 15; break;
            default: table = 0xFFFFFFFF; break;
            }
            asdTMTexTableFreeEntry(table);
            work->acquiredTables[index] = 0;
        }
    }
    for (s32 index = 0; index < 2; ++index)
        asdTMTexTableReleaseNode(50, index);
    asdTMTexTableFreeEntry(50);
    if (work->messages) {
        asdMemFree((void *)work->messages);
        work->messages = 0;
    }
    if (work->helpMessages) {
        asdMemFree((void *)work->helpMessages);
        work->helpMessages = 0;
    }
    loadedRecordTableClear(g_aocSystem);
    jobStop(work->lifecycle.job, 0);
    if (DAT_0057f244 != NULL) {
        asdOperatorDelete(DAT_0057f244);
        DAT_0057f244 = NULL;
    }
}
}
