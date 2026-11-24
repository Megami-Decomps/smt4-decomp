#include "shard/W4_W4Match2_UiQuest.h"
#include "ui/UiSpriteApi.h"
#include "code/Code0029.h"
#include "code/Code001b.h"
extern "C" s32 gridNavigationGetItemCount(void *cursor);

extern "C" {
void uiFadeRequestClear(void);
void scrollListSetSelectionMarkChanged(void *cursor, s32 index);
void buttonHelpSetPreset(s32 preset);
void soundPlaySeUnpanned(u32 event);

/* Opens a quest detail panel, optionally restoring its selected list entry. */
void uiQuestOpenDetail(u32 questId, s32 restoreSelection)
{
    UiQuest *quest = g_uiQuest;
    quest->questId = (s16)questId;
    quest->panelView.panel.detailMode = dataTable1bOr1cRecordHasFlag1(questId);
    quest->panelView.panel.detailSpeed = 0.2088f;
    uiSpriteSetKeyframe(&quest->sprites[7], 0, 0);
    if (restoreSelection != 0) {
        quest->panelView.panel.restoreSelection = 1;
        void *cursor;
        u16 *ids;
        if (quest->panelView.panel.detailMode != 0) {
            cursor = quest->panelView.panel.alternate.cursor;
            ids = quest->cursor.alternate.ids;
        } else {
            cursor = &quest->cursor;
            ids = quest->list;
        }
        for (s32 index = 0; index < gridNavigationGetItemCount(cursor); ++index) {
            if (ids[index] == questId) {
                scrollListSetSelectionMarkChanged(cursor, index);
                break;
            }
        }
        uiSpriteSetKeyframe(&quest->sprites[0], 0, 0);
    } else {
        quest->panelView.panel.restoreSelection = 0;
    }
    uiFadeRequestClear();
    uiQuestEnterState(g_uiQuest, 20);
    buttonHelpSetPreset(26);
    soundPlaySeUnpanned(0x100025E);
}
}
