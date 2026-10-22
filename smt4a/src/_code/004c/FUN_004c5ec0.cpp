/* NON_MATCHING: retail zeroes the result register after source4CCopyHalves and moves the roll to r1 before the mask test */
#include "battle/btlMain.h"

struct ChanceSkillUnit {
    u64 flags; /* 0x00 */
};
struct ChanceSkill {
    u8 unk00[0x27];
    u8 chance; /* 0x27: percent */
};
struct ChanceBattleFlags {
    u8 unk0000[0x45a0];
    u64 flags; /* 0x45a0 */
};
struct ChanceSkillMasks {
    u8 unk00[0xa8];
    u64 alwaysProc; /* 0xa8 */
};

extern "C" {
extern ChanceSkillMasks DAT_005713f0;
BtlMainStateA *btlGetMainState(void);
ChanceSkillUnit *FUN_003f0e20(BtlMainStateA *state, u32 unitId);
void source4CCopyHalves(ChanceSkillUnit *unit, u16 *skills);
const ChanceSkill *FUN_0034a290(u32 skillId);
s32 lcgRandomRange(u32 range);

/* Rolls each of the unit's chance skills in order and returns the first that procs, or 0. */
u16 FUN_004c5ec0(u32 unitId)
{
    ChanceBattleFlags *battle = (ChanceBattleFlags *)btlGetMainState();
    ChanceSkillUnit *unit = FUN_003f0e20((BtlMainStateA *)battle, unitId);
    u16 skills[10] = {0};
    u16 procced = 0;
    s32 i;

    source4CCopyHalves(unit, skills);
    for (i = 0; i < 9; i++) {
        if (skills[i] != 0) {
            const ChanceSkill *skill = FUN_0034a290(skills[i]);
            u32 chance = skill != NULL ? skill->chance : 0;

            if (chance != 0) {
                s32 roll = lcgRandomRange(99);

                if (battle->flags & DAT_005713f0.alwaysProc) {
                    roll = 0;
                }
                if ((s32)chance > roll) {
                    procced = skills[i];
                    break;
                }
            }
        }
    }
    return procced;
}
}
