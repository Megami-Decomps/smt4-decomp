/* NON_MATCHING: hpPercent helper matches the ldm hp/maxHp load (37 diff lines); remaining: third mask test and marked-entry test are predicated (changing BtlEntryA::marked to s8 drops this to 2 diff lines but regresses 5 other units in usercheck). */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match7_BattleCandidateMasks.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "code/Code003e_Smt4a.h"

/* Current HP as a percentage of the maximum (same helper as FUN_00372b80). */
static __inline s32 hpPercent(s32 hp, s32 maxHp)
{
    return hp * 100 / maxHp;
}

extern "C" {

extern const u64 g_battleMaskPresets[];

s32 scrGetArg(u32 index);
void FUN_003f2638(BtlMainStateA *battle, s32 kind, BattleRosterRecordA *record, s32 flag);

/* Script command: finds the first eligible, marked reserve entry with the script id and ends it:
 * entries under 20% of their HP that have a dying motion get reflection 2, the others 1; the roster record's
 * motion state is then cleared. */
u32 FUN_00380f20(void)
{
    s32 id = scrGetArg(0);
    BtlMainStateA *battle = btlGetMainState();
    u64 active = g_battleMaskPresets[0];
    BattleRosterRecordA *record = NULL;

    for (s32 i = 4; i < 54; ++i) {
        BtlCombatantEntryA *entry = &battle->entries[i];

        if ((entry->flags & active) != 0 && (entry->flags & g_battleMaskPresets[3]) == 0 &&
            (entry->flags & g_battleMaskPresets[1]) != 0 && entry->data.marked != 0 && entry->data.id == id) {
            record = &battle->roster[i];
            break;
        }
    }
    BtlCombatantEntryA *skill = btlMainFindEntryByListedId(battle, record->combatant.parameterIndex);
    BattleMotionSelection *selection = btlMotionFindSelection(battle, skill->data.id);

    if (selection != NULL) {
        BattleMotionSequence *dying = btlMotionFindSequence(battle, selection->kind, 2);

        if (hpPercent(skill->data.hp, skill->data.maxHp) < 20 && dying != NULL) {
            FUN_003f2638(battle, 2, record, 0);
        } else {
            FUN_003f2638(battle, 1, record, 0);
        }
        record->motion.state = 0;
        record->motion.stateFrame = 0;
        record->motion.motionDuration = 0;
    }
    return 1;
}

} /* extern "C" */
