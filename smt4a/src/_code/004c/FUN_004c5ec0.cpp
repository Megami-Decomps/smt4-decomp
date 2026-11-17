/* NON_MATCHING: retail moves the roll to r1 before the mask test and loads the battle flag pair with ldrd (the build uses two ldr and keeps the roll in r0) */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "gamedata/SkillDataRecord.h"

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
void source4CCopyHalves(BtlCombatantEntryA *unit, u16 *skills);
s32 lcgRandomRange(u32 range);

/* Rolls each of the unit's chance skills in order and returns the first that procs, or 0. */
u16 FUN_004c5ec0(u32 unitId)
{
    ChanceBattleFlags *battle = (ChanceBattleFlags *)btlGetMainState();
    BtlCombatantEntryA *unit = btlMainFindEntryByListedId((BtlMainStateA *)battle, unitId);
    u16 skills[10] = {0};
    s32 i;

    source4CCopyHalves(unit, skills);
    u16 procced = 0;
    for (i = 0; i < 9; i++) {
        if (skills[i] != 0) {
            const Table04ExtraRecord *skill = dataTable41FindById(skills[i]);
            u32 chance = skill != NULL ? skill->stats.chance : 0;

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
