#include "common.h"

extern "C" {

typedef struct QuestCenterPointsBlock {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 points;
} QuestCenterPointsBlock;

extern QuestCenterPointsBlock *gameGetQuestCenterBlock(void);

/* Adds `amount` to the quest center's points, capped at 0xFFFF. */
void gameAddPointsClamped(int amount)
{
    QuestCenterPointsBlock *block = gameGetQuestCenterBlock();

    amount = block->points + amount;
    if (amount >= 0x10000) {
        amount = 0xFFFF;
    }
    block->points = amount;
}

} /* extern "C" */
