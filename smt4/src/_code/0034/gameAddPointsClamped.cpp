#include "common.h"

extern "C" {

typedef struct QuestCenterBlock {
    /* 0x00 */ u8 unk00[0x16];
    /* 0x16 */ u16 points;
} QuestCenterBlock;

extern QuestCenterBlock *gameGetQuestCenterBlock(void);

/* Adds `amount` to the quest center's points, capped at 0xFFFF. */
void gameAddPointsClamped(int amount)
{
    QuestCenterBlock *block = gameGetQuestCenterBlock();

    amount = block->points + amount;
    if (amount >= 0x10000) {
        amount = 0xFFFF;
    }
    block->points = amount;
}

} /* extern "C" */
