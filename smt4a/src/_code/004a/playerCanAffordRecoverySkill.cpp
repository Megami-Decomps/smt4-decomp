/* NON_MATCHING: the player test matches; the party member's skill search is not pair-unrolled (retail compares two
   skills per step against the id kept in r8), so the party loop's registers differ. */
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"
#include "code/Code004b_Smt4a.h"
#include "gamedata/SaveSlotTable.h"

/* Whether a party member knows `skill` (FUN_004bd410 has the same search). */
static __inline bool recoveryUnitHasSkill(const SlotRecordA *unit, u16 skill)
{
    for (s32 index = 0; index < 8; ++index) {
        if (unit->skills[index] == skill)
            return true;
    }
    return false;
}

/* The player knows `id`: playerHasSkill's body, a plain static that armcc inlines here. */
static u32 playerHasSkill(u32 id)
{
    PlayerDataA *player = gameGetPlayerData();
    for (s32 i = 0; i < 8; ++i) {
        if (player->skills[i] == id)
            return 1;
    }
    return 0;
}

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 skillGetCostWithRankReduction(u32 skill, u32 mode);
s32 gameSlotTableFindFree();

// Check whether the player or a usable party demon can afford the recovery skill.
u32 playerCanAffordRecoverySkill()
{
    u32 skill = 0x8c; /* the recovery skill */
    if (!gameFlagIsSet(0x401))
        return 0;
    if (playerHasSkill(skill)) {
        PlayerDataA *player = gameGetPlayerData();
        if (skillGetCostWithRankReduction(skill, 1) < static_cast<s16>(player->mp))
            return 1;
    }
    s32 slotCount = gameSlotTableFindFree();
    const s8 *slots = gameGetSlotTable()->party;
    for (s32 slot = 0; slot < slotCount; ++slot) {
        if (slots[slot] < 0)
            continue;
        SlotRecordA *unit = gameGetSlotRecord(slots[slot]);
        if (!unit)
            continue;
        if (recoveryUnitHasSkill(unit, skill) &&
            skillGetAdjustedCost(unit, skill) < static_cast<s16>(unit->mp)) {
            if (unit->ailments & 2)
                return 0;
            if (unit->ailments & 0x400)
                return 0;
            return 1;
        }
    }
    return 0;
}
}
