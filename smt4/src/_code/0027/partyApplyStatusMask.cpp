#include "common.h"
#include "gamedata/UnitRecordAccess.h"

struct StatusPlayer {
    u8 unk00[0x72];
    u16 flags; // 0x72
};
struct StatusSlotTable {
    u8 unk0000[0x90f0];
    s8 units[24]; // 0x90f0
    s8 reserve[3]; // 0x9108
};
struct PlayerStatusResult {
    u8 unk00[0x16];
    u16 category; // 0x16
    u8 unk18[0x10];
};
struct UnitStatusResult {
    u16 category;
    u8 unk02[0x26];
};
extern "C" {
StatusPlayer *gameGetPlayerData();
StatusSlotTable *gameGetSlotTable();
s32 gameCountUnits();
s32 randNextInRange(s32 maximum);
void devilBuildAffinitySlots(PlayerStatusResult *output, StatusPlayer *player);
void affinityResolveUnitSlot(UnitStatusResult *output, StatBlock *unit, s32 selector);
}

/* Whether an affinity's state (its top six bits) lets the status through. */
static inline s32 statusAffinityAllows(u16 affinity)
{
    u32 state = affinity >> 10;
    if (state == 1 || state == 3 || state == 4)
        return 0;
    return 1;
}

static inline s32 unitAffinityAllows(StatBlock *unit)
{
    UnitStatusResult affinity;
    affinityResolveUnitSlot(&affinity, unit, 11);
    return statusAffinityAllows(affinity.category);
}

// Apply the selected status to eligible party or reserve members at the supplied probability.
extern "C" void partyApplyStatusMask(s32 group, s32 bit, s32 probability)
{
    if (probability <= 0)
        return;
    u32 mask = 1u << bit;
    if ((group == 0 || group == 2 || group == 3) &&
        (gameGetPlayerData()->flags & 2) == 0 &&
        (gameGetPlayerData()->flags & 0x400) == 0 &&
        (gameGetPlayerData()->flags & mask) == 0 &&
        randNextInRange(99) < probability) {
        s32 permitted = 1;
        if (bit == 5) {
            PlayerStatusResult result;
            devilBuildAffinitySlots(&result, gameGetPlayerData());
            permitted = statusAffinityAllows(result.category);
        }
        if (permitted)
            gameGetPlayerData()->flags |= mask;
    }
    s32 count;
    const s8 *slots;
    switch (group) {
    case 0:
    case 1:
        count = gameCountUnits();
        slots = gameGetSlotTable()->units;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->reserve;
        break;
    default:
        return;
    }
    for (s32 i = 0; i < count; ++i) {
        if (slots[i] < 0)
            continue;
        StatBlock *unit = gameGetUnitRecord(slots[i]);
        if (unit->ailments & 2)
            continue;
        if (unit->ailments & 0x400)
            continue;
        if (unit->ailments & 4)
            continue;
        if (unit->ailments & mask)
            continue;
        if (randNextInRange(99) < probability) {
            if (bit == 5 && !unitAffinityAllows(unit))
                continue;
            unit->ailments |= mask;
        }
    }
}
