#include "common.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/EquipmentSortPower.h"

/* The seven 16-bit entry ids at the start of the player data block, one per entry kind (kinds 2-8;
 * kind 8 is stored third). */
struct PlayerEntrySlots {
    /* 0x00 */ u16 ids[7];
};

extern "C" {

// Whether `id` is the entry the player currently holds in the slot its kind belongs to.
u32 playerSlotHoldsEntry(u32 unused, u32 id)
{
    const PlayerEntrySlots *slots = reinterpret_cast<const PlayerEntrySlots *>(gameGetPlayerData());
    u32 held;
    switch (contentGetEntryKind(id)) {
    case 2:
        held = slots->ids[0];
        break;
    case 3:
        held = slots->ids[1];
        break;
    case 4:
        held = slots->ids[3];
        break;
    case 5:
        held = slots->ids[4];
        break;
    case 6:
        held = slots->ids[5];
        break;
    case 7:
        held = slots->ids[6];
        break;
    case 8:
        held = slots->ids[2];
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
