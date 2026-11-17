/* NON_MATCHING: readable rewrite compiles; retail unrolls the skill collection and keeps the panel in a callee-saved register with a 68-byte frame; unit lookup returns NULL where the draft reads address 0 */
#include "ui/PartyPanelState.h"

// Recorded unit: only the skill list and id.
struct PartyUnit {
    u8 unk00[0x34];
    u16 skills[8];          // 0x34
    u8 unk44[2];
    u16 id;                 // 0x46
};

struct SlotTable {
    u8 unk0000[0x90f0];
    s8 party[8];            // 0x90f0
};

extern "C" {
SlotTable* gameGetSlotTable(void);
PartyUnit* partyMemberFindById(u32 id);
void FUN_00269bc4(void* unite);
s32 FUN_002624b8(void* unite, PartyUnit* first, PartyUnit* second);
void FUN_0029dc74(u32 product, void* resultUnit);
void uniteMergeInheritedSkillsAndStats(void* unite, PartyUnit* first, PartyUnit* second, s32 mode, void* resultUnit);
s32 gameCountUnits(void);
PartyUnit* gameGetUnitRecord(s32 slot);
void FUN_0029b130(s16* skills, u32 count, s32 mode);
s32 flagCountUnlockedSlots(void* unit);
s32 arrayContainsU16(void* array, s32 count, u16 value);
void unitRecalculateEffectiveStats(void* unit);

// Finds the party unit with the given id, or NULL.
static PartyUnit* findPartyUnit(u32 id)
{
    for (s32 i = 0; i < gameCountUnits(); i++) {
        PartyUnit* unit = gameGetUnitRecord(gameGetSlotTable()->party[i]);
        if (unit->id == id) return unit;
    }
    return NULL;
}

// Appends the unit's non-empty skills to the list.
static u32 appendSkills(s16* list, u32 count, PartyUnit* unit)
{
    for (s32 i = 0; i < 8; i++) {
        if (unit->skills[i] != 0) list[count++] = unit->skills[i];
    }
    return count;
}

// Confirms the fusion shown in the party panel: builds the result unit and teaches it the
// parents' skills that fit. Returns 1 when the fusion was applied.
u32 FUN_001d1828(void)
{
    PartyPanelState* panel = g_partyPanel;
    gameGetSlotTable();
    PartyUnit* parents[2] = { NULL, NULL };
    for (s32 i = 0; i < 2; i++) parents[i] = partyMemberFindById(panel->fusionParentIds[i] & 0xffff);
    if (parents[0] == NULL || parents[1] == NULL) return 0;

    FUN_00269bc4(panel->unite);
    if (FUN_002624b8(panel->unite, parents[0], parents[1]) == 0) return 0;
    FUN_0029dc74((panel->fusionProduct & 0x1ffff) >> 2, panel->fusionResult);
    uniteMergeInheritedSkillsAndStats(panel->unite, parents[0], parents[1], 0, panel->fusionResult);

    s16 inherited[20];
    for (s32 i = 0; i < 16; i++) inherited[i] = 0;
    u32 count = 0;
    PartyUnit* first = findPartyUnit(panel->fusionParents & 0x7fff);
    count = appendSkills(inherited, count, first);
    PartyUnit* second = findPartyUnit((panel->fusionParents & 0x3fffffff) >> 0xf);
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
