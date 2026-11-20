#include "shard/S2Scene3a.h"
#include "gamedata/PartyMoney.h"
#include "gamedata/EquipmentSortPower.h"

extern "C" {
void inventoryApplyTransaction(const Scene3aEntry* item, s32 quantity, u32 flags);
void gameSaveAddPointsClamped(u32 amount);
void gameCounterAddSaturating(s32 index, u32 amount);

// Apply the scene's total and item deltas, converting downloadable entries separately.
void sceneApplyTransaction(Scene3a* scene)
{
    Scene3aEntry item;
    partyMoneyAddForward(scene->transaction.totalAmount);
    gameCounterAddSaturating(31, scene->transaction.totalAmount);
    for (s32 i = 0; i < scene->transaction.count; ++i) {
        u16 id = scene->transaction.records[i].id;
        u16 quantity = scene->transaction.records[i].quantity;
        if (id == 0) {
            break;
        }
        if (contentGetEntryKind(id) == 10) {
            gameSaveAddPointsClamped(aocGetContentFlags(id) * quantity);
            item.clearOptions();
            item.id = id;
            inventoryApplyTransaction(&item, -(s32)quantity, 0);
            continue;
        }
        item.clearOptions();
        item.id = id;
        inventoryApplyTransaction(&item, quantity, 0);
    }
}
}
