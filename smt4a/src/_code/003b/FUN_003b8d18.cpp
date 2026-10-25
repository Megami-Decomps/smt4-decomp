/* NON_MATCHING: the three choices are now unrolled as in retail; only the id/constant register assignment differs (retail ldrh r1 / constant r0). */
/* Selects a random nonempty demon id from a record's choices and the battle's extra table. */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "gamedata/DataTable.h"
#include "battle/BtlTables.h"
#include "gamedata/Table00.h"
#include "gamedata/Table00Lookup.h"

extern "C" {
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
    u16 id = record->choices[0].value;
    if (id != 0x7B6 && id != 0) {
        candidates[count++] = id;
    }
    id = record->choices[1].value;
    if (id != 0x7B6 && id != 0) {
        candidates[count++] = id;
    }
    id = record->choices[2].value;
    if (id != 0x7B6 && id != 0) {
        candidates[count++] = id;
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
