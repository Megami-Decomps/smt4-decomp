#include "common.h"

extern "C" {

typedef struct QuestCenterBlock {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u16 points;
} QuestCenterBlock;

extern QuestCenterBlock *gameGetQuestCenterBlock(void);

/* Adds `amount` to the quest center points, saturating at 0xFFFF. */
void questCenterAddPoints(s32 amount)
{
    QuestCenterBlock *block = gameGetQuestCenterBlock();
    s32 total = block->points + amount;

    block->points = total >= 0x10000 ? 0xFFFF : total;
}

} /* extern "C" */
