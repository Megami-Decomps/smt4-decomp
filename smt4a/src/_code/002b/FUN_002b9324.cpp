#include "gamedata/MapSaveBlockA.h"
#include "game/GameStateA.h"
#include <stddef.h>
#include "code/Code001b.h"
extern "C" {
s32 optionsGoalConditionCheck(void);
s32 recordIsAvailable(u16 id);
s32 questGetRequirementProgress(u16 id, s32 slot, s32 *values);
s32 questHasNewMark(u16 id);
s32 partyEntryBitsBit1(u16 id);

// Classify unavailable party entries, preferring later matching categories.
s32 FUN_002b9324(void)
{
    s32 status = 0;
    gameFlagsGetBlock();
    if (g_gameState.table2FCounterPending)
        return 4;
    for (u16 id = 100; id < 400; ++id) {
        if (questHasNewMark(id)) {
            s32 kind = table1bOr1cGetRecordValue(id);
            if (kind == 1) {
                if (partyEntryBitsBit1(id)) {
                    s32 total = 0;
                    for (s32 slot = 0; slot < 4; ++slot) {
                        s32 values[3];
                        if (questGetRequirementProgress(id, slot, values))
                            total += values[0];
                    }
                    if (total == 0)
                        status = 1;
                }
            } else if (kind == 0 && partyEntryBitsBit1(id) && recordIsAvailable(id)) {
                s32 total = 0;
                for (s32 slot = 0; slot < 4; ++slot) {
                    s32 values[3];
                    if (questGetRequirementProgress(id, slot, values))
                        total += values[0];
                }
                if (total == 0)
                    status = 2;
            }
        }
    }
    if (status == 0 && optionsGoalConditionCheck())
        status = 3;
    return status;
}
}
