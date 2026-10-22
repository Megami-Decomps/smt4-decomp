/* NON_MATCHING: ARMCC clears options with AND #fc00 rather than the retail pair of shifts. */
#include "shard/S2Scene3a.h"

extern "C" {
void FUN_002306f8(const Scene3aEntry* item, s32 quantity, u32 flags);
void FUN_0026e630(u32 amount);
void FUN_00295c04(u32 amount);
void gameCounterAddSaturating(s32 index, u32 amount);
s32 FUN_002ae3c0(u32 id);
u32 aocGetContentFlags(u32 id);

// Apply the scene's total and item deltas, converting downloadable entries separately.
void FUN_003a1378(Scene3a* scene)
{
    Scene3aEntry item;
    FUN_00295c04(scene->transaction.totalAmount);
    gameCounterAddSaturating(31, scene->transaction.totalAmount);
    for (s32 i = 0; i < scene->transaction.count; ++i) {
        u16 id = scene->transaction.records[i].id;
        u16 quantity = scene->transaction.records[i].quantity;
        if (id == 0) {
            break;
        }
        if (FUN_002ae3c0(id) == 10) {
            FUN_0026e630(aocGetContentFlags(id) * quantity);
            item.attributes.options = 0;
            item.id = id;
            FUN_002306f8(&item, -(s32)quantity, 0);
            continue;
        }
        item.attributes.options = 0;
        item.id = id;
        FUN_002306f8(&item, quantity, 0);
    }
}
}
