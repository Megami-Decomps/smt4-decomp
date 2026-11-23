#include "gamedata/DataTableAccess_VariantE_EntrySort.h"
#include "gamedata/GamePlayerData.h"
#include "shard/W5_W5Match7_EntrySort.h"
#include "gamedata/SkillDataRecord.h"

extern "C" {
u32 dataTable9Type3GetClamped(u16 playerId, u32 kind);

/* Apply all equipped percentage modifiers, then the player's table-specific rate. */
u32 FUN_0022fd80(s32 value, u32 kind)
{
    const PlayerDataA *player = gameGetPlayerData();
    f32 multiplier = 1.0f;
    const PlayerDataA *equipment = gameGetPlayerData();
    for (s32 slot = 0; slot < 7; ++slot) {
        u32 itemId = 0;
        switch (slot) {
        case 0: itemId = equipment->equipment[0]; break;
        case 1: itemId = equipment->equipment[1]; break;
        case 2: itemId = equipment->equipment[2]; break;
        case 3: itemId = equipment->equipment[3]; break;
        case 4: itemId = equipment->equipment[4]; break;
        case 5: itemId = equipment->equipment[5]; break;
        case 6: itemId = equipment->equipment[6]; break;
        }
        const EquipmentRecordA *item = itemTableGetEquipmentRecord(itemId);
        if (item != NULL && item->modifierId != 0) {
            const Table04ExtraRecord *modifier = dataTable41FindById(item->modifierId);
            if (modifier != NULL && modifier->modifier.percentage != 0) {
                multiplier = static_cast<f32>(static_cast<u32>(modifier->modifier.percentage)) * 0.01f * multiplier;
            }
        }
    }
    s32 percentage = static_cast<s32>(multiplier * 100.0f);
    u32 adjusted = value;
    adjusted *= percentage;
    adjusted /= 100;
    u32 rate = dataTable9Type3GetClamped(player->level, kind);
    u32 result = adjusted * rate / 100;
    if (result == 0) {
        if (adjusted != 0)
            result = 1;
    }
    return result;
}
}
