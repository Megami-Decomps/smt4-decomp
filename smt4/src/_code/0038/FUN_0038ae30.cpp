/* NON_MATCHING: owner-aware allocator contract restored with retail's unset owner; list iterator/item and hidden status-result temporary layouts still differ from retail's 72-byte frame. */
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"
#include "AsdSDK/AsdDebugHooks.h"
#include "nn/Result.h"
#include "AsdSDK/Source/Sys/Mem/AsdOperatorNewB.h"

extern "C" {
extern AocMain *g_aocMain;

// A content entry as the loader walks it: 0x30 bytes, the count of u16 items at 0x28.
struct AocListEntry {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 itemCount;
    /* 0x2c */ u8 unk2c[4];
};

// One item the walk visits (0x18 bytes): its id and flags.
struct AocListItem {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[0xe];
    /* 0x10 */ u8 flags;
    /* 0x11 */ u8 unk11[7];
};

// The loader job: its status result sits at 0xc, the content entry index at 0x14.
struct AocListJob {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ WindowStatusResult result;
    /* 0x14 */ u32 entryIndex;
};

WindowStatusResult FUN_00354608(void *parameters, void *source);
void FUN_00234624(AocListEntry **entry, void *table, u32 index);
u32 FUN_00234618(AocListEntry **entry);
WindowStatusResult FUN_003df0c4(AocListEntry **entry, u8 *extra, AocListItem *item, s32 flag, u32 index);
WindowStatusResult FUN_003df4dc(void *handle, void *buffer, u32 count);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
u8 objGetFlagBit0(AocListItem *item);
int jyoucyuGetTableEntry(s32 index);
void asdOperatorDelete(void *ptr);

// Build the list of flagged item ids of the job's content entry and hand it to the file service.
void FUN_0038ae30(AocListJob *job)
{
    AocMain *aoc = g_aocMain;
    job->result = FUN_00354608((u8 *)aoc + 0x20, (u8 *)aoc + 0x18);
    if (nnResultIsFailure(legacyResourceIdRemap(&job->result))) {
        return;
    }
    AocListEntry *entry;
    FUN_00234624(&entry, aoc->contentTable, job->entryIndex);
    u32 itemCount = FUN_00234618(&entry);
    void *owner; // Retail forwards an uninitialised owner hint in r5.
    u16 *ids = (u16 *)asdOperatorNewB(itemCount * 2, owner);
    u32 kept = 0;
    if (ids != NULL) {
        for (u32 i = 0; i < itemCount; i++) {
            AocListItem item;
            u8 extra[8];
            job->result = FUN_003df0c4(&entry, extra, &item, 1, i);
            if (nnResultIsFailure(legacyResourceIdRemap(&job->result))) {
                legacyResourceIdRemap(&job->result);
                asdOperatorDelete(ids);
                asdDebugHookPtr(&entry);
                return;
            }
            if (objGetFlagBit0(&item)) {
                ids[kept++] = item.id;
            }
        }
        job->result = FUN_003df4dc((u8 *)aoc + 0x20, ids, kept);
        if (nnResultIsFailure(legacyResourceIdRemap(&job->result))) {
            legacyResourceIdRemap(&job->result);
            asdOperatorDelete(ids);
            asdDebugHookPtr(&entry);
            return;
        }
        jyoucyuGetTableEntry(0);
        asdOperatorDelete(ids);
    }
    asdDebugHookPtr(&entry);
}

} /* extern "C" */
