/* NON_MATCHING: initial exclusion-mask AND/OR operands use different scratch registers; the paired flags load matches. */
#include "battle/BtlMainAccess.h"
#include "gamedata/Table04Record.h"

struct Source4C;
extern "C" {
Table04ExtraRecord *dataTable41FindById(u32 skill);
Source4C *FUN_003f0e20(BtlMainStateA *battle, u32 unit);
void source4CCopyHalves(Source4C *source, u16 *skills);
s32 lcgRandomRange(u32 maximum);

// Choose the first passive-triggered skill whose activation chance succeeds.
s32 FUN_004c5da4(u32 unit, s32 rollChance)
{
    struct TriggerMaskView {
        u8 unk00[0xa0];
        u64 blockedStates; // 0xa0
    };
    extern TriggerMaskView DAT_005713f0;
    BtlMainStateA *battle = btlGetMainState();
    u64 flags = battle->stateFlags64.bits;
    if ((flags & DAT_005713f0.blockedStates) != 0)
        return 0;
    Source4C *source = FUN_003f0e20(battle, unit);
    switch (battle->activity.currentAction) {
    case 0x169:
    case 0x16a:
    case 0x16b:
    case 0x16c:
    case 0x17d:
    case 0x17e:
        return 0;
    }
    u16 skills[10] = {0};
    source4CCopyHalves(source, skills);
    for (s32 index = 0; index < 9; ++index) {
        if (skills[index] != 0) {
            Table04ExtraRecord *skill = dataTable41FindById(skills[index]);
            if (skill != NULL && skill->trigger.triggeredSkill != 0) {
                s32 chance = skill->trigger.triggerChance;
                if (chance != 0 && (!rollChance || lcgRandomRange(99) < chance))
                    return skill->trigger.triggeredSkill;
            }
        }
    }
    return 0;
}
}
