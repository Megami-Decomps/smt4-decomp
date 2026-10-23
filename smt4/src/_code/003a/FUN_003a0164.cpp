/* NON_MATCHING: the two power accumulators take swapped r4/r5 registers. */
#include "gamedata/EquipmentSortPower.h"
#include "shard/W6_W6Match2_RankedTableRecord.h"
extern "C" {
u32 FUN_002ae3c0(u32 id);
EquipmentSortPowerPrimary *dataTable08Sub0GetRecord(u32 id);
EquipmentSortPowerSecondary *dataTable08Sub1GetRecord(u32 id);
s32 FUN_00230f44(const u16 *item);
}

static inline u16 equipmentSortPower(u16 id)
{
    // The power field is past RankedTableRecord's known extent; do not grow that shared type.
    struct ExtendedPowerView { u8 prefix[0xA6]; u16 power; };
    typedef char ExtendedPowerOffset[offsetof(ExtendedPowerView, power) == 0xA6 ? 1 : -1];
    u16 power = 0;
    switch (FUN_002ae3c0(id)) {
    case 2: case 3: case 4: case 5: case 6: case 7: case 8:
        power = ((ExtendedPowerView *)dataTable08Sub2GetRecord(id))->power;
        break;
    case 0:
        power = dataTable08Sub0GetRecord(id)->power;
        break;
    case 1:
        power = dataTable08Sub1GetRecord(id)->powerFlags & 0xFF;
        break;
    }
    return power;
}

// Sort by descending equipment power, then by the existing item ordering.
extern "C" s32 FUN_003a0164(const u16 *left, const u16 *right)
{
    u16 leftPower = equipmentSortPower(*left);
    u16 rightPower = equipmentSortPower(*right);
    s32 result = rightPower - leftPower;
    if (result == 0)
        result = FUN_00230f44(left) - FUN_00230f44(right);
    return result;
}
