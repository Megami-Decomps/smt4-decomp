/* NON_MATCHING: 12 lines: register allocation only: retail loads the first parent unit's first skill into r1 and its skill-array base into r2 and preloads the third skill before the unrolled loop; armcc here swaps r1/r2 and schedules the preload after the loop counter (the second parent's loop matches). */
#include "ui/PartyPanelState.h"
#include "gamedata/UnitRecordAccess.h"
#include "camp/Unite/UniteGlobals.h"
#include "util/BitsAndBytes_VariantB.h"
#include "code/Code0026_Smt4.h"


struct SlotTable {
    u8 unk0000[0x90f0];
    s8 party[8];            // 0x90f0
};

extern "C" {
SlotTable* gameGetSlotTable(void);
StatBlock* partyMemberFindById(u32 id);
void FUN_00269bc4(void* unite);
void FUN_0029dc74(u32 product, void* resultUnit);
void uniteMergeInheritedSkillsAndStats(void* unite, StatBlock* first, StatBlock* second, s32 mode, void* resultUnit);
s32 gameCountUnits(void);
void FUN_0029b130(u16 *skills, s32 count, const UnitePairEntryIV *pair, u32 mode);
s32 flagCountUnlockedSlots(void* unit);
void unitRecalculateEffectiveStats(void* unit);

/* Finds the party unit with the given id, or NULL. */
static StatBlock* findPartyUnit(u32 id)
{
    for (s32 i = 0; i < gameCountUnits(); i++) {
        StatBlock* unit = gameGetUnitRecord(gameGetSlotTable()->party[i]);
        if (unit->id == id) return unit;
    }
    return NULL;
}

/* Confirms the fusion shown in the party panel: builds the result unit and teaches it the
 * parents' skills that fit. Returns 1 when the fusion was applied. */
u32 partyPanelApplyFusion(void)
{
    PartyPanelState* panel = g_partyPanel;
    gameGetSlotTable();
    StatBlock* parents[2] = { NULL, NULL };
    for (s32 i = 0; i < 2; i++) parents[i] = partyMemberFindById(panel->fusionParentIds[i] & 0xffff);
    if (parents[0] != NULL && parents[1] != NULL) {
        FUN_00269bc4(panel->unite);
        if (fusionBuildPreviewFromUnits(panel->unite, parents[0], parents[1], &panel->fusionPair) != 0) {
            FUN_0029dc74(panel->fusionPair.resultIdentifier, panel->fusionResult);
            uniteMergeInheritedSkillsAndStats(panel->unite, parents[0], parents[1], 0, panel->fusionResult);

            u16 inherited[16];
            for (s32 i = 0; i < 16; i++) inherited[i] = 0;
            u32 count = 0;
            StatBlock* first = findPartyUnit(panel->fusionPair.firstIdentifier);
            for (s32 i = 0; i < 8; i++) {
                if (first->skills.ids[i] != 0) inherited[count++] = first->skills.ids[i];
            }
            StatBlock* second = findPartyUnit(panel->fusionPair.secondIdentifier);
            for (s32 i = 0; i < 8; i++) {
                if (second->skills.ids[i] != 0) inherited[count++] = second->skills.ids[i];
            }
            FUN_0029b130(inherited, count, NULL, 0);

            s32 slots = flagCountUnlockedSlots(panel->fusionResult);
            for (s32 i = 0; i < 8; i++) {
                if (inherited[i] != 0 && arrayContainsU16(panel->fusionResultSkills, slots, inherited[i]) == 0) {
                    for (s32 j = 0; j < slots; j++) {
                        if (panel->fusionResultSkills[j] == 0) {
                            panel->fusionResultSkills[j] = inherited[i];
                            break;
                        }
                    }
                }
            }
            unitRecalculateEffectiveStats(panel->fusionResult);
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
