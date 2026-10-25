#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);
extern s32 partyFindActiveSlotById(u32 id);

/* Script command: pushes the main-list index of the live battle unit linked to the id in argument 0, or 0x6D plus the
 * result of partyFindActiveSlotById when no unit has it, -1 when that fails too. */
u32 scrCommBtlUnitMainIndexById(void)
{
    u32 id = scrGetArg(0);
    s32 result = -1;
    s32 index = 0;

    for (;;) {
        BtlUnitEntry *unit = &reinterpret_cast<BtlState *>(btlGetMainState())->units[index];

        if ((unit->flags & 1) && !(unit->flags & 0x40) && (unit->flags & 8) && unit->mainIndex >= 0
            && unit->link != NULL && unit->link->id == id) {
            result = unit->mainIndex;
            break;
        }
        index++;
        if (index >= 0x6D) {
            s32 lookup = partyFindActiveSlotById(id & 0xFFFF);

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
