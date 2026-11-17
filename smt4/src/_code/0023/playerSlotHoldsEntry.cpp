#include "common.h"
#include "gamedata/EquipmentSortPower.h"
#include "gamedata/GamePlayerData.h"

extern "C" {

// Whether `id` is the entry the player currently holds in the slot its kind belongs to.
u32 playerSlotHoldsEntry(u32 unused, u32 id)
{
    const PlayerDataIV *slots = reinterpret_cast<const PlayerDataIV *>(gameGetPlayerData());
    u32 held;
    switch (contentGetEntryKind(id)) {
    case 2:
        held = slots->equipment[0];
        break;
    case 3:
        held = slots->equipment[1];
        break;
    case 4:
        held = slots->equipment[3];
        break;
    case 5:
        held = slots->equipment[4];
        break;
    case 6:
        held = slots->equipment[5];
        break;
    case 7:
        held = slots->equipment[6];
        break;
    case 8:
        held = slots->equipment[2];
        break;
    default:
        return 0;
    }
    if (id == held) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
