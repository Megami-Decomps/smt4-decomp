#include "common.h"

extern "C" {

typedef struct QuestMapBlock {
    /* 0x000 */ u8 unk000[0xE42];
    /* 0xE42 */ s16 cursorX;
    /* 0xE44 */ s16 cursorY;
} QuestMapBlock;

extern QuestMapBlock *DAT_00447e58; /* 0x447e58 */

extern int FUN_001e34fc(s16 x, s16 y, int arg);

/* Stores the cursor position in the quest map block and refreshes it. */
void questMapSetCursor(int x, int y)
{
    QuestMapBlock *block = DAT_00447e58;

    block->cursorX = x;
    block->cursorY = y;
    FUN_001e34fc(x, y, 0);
}

} /* extern "C" */
