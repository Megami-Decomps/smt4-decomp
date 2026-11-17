#include "battle/BtlMainAccess.h"
#include "gamedata/NkmBaseRecord.h"
#include "shard/W4_W4Match2_BtlUnits.h"
#include "script/ScriptArgs.h"

extern "C" {

/* Script command: pushes whether any live, non-excluded battle unit is a devil of category 4. */
u32 scrCommBtlAnyUnitDevilKind4(void)
{
    s32 index;

    for (index = 0; index < 0x6D; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40)) {
            if (nkmBaseGetRecord(unit->id)->category == 4) {
                scrSetResult(1);
                return 1;
            }
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
