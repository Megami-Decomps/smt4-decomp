#include "gamedata/DevilRecord.h"
#include "gamedata/DataTable.h"

struct BtlMainState;
extern "C" {
u32 scrGetArg(u32 index);
void scrSetResult(u32 value);
DevilRecord* dataTable00FindById(u16 id);
void memClear(void* memory, u32 size);
BtlMainState* btlGetMainState(void);
void* btlMainGetDataTable(BtlMainState* battle, u32 index);
u32 randNextInRange(u32 maximum);

// Choose one nonzero record choice or battle-table candidate with equal probability.
u32 btlChooseRandomRecordCandidate(void)
{
    const DevilRecord* record = dataTable00FindById((u16)scrGetArg(0));
    u32 candidates[128];
    memClear(candidates, sizeof(candidates));
    u8 count = 0;
    for (s32 i = 0; i < 3; ++i) {
        u16 value = record->randomChoices.entries[i].value;
        if (value != 0) {
            candidates[count++] = value;
        }
    }
    void* table = btlMainGetDataTable(btlGetMainState(), 16);
    const u16* entries = static_cast<const u16*>(dataTableGetEntries(table));
    s32 remaining = (s32)dataTableGetCount(table);
    for (; remaining > 0; --remaining, ++entries) {
        u16 value = *entries;
        if (value != 0) {
            candidates[count++] = value;
        }
    }
    scrSetResult(candidates[randNextInRange((u16)(count - 1))]);
    return 1;
}
}
