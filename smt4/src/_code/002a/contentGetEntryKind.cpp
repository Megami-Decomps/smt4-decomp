#include "common.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {

u32 aocEntryGetKind(u32 id);

/* Forward the item-kind query through the public content interface. */
u32 contentGetEntryKind(u32 id)
{
    return aocEntryGetKind(id);
}

} /* extern "C" */
