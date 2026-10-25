/* Checks whether any usable unit (or the fallback unit) has `value` in the stat slot selected by scrGetArg(1); always returns 1 and reports the result through scrSetResult. */
#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {


extern BtlEntry *btlMainFindActiveEntry(void);
extern s32 btlScriptResolveGroupArg(s32 group);
extern void FUN_002499fc(u32 owner, s32 *first, s32 *count);
extern s32 scrGetArg(s32 index);

u32 FUN_002f08d4(void)
{
    u32 owner;
    s32 slot;
    s32 kind;
    s32 value;
    s32 first;
    s32 count;
    s32 i;

    owner = btlScriptResolveGroupArg(scrGetArg(0));
    kind = scrGetArg(1);
    slot = 0;
    if (kind == 0) {
        slot = 7;
    } else if (kind == 1) {
        slot = 10;
    } else if (kind == 2) {
        slot = 11;
    }
    value = scrGetArg(2);
    FUN_002499fc(owner, &first, &count);
    for (i = first; i < first + count; i++) {
        BtlEntry *unit = &btlGetMainState()->entries[i];

        if ((unit->flags & 0x10) == 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && unit->stat[slot] == value) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *unit;

        btlGetMainState();
        unit = btlMainFindActiveEntry();
        if (unit != NULL && unit->stat[slot] == value) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

}
