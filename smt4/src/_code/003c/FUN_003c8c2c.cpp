/* NON_MATCHING: only r0/r1 assignment in the two-ingredient recipe comparison differs. */
#include "shard/W6_W6Match5_DevilSort.h"
#include "gamedata/FusionRecipe.h"
#include "camp/Unite/FusionCandidates.h"
#include "shard/dataFindSymmetricPair.h"

extern "C" {
u32 dataTable05Sub4GetCount(void);
FusionRecipe *dataTable54FindById(u16 index);
void *dataTable05FindByPriorityAndKey(u8 firstRace, u8 secondRace);
FusionRaceRule *dataTable5Sub3Lookup(u8 race, u16 id);

// Distinguish special two-ingredient recipes, race exceptions and ordinary race-pair fusion.
u8 FUN_003c8c2c(void *owner, u16 firstId, u16 secondId)
{
    const DevilSortRecord *first = devilGetRecord(firstId);
    const DevilSortRecord *second = devilGetRecord(secondId);
    if (first->id == second->id)
        return 0;
    for (u16 index = 0; index < dataTable05Sub4GetCount(); ++index) {
        const FusionRecipe *recipe = dataTable54FindById(index);
        if (recipe) {
            s32 ingredients = 0;
            for (s32 slot = 0; slot < 12; ++slot) {
                if (recipe->ingredients[slot])
                    ++ingredients;
            }
            if (ingredients == 2 &&
                ((recipe->ingredients[0] == first->id && recipe->ingredients[1] == second->id) ||
                 (recipe->ingredients[1] == first->id && recipe->ingredients[0] == second->id)))
                return 5;
        }
    }
    if (dataTable05FindByPriorityAndKey(first->race, second->race))
        return 4;
    const FusionRaceRule *firstRule = dataTable5Sub3Lookup(first->race, second->id);
    const FusionRaceRule *secondRule = dataTable5Sub3Lookup(second->race, first->id);
    if (firstRule) {
        if (firstRule->kind == 1)
            return 2;
        if (firstRule->kind == 3)
            return 3;
    } else if (secondRule) {
        if (secondRule->kind == 1)
            return 2;
        if (secondRule->kind == 3)
            return 3;
    }
    return dataFindSymmetricPair(first->race, second->race) != 0;
}
}
