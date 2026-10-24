/* NON_MATCHING: multiply operand order and one extra branch in the minimum-one result guard differ. */
#include "shard/Shard0032.h"
#include "gamedata/EquipmentValueModifier.h"

extern "C" {
const UnitRecord *gameGetPlayerData(void);
const EquipmentValueItem *dataTable08Sub2GetRecord(u32 id);
const EquipmentValueModifier *dataTable41FindById(u32 id);
u32 dataTable9Type3GetClamped(u16 playerId, u32 kind);

// Apply all equipped percentage modifiers, then the player's table-specific rate.
u32 FUN_0022fd80(s32 value, u32 kind)
{
    const UnitRecord *player = gameGetPlayerData();
    f32 multiplier = 1.0f;
    const UnitRecord *equipment = gameGetPlayerData();
    for (s32 slot = 0; slot < 7; ++slot) {
        u32 itemId = 0;
        switch (slot) {
        case 0: itemId = equipment->stats[0]; break;
        case 1: itemId = equipment->stats[1]; break;
        case 2: itemId = equipment->stats[2]; break;
        case 3: itemId = equipment->stats[3]; break;
        case 4: itemId = equipment->stats[4]; break;
        case 5: itemId = equipment->stats[5]; break;
        case 6: itemId = equipment->stats[6]; break;
        }
        const EquipmentValueItem *item = dataTable08Sub2GetRecord(itemId);
        if (item != NULL && item->modifierId != 0) {
            const EquipmentValueModifier *modifier = dataTable41FindById(item->modifierId);
            if (modifier != NULL && modifier->percentage != 0) {
                multiplier = static_cast<f32>(static_cast<u32>(modifier->percentage)) * 0.01f * multiplier;
            }
        }
    }
    u32 adjusted = static_cast<u32>(static_cast<s32>(multiplier * 100.0f) * value) / 100;
    u32 rate = dataTable9Type3GetClamped(player->id, kind);
    u32 result = adjusted * rate / 100;
    if (result == 0) {
        if (adjusted != 0) {
            result = 1;
        }
    }
    return result;
}
}
