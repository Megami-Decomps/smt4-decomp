#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern BtlState *btlGetMainState(void);
extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern s32 FUN_0029bcf0(u32 id);

/* Script command: pushes the main-list index of the live battle unit linked to the id in argument 0, or 0x6D plus the
 * result of FUN_0029bcf0 when no unit has it, -1 when that fails too. */
u32 scrCommBtlUnitMainIndexById(void)
{
    u32 id = scrGetArg(0);
    s32 result = -1;
    s32 index = 0;

    for (;;) {
        BtlUnitEntry *unit = &btlGetMainState()->units[index];

        if ((unit->flags & 1) && !(unit->flags & 0x40) && (unit->flags & 8) && unit->mainIndex >= 0
            && unit->link != NULL && unit->link->id == id) {
            result = unit->mainIndex;
            break;
        }
        index++;
        if (index >= 0x6D) {
            s32 lookup = FUN_0029bcf0(id & 0xFFFF);

            if (lookup >= 0) {
                result = lookup + 0x6D;
            }
            break;
        }
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
