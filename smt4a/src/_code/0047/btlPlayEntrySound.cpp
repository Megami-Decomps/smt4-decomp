#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *battle, u32 id);
void FUN_0015f490(u32 id, u32 sound, s32 enabled, s32 flags, f32 volume);

extern u64 DAT_00573cc0; /* 0x573cc0 */

/* Looks up the battle entry for `id`; when it matches the mask at DAT_00573cc0 and has a unit, plays sound 4 for that unit. */
void btlPlayEntrySound(u32 id, f32 volume)
{
    BtlCombatantEntryA *entry = FUN_003f0e20(btlGetMainState(), id);

    if (entry != NULL && (entry->flags & DAT_00573cc0) != 0 && entry->id != 0) {
        FUN_0015f490(entry->id, 4, 0, 0, volume);
    }
}

} /* extern "C" */
