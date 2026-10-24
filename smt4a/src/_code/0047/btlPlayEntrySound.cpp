#include "shard/W5_W5Match7_BattleMask.h"

extern "C" {

BattleMaskEntry *FUN_003f0e20(BattleMaskState *battle, u32 id);
void FUN_0015f490(u32 id, u32 sound, s32 enabled, s32 flags, f32 volume);

extern u64 DAT_00573cc0; /* 0x573cc0 */

/* Looks up the battle entry for `id`; when it matches the mask at DAT_00573cc0 and has a unit, plays sound 4 for that unit. */
void btlPlayEntrySound(u32 id, f32 volume)
{
    BattleMaskEntry *entry = FUN_003f0e20(btlGetMainState(), id);

    if (entry != NULL && (entry->mask & DAT_00573cc0) != 0 && entry->unitId != 0) {
        FUN_0015f490(entry->unitId, 4, 0, 0, volume);
    }
}

} /* extern "C" */
