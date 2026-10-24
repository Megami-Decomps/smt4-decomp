/* NON_MATCHING: readable rewrite compiles; retail unrolls the skill collection and keeps the panel in a callee-saved register with a 68-byte frame; unit lookup returns NULL where the draft reads address 0 */
#include "common.h"

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

// Fusion preview of the party panel: result words at 0xb48/0xb4c and the result unit at 0xb50.
struct PartyPanel {
    u8 unk0000[0xb34];
    u32 parentIds[2];           // 0xb34
    u8 unkb3c[0xb48 - 0xb3c];
    u32 parentsWord;            // 0xb48: first parent in bits 0-14, second in 15-29
    u32 productWord;            // 0xb4c: product id in bits 2-16
    u8 resultUnit[0x34];        // 0xb50
    u16 resultSkills[8];        // 0xb84
    u8 unkb94[0x115c - 0xb94];
    u32 context;                // 0x115c
};

extern "C" {

extern PartyPanel* g_partyPanel;

SlotTable* gameGetSlotTable(void);
PartyUnit* partyMemberFindById(u32 id);
void FUN_00269bc4(u32 context);
s32 FUN_002624b8(u32 context, PartyUnit* first, PartyUnit* second);
void FUN_0029dc74(u32 product, void* resultUnit);
void uniteMergeInheritedSkillsAndStats(u32 context, PartyUnit* first, PartyUnit* second, s32 mode, void* resultUnit);
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
    PartyPanel* panel = g_partyPanel;
    gameGetSlotTable();
    PartyUnit* parents[2] = { NULL, NULL };
    for (s32 i = 0; i < 2; i++) parents[i] = partyMemberFindById(panel->parentIds[i] & 0xffff);
    if (parents[0] == NULL || parents[1] == NULL) return 0;

    FUN_00269bc4(panel->context);
    if (FUN_002624b8(panel->context, parents[0], parents[1]) == 0) return 0;
    FUN_0029dc74((panel->productWord & 0x1ffff) >> 2, panel->resultUnit);
    uniteMergeInheritedSkillsAndStats(panel->context, parents[0], parents[1], 0, panel->resultUnit);

    s16 inherited[20];
    for (s32 i = 0; i < 16; i++) inherited[i] = 0;
    u32 count = 0;
    PartyUnit* first = findPartyUnit(panel->parentsWord & 0x7fff);
    count = appendSkills(inherited, count, first);
    PartyUnit* second = findPartyUnit((panel->parentsWord & 0x3fffffff) >> 0xf);
    count = appendSkills(inherited, count, second);
    FUN_0029b130(inherited, count, 0);

    s32 slots = flagCountUnlockedSlots(panel->resultUnit);
    for (s32 i = 0; i < 8; i++) {
        if (inherited[i] != 0 && arrayContainsU16(panel->resultSkills, slots, inherited[i]) == 0) {
            for (s32 j = 0; j < slots; j++) {
                if (panel->resultSkills[j] == 0) {
                    panel->resultSkills[j] = inherited[i];
                    break;
                }
            }
        }
    }
    unitRecalculateEffectiveStats(panel->resultUnit);
    return 1;
}

} /* extern "C" */
