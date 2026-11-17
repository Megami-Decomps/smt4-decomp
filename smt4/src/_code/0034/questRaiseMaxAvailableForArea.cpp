#include "common.h"
#include "quest_center/QuestRecord.h"

extern "C" {

typedef struct QuestCenterBlock {
    /* 0x000 */ u8 unk000[0x25C];
    /* 0x25C */ u8 maxAvailable[1]; /* per area: most quests seen as available */
} QuestCenterBlock;

QuestCenterBlock *gameGetQuestCenterBlock(void);
s32 questRequirementsMet(u16 id);

/* Raises the area's recorded maximum to the number of quests in it that are available now. */
void questRaiseMaxAvailableForArea(u32 area)
{
    u8 *maxAvailable = &gameGetQuestCenterBlock()->maxAvailable[area];
    s32 count = 0;

    for (s32 id = 0; id < 400; id++) {
        QuestRecord *record = dataTable1bOr1cGetRecord(static_cast<u16>(id));

        if (record != NULL && (record->flags & 1) == 0 && record->area == area && questRequirementsMet(id) != 0) {
            count++;
        }
    }
    if (count > *maxAvailable) {
        *maxAvailable = count;
    }
}

} /* extern "C" */
