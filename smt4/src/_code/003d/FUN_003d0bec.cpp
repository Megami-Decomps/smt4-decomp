/* NON_MATCHING: retail selects side values before storing; conditional-store tail sharing and saved-register allocation differ. */
#include "shard/W4_Match6_BtlEntry.h"
#include "gamedata/EquipmentTable.h"
#include "gamedata/DataTable40.h"

extern "C" {

// Decode the equipment target mode into target side and target scope.
void FUN_003d0bec(u32 unused, const BtlEntry *entry, u32 itemId, u32 *side, u32 *scope)
{
    EquipmentTableRecord *item = reinterpret_cast<EquipmentTableRecord *>(dataTable40FindById(itemId));
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
        if (entry->flags & 0x10)
            *side = 0;
        else
            *side = 1;
        *scope = 0;
        return;
    case 1:
        if (entry->flags & 0x10)
            *side = 0;
        else
            *side = 1;
        *scope = 1;
        return;
    case 2:
        if (entry->flags & 0x10)
            *side = 1;
        else
            *side = 0;
        *scope = 0;
        return;
    case 3:
        if (entry->flags & 0x10)
            *side = 1;
        else
            *side = 0;
        *scope = 1;
        return;
    case 4:
        if (entry->flags & 0x10)
            *side = 1;
        else
            *side = 0;
        *scope = 0;
        return;
    case 5:
        *scope = 2;
        return;
    case 6:
        if (entry->flags & 0x10)
            *side = 0;
        else
            *side = 1;
        *scope = 1;
        return;
    case 7:
        if (entry->flags & 0x10)
            *side = 1;
        else
            *side = 0;
        *scope = 0;
        return;
    case 8:
        if (entry->flags & 0x10)
            *side = 1;
        else
            *side = 0;
        *scope = 1;
        return;
    }
}
}
