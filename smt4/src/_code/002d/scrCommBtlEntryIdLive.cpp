#include "battle/BtlMainAccess.h"
#include "shard/W4_W4Match2_BtlUnits.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern s32 scrSetResult(s32 value);

/* Script command: pushes whether a live, non-excluded battle unit has the group id in argument 0. */
u32 scrCommBtlEntryIdLive(void)
{
    u32 id = scrGetArg(0);
    s32 index;

    for (index = 0; index < 0x6D; index++) {
        BtlEntry *unit = &btlGetMainState()->entries[index];

        if ((unit->flags & 0x10) && (unit->flags & 1) && !(unit->flags & 0x40) && unit->id == id) {
            scrSetResult(1);
            return 1;
        }
    }
    scrSetResult(0);
    return 1;
}

} /* extern "C" */
