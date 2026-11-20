/* NON_MATCHING: skill ID remains immediate rather than retail's preserved registers; skill-loop and party-register allocation differ. */
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"
#include "code/Code004b_Smt4a.h"
#include "gamedata/SaveSlotTable.h"

/* The skill list is at 0x34 in both the unit record and the player's record (PlayerDataA); the player is passed as a unit record. */
static __inline bool recoveryUnitHasSkill(const SlotRecordA *unit, u16 skill)
{
    for (s32 index = 0; index < 8; ++index) {
        if (unit->skills[index] == skill)
            return true;
    }
    return false;
}

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 skillGetCostWithRankReduction(u32 skill, u32 mode);
s32 gameSlotTableFindFree();

// Check whether the player or a usable party demon can afford the recovery skill.
u32 playerCanAffordRecoverySkill()
{
    if (!gameFlagIsSet(0x401))
        return 0;
    PlayerDataA *player = gameGetPlayerData();
    if (recoveryUnitHasSkill(reinterpret_cast<const SlotRecordA *>(player), 0x8c)) {
        player = gameGetPlayerData();
        if (skillGetCostWithRankReduction(0x8c, 1) < static_cast<s16>(player->mp))
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
        if (recoveryUnitHasSkill(unit, 0x8c) &&
            skillGetAdjustedCost(unit, 0x8c) < static_cast<s16>(unit->mp)) {
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
