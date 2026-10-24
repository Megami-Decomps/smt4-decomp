/* NON_MATCHING: retail addresses the mask as DAT_00573cc0 + 8 (pool word has addend 0, two ldr) and loads the entry flags with ldm after it; the build folds +8 into the pool word and loads the mask with ldm; vldr s0 is also hoisted differently. */
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

extern "C" {

BtlMainStateA *btlGetMainState(void);
void FUN_0015f490(u32 id, u32 sound, s32 enabled, s32 flags, f32 volume);

/* The battle sound masks at 0x573cc0. */
struct BattleSoundMasks {
    /* 0x00 */ u64 entry;
    /* 0x08 */ u64 selected;
};
extern BattleSoundMasks DAT_00573cc0; /* 0x573cc0 */

/* Plays sound `sound` for the unit of the currently selected battle entry when its flags match the mask at DAT_00573cc0.selected. */
void FUN_0047f444(u32 sound)
{
    BtlMainStateA *battle = btlGetMainState();
    s16 selection = battle->commandEntry.selection;

    if (selection >= 0) {
        BtlCombatantEntryA *entry = &battle->entries[selection];
        if ((entry->flags & DAT_00573cc0.selected) != 0 && (s16)entry->id >= 0) {
            FUN_0015f490((s16)entry->id, sound, 1, 0, 1.0f);
        }
    }
}

} /* extern "C" */
