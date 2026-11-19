/* NON_MATCHING: only the restore flag's 1 differs: built in r1 where retail uses r0. */
#include "shard/W4_W4Match2_UiQuest.h"
#include "code/Code0029.h"
extern "C" s32 FUN_0029ee54(void *cursor);

extern "C" {
void uiFadeRequestClear(void);
void scrollListSetSelectionMarkChanged(void *cursor, s32 index);
void buttonHelpSetPreset(s32 preset);
void timerStart(void *timer, s32 start, s32 mode);
void soundPlaySeUnpanned(u32 event);

/* Opens a quest detail panel, optionally restoring its selected list entry. */
void FUN_002902a0(u32 questId, s32 restoreSelection)
{
    /* A float view of panel unkE8[9] would pad that union and move the following byte fields. */
    struct QuestDetailView {
        /* 0x000 */ u8 unk000[0x408];
        /* 0x408 */ u8 timer[0x1E4];
        /* 0x5EC */ f32 speed;
        /* 0x5F0 */ u8 restoreSelection;
    };
    typedef char QuestDetailOffsetsCheck[offsetof(QuestDetailView, speed) == 0x5EC &&
        offsetof(QuestDetailView, restoreSelection) == 0x5F0 ? 1 : -1];
    UiQuest *quest = g_uiQuest;
    QuestDetailView *detail = (QuestDetailView *)quest;
    quest->questId = (s16)questId;
    quest->panelView.panel.detailMode = FUN_00298f88(questId);
    detail->speed = 0.2088f;
    timerStart(detail->timer, 0, 0);
    if (restoreSelection == 0) {
        detail->restoreSelection = 0;
    } else {
        detail->restoreSelection = 1;
        void *cursor;
        u16 *ids;
        if (quest->panelView.panel.detailMode != 0) {
            cursor = quest->panelView.panel.alternate.cursor;
            ids = quest->cursor.alternate.ids;
        } else {
            cursor = &quest->cursor;
            ids = quest->list;
        }
        for (s32 index = 0; index < FUN_0029ee54(cursor); ++index) {
            if (ids[index] == questId) {
                scrollListSetSelectionMarkChanged(cursor, index);
                break;
            }
        }
        timerStart(quest->mainSprite, 0, 0);
    }
    uiFadeRequestClear();
    uiQuestEnterState(g_uiQuest, 20);
    buttonHelpSetPreset(26);
    soundPlaySeUnpanned(0x100025E);
}
}
