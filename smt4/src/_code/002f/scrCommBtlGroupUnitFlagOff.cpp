#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlEntry *btlMainFindActiveEntry(void);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern u32 btlScriptResolveGroupArg(void);
extern s32 FUN_002499fc(u32 group, s32 *start, s32 *count);

/* Script command: pushes whether a present, non-excluded unit of the current group (or the active entry) has flag
 * argument 0 off. */
u32 scrCommBtlGroupUnitFlagOff(void)
{
    u32 flag = scrGetArg(0);
    s32 start;
    s32 count;
    s32 index;

    scrGetArg(1);
    FUN_002499fc(btlScriptResolveGroupArg(), &start, &count);
    for (index = start; index < count + start; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if (!(unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && (unit->groupMask & (1 << (flag & 0xFF))) == 0) {
            scrSetResult(1);
            return 1;
        }
    }
    if (btlGetMainState()->hasActiveEntry != 0) {
        BtlEntry *active;

        btlGetMainState();
        active = btlMainFindActiveEntry();
        if (active != NULL && (active->groupMask & (1 << (flag & 0xFF))) == 0) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
