#include "shard/S2Scene3a.h"
#include "gamedata/PartyMoney.h"
#include "gamedata/EquipmentSortPower.h"

/* Clears the entry's ten option bits and keeps the six preserved ones. */
static inline void clearOptions(Scene3aEntry *entry)
{
    u32 bits = entry->unk02;
    bits >>= 10;
    bits <<= 10;
    entry->unk02 = bits;
}

extern "C" {
void FUN_002306f8(const Scene3aEntry* item, s32 quantity, u32 flags);
void FUN_0026e630(u32 amount);
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
            FUN_0026e630(aocGetContentFlags(id) * quantity);
            clearOptions(&item);
            item.id = id;
            FUN_002306f8(&item, -(s32)quantity, 0);
            continue;
        }
        clearOptions(&item);
        item.id = id;
        FUN_002306f8(&item, quantity, 0);
    }
}
}
