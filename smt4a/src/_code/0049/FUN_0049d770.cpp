/* NON_MATCHING: r4/r5/r6 assignments for owner, row and record are permuted; qsort count/stride moves are also swapped. */
#include "shard/W5_W5Match6_CallbackController.h"
#include "gamedata/DataTable.h"
#include <stdlib.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
u8 flagsAtGetBit0(s32 id);
s32 gameFlagIsSet(u16 flag);
void flagsAtSetBits01(s32 id);
s32 FUN_0049ebf0(const void *left, const void *right);
void FUN_00203b40(GridNavigation *navigation, s32 count, s32 rows, s32 columns, s32 wrap, s32 alternateKeys);
u16 FUN_001643b4(u32 group, s32 image);
void FUN_00202400(void);
void FUN_0049d140(CallbackControllerWork *work, s32 state, s32 nextState);

void FUN_0049d770(CallbackControllerWork *work)
{
    if (work->bufferA == NULL || work->bufferB == NULL ||
        textureGetIndexedResource(51) == NULL || !asdTMTexTableNodeIsLoaded(51, 0))
        return;
    void *table = dataTableGet(70, 0);
    work->catalog.entries = static_cast<CallbackCatalogRecord *>(dataTableGetEntries(table));
    work->catalog.count = dataTableGetCount(table);
    s32 available = 0;
    for (u32 index = 0; index < work->catalog.count; ++index) {
        CallbackCatalogRecord *record = &work->catalog.entries[index];
        if (record != NULL && record->id != 0) {
            if (!flagsAtGetBit0(record->id)) {
                if (!gameFlagIsSet(record->unlockFlag))
                    continue;
                flagsAtSetBits01(record->id);
            }
            work->catalog.indices[available++] = (u16)index;
        }
    }
    work->catalog.availableCount = available;
    qsort(work->catalog.indices, available, sizeof(u16), FUN_0049ebf0);
    FUN_00203b40(&work->list.navigation, work->catalog.availableCount, 10, 1, 1, 1);
    work->list.rowState[0] = 0;
    work->list.rowState[1] = 0;
    work->list.rowState[2] = 0;
    for (s32 row = 0; row < 10; ++row) {
        if (work->catalog.availableCount <= row)
            break;
        work->list.touchRows[row] = FUN_001643b4(51, row + 93);
        ++work->touchRegionCount;
    }
    work->list.touchPrevious = FUN_001643b4(51, 88);
    work->list.touchNext = FUN_001643b4(51, 89);
    work->list.touchScroll = FUN_001643b4(51, 87);
    work->touchRegionCount += 3;
    FUN_00202400();
    FUN_0049d140(work, 1, 3);
}
}
