/* NON_MATCHING: slot-table indexing uses a precomputed byte-array base rather than retail's record-relative addressing. */
#include "battle/BattleCommandTargets.h"
#include "gamedata/Table04Record.h"
#include "shard/Shard0032.h"

extern "C" {
SummarySource *gameGetSlotTable();
void FUN_002ccde8(BattleCommandTargets *command, u16 *kind, s16 *skill);
s32 FUN_002a4878(void *selection);
s32 FUN_002c7bb0(u32 actor, s32 target, u32 skill, s32 *result);
Table04Record *dataTable04FindById(u32 id);

// Resolve the selected target, reject unavailable special skills and preserve a forced result.
u32 FUN_0028c620(BattleCommandTargets *command)
{
    u16 kind = 0;
    s16 skill = 0;
    FUN_002ccde8(command, &kind, &skill);
    s32 selected = FUN_002a4878(command->targetSelection);
    if (selected != 0) {
        const s8 *slots = reinterpret_cast<const s8 *>(gameGetSlotTable()) + 0x1C9F;
        FUN_002c7bb0(command->actorIndex - 1, slots[selected], skill,
            &command->results[selected]);
        slots = reinterpret_cast<const s8 *>(gameGetSlotTable()) + 0x1C9F;
        if (slots[selected] < 0) {
            Table04Record *record = dataTable04FindById(skill);
            if ((record && record->effectProperties.targeting == 2 && record->sort.category == 3) ||
                record->identity.id == 0x8B || record->identity.id == 0x136)
                return 0;
        }
    } else {
        FUN_002c7bb0(command->actorIndex - 1, -1, skill, &command->results[0]);
    }
    Table04Record *record = dataTable04FindById(skill);
    if ((record->flags & 0x600) && command->actorIndex < 4 && command->fallback < 0)
        command->results[command->actorIndex] = command->fallback;
    return 1;
}
}
