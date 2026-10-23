/* NON_MATCHING: parent-source pointer registers, zero-store addressing and inherited-count base retention differ. */
#include "shard/GameOptions.h"
#include "gamedata/FusionRecipe.h"
#include "gamedata/DevilRecord.h"
/* Ingredient sources extend past the shared recipe's ID list. */
struct FusionParentSources {
    FusionRecipe recipe;
    u8 kinds[12];
};
typedef char FusionParentSourcesKindsCheck[offsetof(FusionParentSources, kinds) == 0x1A ? 1 : -1];
extern "C" {
void memClear(void *memory, u32 bytes);
GameOptions *partyMemberFindById(u16 id);
void FUN_0029dc74(u16 id, GameOptions *output);
void unitInitializeFromSavedRecord(u16 id, GameOptions *output);
void bitsetSetBit(GameOptions *owner, u32 bit);
void unitRecalculateEffectiveStats(GameOptions *unit);

void FUN_003c8980(u32 mode, const FusionParentSources *parents, GameOptions *output)
{
    u32 *flagWords = reinterpret_cast<u32 *>(output->inheritance.flags);
    for (s32 i = 0; i < 16; ++i)
        flagWords[i] = 0;
    memClear(output->inheritance.counts, sizeof(output->inheritance.counts));
    GameOptions temporary;
    GameOptions *parent;
    for (s32 i = 0; i < 12; ++i) {
        u16 id = parents->recipe.ingredients[i];
        if (id) {
            /* Nonempty ingredients identify a party, compendium or base-record source. */
            if (parents->kinds[i] == 1) {
                parent = partyMemberFindById(id);
            } else if (parents->kinds[i] == 3) {
                unitInitializeFromSavedRecord(id, &temporary);
                parent = &temporary;
            } else if (parents->kinds[i] == 2) {
                FUN_0029dc74(id, &temporary);
                parent = &temporary;
            }
            for (s32 j = 0; j < 0x40; ++j)
                output->inheritance.flags[j] |= parent->inheritance.flags[j];
            for (s32 j = 0; j < 0x500; ++j) {
                s32 count = output->inheritance.counts[j] + parent->inheritance.counts[j];
                if (count > 0xFF)
                    count = 0xFF;
                output->inheritance.counts[j] = count;
            }
            u16 parentId = parent->unk46;
            if (output->inheritance.counts[parentId] < 0xFF)
                ++output->inheritance.counts[parentId];
        }
    }
    const DevilRecord *record = reinterpret_cast<const DevilRecord *>(devilGetRecord(parents->recipe.id));
    bitsetSetBit(output, record->initialization.innateFlag);
    unitRecalculateEffectiveStats(output);
}
}
