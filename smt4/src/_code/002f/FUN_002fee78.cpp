#include "common.h"
#include "battle/BtlMainAccess.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "script/ScriptArgs.h"

extern "C" {


extern s32 scrGetArg(s32 index);

/* Script command: result is 1 when a live entry with the given id has the compared parameter
 * (kind 0, 1 or 2 selects it) equal to the third argument. */
s32 FUN_002fee78(void)
{
    s32 id = scrGetArg(0);
    s32 kind = scrGetArg(1);
    s32 index = 0;
    s32 value;
    s32 i;

    if (kind == 0) {
        index = 7;
    } else if (kind == 1) {
        index = 10;
    } else if (kind == 2) {
        index = 11;
    }
    value = scrGetArg(2);
    for (i = 0; i < 0x6d; i++) {
        BtlEntry *entry = &btlGetMainState()->entries[i];

        if ((entry->flags & 0x10) != 0 && (entry->flags & 1) != 0 && (entry->flags & 0x40) == 0
            && entry->id == id && entry->stat[index] == value) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
