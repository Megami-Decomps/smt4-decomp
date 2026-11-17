#include "battle/BtlEntry.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {

s32 FUN_001ee498(void *unit);

/* Returns 1 when the owner's leader slot (flag 0x10) or any member slot holds a unit (kind 2 or 3) that passes FUN_001ee498. */
s32 btlSlotsHaveReadyUnit(BtlEntry *owner)
{
    void *unit;
    s32 i;

    if (owner->flags & 0x10) {
        if ((owner->data.actionList.selected.kind == 2 || owner->data.actionList.selected.kind == 3) &&
            (unit = skillDataFindById(owner->data.actionList.selected.id)) != NULL && FUN_001ee498(unit)) {
            return 1;
        }
    } else {
        for (i = 0; i < 5; i++) {
            if ((owner->data.actionList.available[i].kind == 2 || owner->data.actionList.available[i].kind == 3) &&
                (unit = skillDataFindById(owner->data.actionList.available[i].id)) != NULL && FUN_001ee498(unit)) {
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
