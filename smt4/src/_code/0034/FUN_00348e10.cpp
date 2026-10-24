#include "common.h"

extern "C" {

typedef struct QuestRecord {
    /* 0x000 */ u8 unk000[7];
    /* 0x007 */ u8 flags;
    /* 0x008 */ u8 unk008[0x194];
    /* 0x19C */ u16 areaId;
} QuestRecord;

typedef struct QuestCenterBlock {
    /* 0x000 */ u8 unk000[0x25C];
    /* 0x25C */ u8 maxAvailable[1]; /* per area: most quests seen as available */
} QuestCenterBlock;

QuestCenterBlock *gameGetQuestCenterBlock(void);
QuestRecord *dataTable1bOr1cGetRecord(u16 id);
s32 questRequirementsMet(u16 id);

/* Raises the area's recorded maximum to the number of quests in it that are available now. */
void FUN_00348e10(u32 area)
{
    u8 *maxAvailable = &gameGetQuestCenterBlock()->maxAvailable[area];
    s32 count = 0;

    for (s32 id = 0; id < 400; id++) {
        QuestRecord *record = dataTable1bOr1cGetRecord(id);

        if (record != NULL && (record->flags & 1) == 0 && record->areaId == area && questRequirementsMet(id) != 0) {
            count++;
        }
    }
    if (count > *maxAvailable) {
        *maxAvailable = count;
    }
}

} /* extern "C" */
