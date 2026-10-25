/* NON_MATCHING: retail reads the 64-bit state flags with one ldrd; armcc here splits it into two
 * ldr and schedules the roll result in r0 instead of r1 */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"
#include "shard/PassiveSkill.h"

/* Battle state flag masks: the mask whose bits make passive rolls always succeed at 0xA8. */
struct BtlPassiveFlagMasks {
    /* 0x00 */ u8 unk00[0xA8];
    /* 0xA8 */ u64 passiveAlways;
};

struct BtlCombatantEntryA;

extern "C" {

extern BtlPassiveFlagMasks DAT_005713f0;

BtlCombatantEntryA *FUN_003f0e20(BtlMainStateA *state, u32 id);
void source4CCopyHalves(BtlCombatantEntryA *entry, u16 *skillIds);
const PassiveSkillRecord *dataTable41FindById(u32 id);
s32 lcgRandomRange(s32 max);

/* Rolls the listed unit's passive skills in order and returns the first one whose chance hits
 * (0 when none does). */
u16 FUN_004c14c8(u32 listedId)
{
    BtlMainStateA *state = btlGetMainState();
    BtlCombatantEntryA *entry = FUN_003f0e20(state, listedId);
    u16 skillIds[10] = {0};
    u16 result;
    s32 i;

    source4CCopyHalves(entry, skillIds);
    result = 0;
    for (i = 0; i < 9; i++) {
        if (skillIds[i] != 0) {
            const PassiveSkillRecord *record = dataTable41FindById(skillIds[i]);
            s32 chance;
            if (record != NULL && (chance = record->holdChance) != 0) {
                s32 roll = lcgRandomRange(99);
                if (state->stateFlags64.bits & DAT_005713f0.passiveAlways) {
                    roll = 0;
                }
                if (chance > roll) {
                    result = skillIds[i];
                    break;
                }
            }
        }
    }
    return result;
}

} /* extern "C" */
