/* NON_MATCHING: ARMCC keeps the three-choice loop instead of retail's unrolled checks. */
/* Selects a random nonempty demon id from a record's choices and the battle's extra table. */
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"
#include "gamedata/Table00.h"

extern "C" {
BtlMainStateA *btlGetMainState(void);
void *btlGetTable(BtlMainStateA *state, u32 section);
Table00Record *dataTable00FindById(u32 id);
u32 scrGetArg(u32 index);
void scrSetResult(u32 result);
void sysMemClear(void *memory, u32 size);
s32 randRange(u32 maximum);

u32 FUN_003b8d18(void)
{
    Table00Record *record = dataTable00FindById((u16)scrGetArg(0));
    u32 candidates[128];
    sysMemClear(candidates, sizeof(candidates));
    u8 count = 0;
    for (u32 i = 0; i < 3; ++i) {
        u16 id = record->choices[i].value;
        if (id != 0x7B6 && id != 0) {
            candidates[count++] = id;
        }
    }
    void *table = btlGetTable(btlGetMainState(), 0x10);
    u16 *entries = (u16 *)dataTableGetEntries(table);
    s32 remaining = (s32)dataTableGetCount(table);
    while (remaining > 0) {
        if (*entries != 0) {
            candidates[count++] = *entries;
        }
        --remaining;
        ++entries;
    }
    scrSetResult(candidates[randRange((u16)(count - 1))]);
    return 1;
}
}
