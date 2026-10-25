/* NON_MATCHING: shared affinity-allow predicate recovers player status tail; unit tail branch polarity and unit/11 argument setup order still differ. */
#include "shard/Shard0031.h"
#include "shard/Shard004B.h"

struct PlayerStatusViewA { u8 prefix[0x5E]; u16 status; };
extern "C" {
PlayerStatusViewA* gameGetPlayerData(void);
ScaledRecordValues* gameGetSlotRecord(s32 slot);
PartyStatusSlots* gameGetSlotTable(void);
s32 gameSlotTableFindFree(void);
s32 randRange(u32 maximum);
void FUN_003dfad4(u16* affinities, const PlayerStatusViewA* player);
void affinityResolveUnitSlot(u16* output, ScaledRecordValues* unit, s32 affinity);

static inline s32 statusAffinityAllows(u16 affinity)
{
    u32 state = affinity >> 10;
    if (state == 1 || state == 3 || state == 4)
        return 0;
    return 1;
}

void FUN_0049fc88(u32 group, u32 statusBit, f32 chance)
{
    if (chance <= 0.0f) {
        return;
    }
    u32 mask = 1u << statusBit;
    u16 affinities[21];
    if ((group == 0 || group == 2 || group == 3) &&
        !(gameGetPlayerData()->status & 2) && !(gameGetPlayerData()->status & 0x400) &&
        !(gameGetPlayerData()->status & mask) && static_cast<f32>(randRange(99)) < chance) {
        s32 canApply = 1;
        if (statusBit == 5) {
            FUN_003dfad4(affinities, gameGetPlayerData());
            canApply = statusAffinityAllows(affinities[11]);
        }
        if (canApply) {
            PlayerStatusViewA* player = gameGetPlayerData();
            player->status |= mask;
        }
    }
    s32 count;
    s8* slots;
    switch (group) {
    case 0:
    case 1:
        count = gameSlotTableFindFree();
        slots = gameGetSlotTable()->active.slots;
        break;
    case 2:
    case 3:
        count = 3;
        slots = gameGetSlotTable()->reserve;
        break;
    default:
        return;
    }
    for (s32 index = 0; index < count; ++index) {
        if (slots[index] < 0) {
            continue;
        }
        ScaledRecordValues* unit = gameGetSlotRecord(slots[index]);
        if (unit->flags & 2) {
            continue;
        }
        if (unit->flags & 0x400) {
            continue;
        }
        if (unit->flags & mask) {
            continue;
        }
        if (static_cast<f32>(randRange(99)) < chance) {
            s32 canApply = 1;
            if (statusBit == 5) {
                affinityResolveUnitSlot(affinities, unit, 11);
                canApply = statusAffinityAllows(affinities[0]);
            }
            if (canApply)
                unit->flags |= mask;
        }
    }
}
}
