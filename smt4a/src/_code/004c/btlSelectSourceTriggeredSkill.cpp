#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "gamedata/SourceMetadata.h"
#include "bible/bibleAnalyze.h"

extern "C" {
BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *, u32);
void source4CCopyHalves(const BtlCombatantEntryA *, u16 *);
SourceMetadataFlags *dataTable41FindById(u32);
s32 FUN_003ec77c(BtlMainStateA *);
s32 lcgRandomRange(u32);

/* Pick the first source's triggered skill that passes the action and chance gates. */
s32 btlSelectSourceTriggeredSkill(u32 id, s32 randomize)
{
    BtlMainStateA *state = btlGetMainState();
    BtlCombatantEntryA *entry = FUN_003f0e20(state, id);
    /* This unknown byte at 0x45B9 overrides the current-action exclusions. */
    if (!state->reinforcementChance.chanceBonus) {
        switch (state->activity.currentAction) {
        case 0x169:
        case 0x16A:
        case 0x16B:
        case 0x16C:
        case 0x17D:
        case 0x17E:
            return 0;
        }
    }
    u16 sources[10] = {0};
    source4CCopyHalves(entry, sources);
    s32 chanceMultiplier = 1;
    for (s32 i = 0; i < 9; ++i) {
        if (sources[i]) {
            SourceMetadataFlags *metadata = dataTable41FindById(sources[i]);
            if (metadata != NULL && (metadata->flags & 4))
                chanceMultiplier = 2;
        }
    }
    for (s32 i = 0; i < 9; ++i) {
        if (sources[i]) {
            SourceMetadataFlags *metadata = dataTable41FindById(sources[i]);
            if (metadata != NULL && metadata->trigger.skill != 0 &&
                !FUN_003ec77c(state)) {
                s32 chance = metadata->trigger.chance;
                if (chance != 0 &&
                    (!randomize || chance * chanceMultiplier > lcgRandomRange(99)))
                    return metadata->trigger.skill;
            }
        }
    }
    return 0;
}
}
