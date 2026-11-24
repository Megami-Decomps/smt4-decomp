#include "shard/W5_W5Match7_UiQuest.h"
#include "ui/UiSpriteApi.h"

extern "C" {
u8 dataTable1bOr1cRecordHasFlag1(u32 questId);
s32 gridNavigationGetItemCount(void *cursor);
void scrollListSetSelectionTracked(void *cursor, s32 index);
void uiFadeRequestClear(void);
void sysPlaySe(u32 sound);
void sysPlayVoice(u32 voice);

/* Focuses a quest, optionally repositions its list cursor, and enters the voiced transition state. */
void uiQuestOpenDetail(u32 questId, s32 reposition)
{
    UiQuestApoc *quest = g_uiQuest;
    quest->questId = questId;
    quest->unk90c = dataTable1bOr1cRecordHasFlag1(questId);
    quest->focusSpeed = 0.2088f;
    uiSpriteSetKeyframe(quest->sprite(7), 0, 0);
    uiSpriteSetImageKeyframe(quest->sprite(7), 8, 0);
    if (reposition) {
        quest->repositioned = 1;
        void *cursor;
        const u16 *list;
        if (quest->unk90c) {
            cursor = quest->alternateView()->cursor;
            list = quest->alternateView()->list;
        } else {
            cursor = quest->cursor;
            list = quest->list;
        }
        for (s32 index = 0; index < gridNavigationGetItemCount(cursor); ++index) {
            if (list[index] == questId) {
                scrollListSetSelectionTracked(cursor, index);
                break;
            }
        }
        uiSpriteSetKeyframe(quest->sprite(0), 0, 0);
        uiSpriteSetImageKeyframe(quest->sprite(0), 8, 0);
    } else {
        quest->repositioned = 0;
    }
    uiFadeRequestClear();
    uiQuestEnterMenuState(g_uiQuest, 20);
    sysPlaySe(26);
    sysPlayVoice(0x10000CB);
}
} /* extern "C" */
