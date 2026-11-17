/* NON_MATCHING: loops and stores now follow retail; retail pushes an extra register (sl) instead of padding the frame, sets `parent` before the saved-record call, and indexes the counts as [id, base]. */
#include "shard/GameOptions.h"
#include "gamedata/FusionRecipe.h"
#include "gamedata/DevilRecord.h"
#include "AsdSDK/AsdMemUtil.h"
#include <string.h>
/* Ingredient sources extend past the shared recipe's ID list. */
struct FusionParentSources {
    FusionRecipe recipe;
    u8 kinds[12];
};
typedef char FusionParentSourcesKindsCheck[offsetof(FusionParentSources, kinds) == 0x1A ? 1 : -1];
extern "C" {
GameOptions *partyMemberFindById(u16 id);
void FUN_0029dc74(u16 id, GameOptions *output);
void unitInitializeFromSavedRecord(u16 id, GameOptions *output);
void bitsetSetBit(GameOptions *owner, u32 bit);
void unitRecalculateEffectiveStats(GameOptions *unit);

void FUN_003c8980(u32 mode, const FusionParentSources *parents, GameOptions *output)
{
    memset(reinterpret_cast<u32 *>(output->inheritance.flags), 0, sizeof(output->inheritance.flags));
    memClear(output->inheritance.counts, sizeof(output->inheritance.counts));
    GameOptions temporary;
    const GameOptions *parent;
    u8 *counts = output->inheritance.counts;
    for (s32 i = 0; i < 12; ++i) {
        u16 id = parents->recipe.ingredients[i];
        if (id != 0) {
            /* Nonempty ingredients identify a party, compendium or base-record source. */
            u8 kind = parents->kinds[i];
            if (kind == 1) {
                parent = partyMemberFindById(id);
            } else if (kind == 3) {
                unitInitializeFromSavedRecord(id, &temporary);
                parent = &temporary;
            } else if (kind == 2) {
                FUN_0029dc74(id, &temporary);
                parent = &temporary;
            }
            for (s32 j = 0; j < 0x40; ++j)
                output->inheritance.flags[j] |= parent->inheritance.flags[j];
            for (s32 j = 0; j < 0x500; ++j) {
                s32 count = parent->inheritance.counts[j] + output->inheritance.counts[j];
                if (count > 0xFF)
                    count = 0xFF;
                output->inheritance.counts[j] = count;
            }
            u16 parentId = parent->unk46;
            if (counts[parentId] < 0xFF)
                ++counts[parentId];
        }
    }
    const DevilRecord *record = reinterpret_cast<const DevilRecord *>(devilGetRecord(parents->recipe.id));
    bitsetSetBit(output, record->innateFlag);
    unitRecalculateEffectiveStats(output);
}
}
