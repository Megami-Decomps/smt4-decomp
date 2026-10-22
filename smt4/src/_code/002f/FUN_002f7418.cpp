#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlState *btlGetMainState(void);
extern BtlUnitEntry *btlMainFindActiveEntry(BtlState *state);
extern s32 scrGetArg(s32 index);
extern void scrSetResult(s32 value);
extern u32 btlScriptResolveGroupArg(void);
extern void FUN_002499fc(u32 group, s32 *first, s32 *count);

/* Script command: pushes 1 when a live unit of the current group (or the active entry) has kind
 * 1 in its slot argument 0, else 0; returns 1. */
s32 FUN_002f7418(void)
{
    s32 slot = scrGetArg(0);
    s32 first;
    s32 count;
    s32 i;

    scrGetArg(1);
    FUN_002499fc(btlScriptResolveGroupArg(), &first, &count);
    for (i = first; i < first + count; i++) {
        BtlUnitEntry *unit = &btlGetMainState()->units[i];

        if ((unit->flags & 0x10) == 0 && (unit->flags & 1) != 0 && (unit->flags & 0x40) == 0
            && unit->values[slot] >> 10 == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlUnitEntry *active = btlMainFindActiveEntry(btlGetMainState());

        if (active != NULL && active->values[slot] >> 10 == 1) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
