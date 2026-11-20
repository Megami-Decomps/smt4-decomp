#include "shard/W4_W4Match2_UiQuest.h"
#include "code/Code0029.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "code/Code001b.h"
extern "C" s32 gridNavigationGetItemCount(void *cursor);

extern "C" {
void uiQuestLoadResources();
void FUN_0028fe0c(u32 questId, s32 mode);
void buttonHelpSetPreset(s32 preset);
void uiSpriteSetKeyframe(void *timer, s32 animation, s32 initial); // declcheck: local (the shared declaration does not compile here or changes this unit)
void soundPlaySeUnpanned(u32 message);

// Focus the quest in the appropriate list, then open its detail panel.
void FUN_003115b4(u32 questId)
{
    UiQuest *quest = g_uiQuest;
    quest->questId = questId;
    s32 alternate = dataTable1bOr1cRecordHasFlag1(questId);
    quest->panelView.panel.detailMode = alternate;
    quest->panelView.panel.unkF2 = 1;
    void *cursor;
    u16 *ids;
    if (alternate != 0) {
        cursor = quest->panelView.panel.alternate.cursor;
        ids = quest->cursor.alternate.ids;
    } else {
        cursor = &quest->cursor;
        ids = quest->list;
    }
    for (s32 index = 0; index < gridNavigationGetItemCount(cursor); ++index) {
        if (ids[index] == questId) {
            scrollListSetSelectionMarkChanged(reinterpret_cast<ScrollSelection *>(cursor), index);
            break;
        }
    }
    uiQuestLoadResources();
    FUN_0028fe0c(questId, 0);
    uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
    uiSpriteSetKeyframe(quest->detailAnimation.timer, 2, 0);
    uiQuestEnterState(g_uiQuest, 0x17);
    buttonHelpSetPreset(0x1A);
    soundPlaySeUnpanned(0x100025C);
}
}
