#include "battle/BtlMainAccess.h"
#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {

int FUN_002499fc(u32 a, int *first, int *count);
int scrGetArg(int index);
extern BtlEntry *btlMainFindActiveEntry(void);
extern s32 btlScriptResolveGroupArg(s32 group);

/* Script command: result 1 when a living, visible unit in the current group (or the extra unit) has state 4 in the status slot given by argument 0. */
u32 scrCommBattleHasAffectedGroupUnit(void)
{
    int slot = scrGetArg(0);
    int first;
    int count;
    int i;
    u32 group;
    BtlEntry *unit;
    BtlEntry *extra;

    group = btlScriptResolveGroupArg(scrGetArg(1));
    FUN_002499fc(group, &first, &count);
    i = first;
    if (first < count + first) {
        do {
            unit = &btlGetMainState()->entries[i];
            if (((((unit->flags & 0x10) == 0) && ((unit->flags & 1) != 0)) && ((unit->flags & 0x40) == 0)) &&
                (unit->values[slot] >> 10 == 4)) {
                scrSetResult(1);
                return 1;
            }
            i = i + 1;
        } while (i < first + count);
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        btlGetMainState();
        extra = btlMainFindActiveEntry();
        if ((extra != NULL) && (extra->values[slot] >> 10 == 4)) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
