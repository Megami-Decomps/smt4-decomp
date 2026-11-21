/* NON_MATCHING: retail keeps 1 and 0 in r1/r0 across the switch and selects each side with tst/mov/movne
 * or branches into shared store tails; the build folds the side ternaries into bic/lsr bit arithmetic. */
#include "battle/BtlEntry.h"
#include "gamedata/EquipmentTable.h"
#include "gamedata/SkillDataLookup.h"

extern "C" {

// Decode the equipment target mode into target side and target scope.
void FUN_003d0bec(u32 unused, const BtlEntry *entry, u32 itemId, u32 *side, u32 *scope)
{
    EquipmentTableRecord *item = reinterpret_cast<EquipmentTableRecord *>(skillDataFindById(itemId));
    if (item == NULL)
        return;
    // A word overlay on EquipmentTableRecord's unaligned padding would shift its layout.
    struct ItemTargetView {
        u8 prefix[0x28];
        u32 target;
    };
    const ItemTargetView *target = reinterpret_cast<const ItemTargetView *>(item);
    switch ((target->target >> 5) & 0xF) {
    case 0:
        *side = (entry->flags & 0x10) ? 0 : 1;
        *scope = 0;
        return;
    case 1:
        *side = (entry->flags & 0x10) ? 0 : 1;
        *scope = 1;
        return;
    case 2:
        *side = (entry->flags & 0x10) ? 1 : 0;
        *scope = 0;
        return;
    case 3:
        *side = (entry->flags & 0x10) ? 1 : 0;
        *scope = 1;
        return;
    case 4:
        *side = (entry->flags & 0x10) ? 1 : 0;
        *scope = 0;
        return;
    case 5:
        *scope = 2;
        return;
    case 6:
        *side = (entry->flags & 0x10) ? 0 : 1;
        *scope = 1;
        return;
    case 7:
        *side = (entry->flags & 0x10) ? 1 : 0;
        *scope = 0;
        return;
    case 8:
        *side = (entry->flags & 0x10) ? 1 : 0;
        *scope = 1;
        return;
    }
}
}
