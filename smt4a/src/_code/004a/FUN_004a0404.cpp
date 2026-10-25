/* NON_MATCHING: skill ID remains immediate rather than retail's preserved registers; skill-loop and party-register allocation differ. */
#include "shard/Shard0031.h"
#include "shard/Shard0032.h"
#include "shard/Shard004B.h"
#include "gamedata/PlayerDataBlock.h"
#include "gamedata/SaveSlotTable.h"

static __inline bool recoveryUnitHasSkill(const UnitRecord *unit, u16 skill)
{
    for (s32 index = 0; index < 8; ++index) {
        if (unit->skillList.skills[index] == skill)
            return true;
    }
    return false;
}

extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 FUN_003df57c(u32 skill, u32 mode);
s32 gameSlotTableFindFree();
UnitRecord *gameGetSlotRecord(s32 slot);
s32 FUN_004bcbb4(UnitRecord *unit, u32 skill);

// Check whether the player or a usable party demon can afford the recovery skill.
u32 FUN_004a0404()
{
    if (!gameFlagIsSet(0x401))
        return 0;
    UnitRecord *player = reinterpret_cast<UnitRecord *>(gameGetPlayerData());
    if (recoveryUnitHasSkill(player, 0x8c)) {
        player = reinterpret_cast<UnitRecord *>(gameGetPlayerData());
        if (FUN_003df57c(0x8c, 1) < static_cast<s16>(player->unk2C))
            return 1;
    }
    s32 slotCount = gameSlotTableFindFree();
    const s8 *slots = gameGetSlotTable()->party;
    for (s32 slot = 0; slot < slotCount; ++slot) {
        if (slots[slot] < 0)
            continue;
        UnitRecord *unit = gameGetSlotRecord(slots[slot]);
        if (!unit)
            continue;
        if (recoveryUnitHasSkill(unit, 0x8c) &&
            FUN_004bcbb4(unit, 0x8c) < static_cast<s16>(unit->unk2C)) {
            const ScaledRecordValues *values = reinterpret_cast<const ScaledRecordValues *>(unit);
            if (values->flags & 2)
                return 0;
            if (values->flags & 0x400)
                return 0;
            return 1;
        }
    }
    return 0;
}
}
