/* NON_MATCHING: readable rewrite compiles; retail unrolls the skill collection and keeps the panel in a callee-saved register with a 68-byte frame; unit lookup returns NULL where the draft reads address 0 */
#include "ui/PartyPanelState.h"
#include "gamedata/FusionCandidateFilter.h"
#include "gamedata/PackedIdentifiers.h"
#include "gamedata/UnitRecordAccess.h"


typedef char PartyFusionResultBoundaryCheck[
    offsetof(PartyPanelState, fusionDescriptor) == 0xB48 &&
    offsetof(PartyPanelState, fusionResult) == 0xB50 &&
    sizeof(PackedIdentifiers) == 8 ? 1 : -1];

struct SlotTable {
    u8 unk0000[0x90f0];
    s8 party[8];            // 0x90f0
};

extern "C" {
SlotTable* gameGetSlotTable(void);
StatBlock* partyMemberFindById(u32 id);
void FUN_0029dc74(u32 product, void* resultUnit);
void uniteMergeInheritedSkillsAndStats(void* unite, StatBlock* first, StatBlock* second, s32 mode, void* resultUnit);
s32 gameCountUnits(void);
void FUN_0029b130(s16* skills, u32 count, s32 mode);
s32 flagCountUnlockedSlots(void* unit);
s32 arrayContainsU16(void* array, s32 count, u16 value);
void unitRecalculateEffectiveStats(void* unit);

// Finds the party unit with the given id, or NULL.
static StatBlock* findPartyUnit(u32 id)
{
    for (s32 i = 0; i < gameCountUnits(); i++) {
        StatBlock* unit = gameGetUnitRecord(gameGetSlotTable()->party[i]);
        if (unit->id == id) return unit;
    }
    return NULL;
}

// Appends the unit's non-empty skills to the list.
static u32 appendSkills(s16* list, u32 count, StatBlock* unit)
{
    for (s32 i = 0; i < 8; i++) {
        if (unit->skills.ids[i] != 0) list[count++] = unit->skills.ids[i];
    }
    return count;
}

// Confirms the fusion shown in the party panel: builds the result unit and teaches it the
// parents' skills that fit. Returns 1 when the fusion was applied.
u32 FUN_001d1828(void)
{
    PartyPanelState* panel = g_partyPanel;
    gameGetSlotTable();
    StatBlock* parents[2] = { NULL, NULL };
    for (s32 i = 0; i < 2; i++) parents[i] = partyMemberFindById(panel->fusionParentIds[i] & 0xffff);
    if (parents[0] == NULL || parents[1] == NULL) return 0;

    FUN_00269bc4(static_cast<FusionCandidateFilter *>(panel->unite));
    if (FUN_002624b8(static_cast<FusionCandidateFilter *>(panel->unite), parents[0], parents[1],
                     &panel->fusionDescriptor) == 0) return 0;
    FUN_0029dc74(panel->fusionDescriptor.resultIdentifier, panel->fusionResult);
    uniteMergeInheritedSkillsAndStats(panel->unite, parents[0], parents[1], 0, panel->fusionResult);

    s16 inherited[20];
    for (s32 i = 0; i < 16; i++) inherited[i] = 0;
    u32 count = 0;
    StatBlock* first = findPartyUnit(panel->fusionDescriptor.firstIdentifier);
    count = appendSkills(inherited, count, first);
    StatBlock* second = findPartyUnit(panel->fusionDescriptor.secondIdentifier);
    count = appendSkills(inherited, count, second);
    FUN_0029b130(inherited, count, 0);

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

} /* extern "C" */
