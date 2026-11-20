/* Handing in a finished IV quest: what the quest center's delivery state (qcDeliveryStep) and the
 * script command scrComm_Quest_UpdateObjective both do with the record's requirements. */
#ifndef QUEST_CENTER_QUESTDELIVERY_H
#define QUEST_CENTER_QUESTDELIVERY_H

#include "common.h"
#include "quest_center/QuestRecord.h"

extern "C" {
/* Takes `amount` of counter `flag` (an item count) from the player. */
void saveFlagClearOrSubtractCounter(u32 flag, u32 amount);
/* The party slot of the active unit `id`. */
s32 partyFindActiveSlotById(u32 id);
/* Removes the unit in that slot from the stock. */
u32 FUN_0029bbc8(u32 unitIndex);
}

/* Takes what a finished quest asked for: the counted items, and the party member handed over. */
static __inline void questTakeRequirements(QuestRecord *record)
{
    for (s32 i = 0; i < 6; i++) {
        if (record->requirements[i].kind == 1) {
            saveFlagClearOrSubtractCounter(record->requirements[i].id, record->requirements[i].count);
        } else if (record->requirements[i].kind == 2) {
            FUN_0029bbc8(partyFindActiveSlotById(record->requirements[i].id));
        }
    }
}

#endif
