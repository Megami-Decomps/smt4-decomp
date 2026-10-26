#include "util/DataTable08Sub2GetRecord.h"
/* NON_MATCHING: minimum-one guard still emits an extra conditional branch; percentage accumulator now matches retail multiply operand order. */
#include "shard/Shard0032.h"
#include "gamedata/EquipmentValueModifier.h"
#include "shard/W5_W5Match7_EntrySort.h"
#include "gamedata/Table04Record.h"

extern "C" {
const UnitRecord *gameGetPlayerData(void);
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
        const EquipmentValueItem *item = reinterpret_cast<const EquipmentValueItem *>(dataTable08Sub2GetRecord(itemId));
        if (item != NULL && item->modifierId != 0) {
            const EquipmentValueModifier *modifier = reinterpret_cast<const EquipmentValueModifier *>(dataTable41FindById(item->modifierId));
            if (modifier != NULL && modifier->percentage != 0) {
                multiplier = static_cast<f32>(static_cast<u32>(modifier->percentage)) * 0.01f * multiplier;
            }
        }
    }
    s32 percentage = static_cast<s32>(multiplier * 100.0f);
    u32 adjusted = value;
    adjusted *= percentage;
    adjusted /= 100;
    u32 rate = dataTable9Type3GetClamped(player->id, kind);
    u32 result = adjusted * rate / 100;
    if (result == 0) {
        if (adjusted != 0)
            result = 1;
    }
    return result;
}
}
