/* NON_MATCHING: retail unrolls the original-index lookup by two (peeled odd iteration), hoists -1 into fp and loads the 52-byte stride with count first; control flow, zeroing call and 100-entry cap match. */
#include "common.h"
#include <stddef.h>
#include <stdlib.h>
#include "gamedata/FlagsB.h"

struct RankedUnlockEntry {
    u16 id;
    u8 rank;
    u8 category;
    u8 unk04[0x2e];
    u16 requiredFlag;
};
struct RankedUnlockListWork {
    u8 unk000[0x20];
    RankedUnlockEntry *entries;
    u8 unk024[0x14];
    s32 entryCount;
    u8 unk03c[4];
    u8 hasNew;
    u8 unk041[0x5a5];
    s16 visibleIndices[100];
    u8 unk6ae[2];
    s32 visibleCount;
};
typedef char RankedUnlockOffsets[sizeof(RankedUnlockEntry) == 0x34 &&
    offsetof(RankedUnlockEntry, requiredFlag) == 0x32 &&
    offsetof(RankedUnlockListWork, visibleIndices) == 0x5e6 &&
    offsetof(RankedUnlockListWork, visibleCount) == 0x6b0 ? 1 : -1];

extern "C" {
void *asdOperatorNewD(u32);
void asdOperatorDeleteC(void *);
void rt_memclr(void *, u32);
void rt_memcpy(void *, const void *, u32);
s32 entryCompareByRank(const void *, const void *);
s32 gameFlagIsSet(u32);

void FUN_003f5bd8(RankedUnlockListWork *work, s32 count)
{
    work->visibleCount = 0;
    work->hasNew = 0;
    u32 bytes = count * sizeof(RankedUnlockEntry);
    RankedUnlockEntry *sorted = static_cast<RankedUnlockEntry *>(asdOperatorNewD(bytes));
    rt_memclr(sorted, bytes);
    rt_memcpy(sorted, work->entries, bytes);
    qsort(sorted, count, sizeof(RankedUnlockEntry), entryCompareByRank);
    for (s32 index = 0; index < count; ++index) {
        if (index >= 100)
            continue;
        const RankedUnlockEntry *entry = &sorted[index];
        const u16 id = entry->id;
        if (!id)
            continue;
        if (!flagsBGetBit0(id)) {
            if (entry->requiredFlag && !gameFlagIsSet(entry->requiredFlag))
                continue;
            flagsBSetStateBits(id);
        }
        if (flagsBGetBit1(id))
            work->hasNew = 1;
        s32 found = -1;
        for (s32 j = 0; j < work->entryCount; ++j) {
            if (work->entries[j].id == entry->id) {
                found = j;
                break;
            }
        }
        work->visibleIndices[work->visibleCount] = found;
        ++work->visibleCount;
    }
    asdOperatorDeleteC(sorted);
}
}
