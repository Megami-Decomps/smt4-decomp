/* NON_MATCHING: party/reserve status loops and random-mask lifetimes use different saved registers and branch layout. */
#include "common.h"

struct StatusPlayer {
    u8 unk00[0x72];
    u16 flags; // 0x72
};
struct StatusUnit {
    u8 unk00[0x44];
    u16 flags; // 0x44
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
union StatusResult {
    PlayerStatusResult player;
    UnitStatusResult unit;
};
extern "C" {
StatusPlayer *gameGetPlayerData();
StatusSlotTable *gameGetSlotTable();
StatusUnit *gameGetUnitRecord(s32 slot);
s32 gameCountUnits();
s32 randNextInRange(s32 maximum);
void FUN_00253d60(PlayerStatusResult *output, StatusPlayer *player);
void affinityResolveUnitSlot(UnitStatusResult *output, StatusUnit *unit, s32 selector);
}

// Apply the selected status to eligible party or reserve members at the supplied probability.
extern "C" void partyApplyStatusMask(s32 group, s32 bit, s32 probability)
{
    if (probability <= 0)
        return;
    u32 mask = 1u << bit;
    StatusResult result;
    if (group == 0 || group == 2 || group == 3) {
        if (!(gameGetPlayerData()->flags & 2) && !(gameGetPlayerData()->flags & 0x400) &&
            !(gameGetPlayerData()->flags & mask) && randNextInRange(99) < probability) {
            bool permitted = true;
            if (bit == 5) {
                FUN_00253d60(&result.player, gameGetPlayerData());
                u32 category = result.player.category >> 10;
                permitted = category != 1 && category != 3 && category != 4;
            }
            if (permitted) {
                StatusPlayer *player = gameGetPlayerData();
                player->flags |= mask;
            }
        }
    }
    s32 count;
    const s8 *slots;
    if (group == 0 || group == 1) {
        count = gameCountUnits();
        slots = gameGetSlotTable()->units;
    } else if (group == 2 || group == 3) {
        count = 3;
        slots = gameGetSlotTable()->reserve;
    } else {
        return;
    }
    for (s32 i = 0; i < count; ++i) {
        s32 slot = slots[i];
        if (slot < 0)
            continue;
        StatusUnit *unit = gameGetUnitRecord(slot);
        u16 flags = unit->flags;
        if ((flags & 2) || (flags & 0x400) || (flags & 4) || (flags & mask))
            continue;
        if (randNextInRange(99) >= probability)
            continue;
        if (bit == 5) {
            affinityResolveUnitSlot(&result.unit, unit, 11);
            u32 category = result.unit.category >> 10;
            if (category == 1 || category == 3 || category == 4)
                continue;
        }
        unit->flags |= mask;
    }
}
