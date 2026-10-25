/* NON_MATCHING: selector stores schedule differently; state transition uses strd instead of retail's writeback stores. */
#include "shard/W4_W4Match2_UiQuest.h"
#include "shard/FUN_00298f88.h"

extern "C" {
void uiQuestLoadResources();
void FUN_0028fe0c(u32 questId, s32 mode);
void FUN_0029eb5c(void *cursor, s32 index);
s32 FUN_0029ee54(void *cursor);
void buttonHelpSetPreset(s32 preset);
void timerStart(void *timer, s32 animation, s32 initial);
void FUN_002bf810(u32 message);

// Focus the quest in the appropriate list, then open its detail panel.
void FUN_003115b4(u32 questId)
{
    UiQuest *quest = g_uiQuest;
    quest->questId = questId;
    s32 alternate = FUN_00298f88(questId);
    void *cursor;
    u16 *ids;
    if (alternate != 0) {
        cursor = quest->panel.alternate.cursor;
        ids = quest->cursor.alternate.ids;
    }
    quest->panel.detailMode = alternate;
    if (alternate == 0) {
        cursor = &quest->cursor;
        ids = quest->list;
    }
    quest->panel.unkF2 = 1;
    for (s32 index = 0; index < FUN_0029ee54(cursor); ++index) {
        if (ids[index] == questId) {
            FUN_0029eb5c(cursor, index);
            break;
        }
    }
    uiQuestLoadResources();
    FUN_0028fe0c(questId, 0);
    timerStart(quest->mainSprite, 0, 0);
    timerStart(quest->detailAnimation.timer, 2, 0);
    quest = g_uiQuest;
    quest->previousState = quest->state;
    quest->state = 0x17;
    quest->timer = 0;
    buttonHelpSetPreset(0x1A);
    FUN_002bf810(0x100025C);
}
}
