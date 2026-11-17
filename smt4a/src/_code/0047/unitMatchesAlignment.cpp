#include "shard/Shard0047.h"
#include "gamedata/EquipmentRecordA.h"

extern "C" {

extern s32 playerAlignmentClass(void);

/* True when the unit's alignment flags match the player's current alignment class. */
u32 unitMatchesAlignment(s32 unitId)
{
    s32 alignment = playerAlignmentClass();
    EquipmentRecordA *unit = dataTable08Sub2GetRecord(unitId);
    u8 flags;

    if (unit == NULL) {
        return 0;
    }
    flags = unit->alignments;
    if ((((flags & 1) != 0 && alignment == 4) || ((flags & 4) != 0 && alignment == 5)) ||
        ((flags & 2) != 0 && alignment == 1)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
