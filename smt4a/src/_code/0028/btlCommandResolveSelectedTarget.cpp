#include "battle/BattleCommandTargets.h"
#include "gamedata/SkillDataRecord.h"
#include "shard/Shard0031.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
void btlMenuResolveHighlightedCommand(BattleCommandTargets *command, u16 *kind, s16 *skill);
s32 listCursorGetRowOfChildIfUnblocked(void *selection);
s32 skillApplyToTarget(u32 actor, s32 target, u32 skill, s32 *result);

// Resolve the selected target, reject unavailable special skills and preserve a forced result.
u32 btlCommandResolveSelectedTarget(BattleCommandTargets *command)
{
    u16 kind = 0;
    s16 skill = 0;
    btlMenuResolveHighlightedCommand(command, &kind, &skill);
    s32 selected = listCursorGetRowOfChildIfUnblocked(command->targetSelection);
    if (selected != 0) {
        SaveSlotTableA *slots = gameGetSlotTable();
        s32 target = slots->reserve[selected - 1];
        skillApplyToTarget(command->actorIndex - 1, target, skill,
            &command->results[selected]);
        slots = gameGetSlotTable();
        if (slots->reserve[selected - 1] < 0) {
            SkillDataRecordA *record = skillDataFindById(skill);
            if ((record && record->effectProperties.targeting == 2 && record->sort.category == 3) ||
                record->identity.id == 0x8B || record->identity.id == 0x136)
                return 0;
        }
    } else {
        skillApplyToTarget(command->actorIndex - 1, -1, skill, &command->results[0]);
    }
    SkillDataRecordA *record = skillDataFindById(skill);
    if ((record->flags & 0x600) && command->actorIndex < 4 && command->fallback < 0)
        command->results[command->actorIndex] = command->fallback;
    return 1;
}
}
