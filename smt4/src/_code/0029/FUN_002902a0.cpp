/* NON_MATCHING: Animation-load scheduling and the state-update STM grouping differ from retail. */
#include "shard/W4_W4Match2_UiQuest.h"
#include "util/CalleeContracts.h"

extern "C" {
void uiFadeRequestClear(void);
void FUN_0029eb5c(void *cursor, s32 index);
s32 FUN_0029ee54(void *cursor);
void buttonHelpSetPreset(s32 preset);
void timerStart(void *timer, s32 start, s32 mode);
void FUN_002bf810(u32 event);

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
    quest->panel.detailMode = FUN_00298f88(questId);
    detail->speed = 0.2088f;
    timerStart(detail->timer, 0, 0);
    if (restoreSelection == 0) {
        detail->restoreSelection = 0;
    } else {
        detail->restoreSelection = 1;
        void *cursor;
        u16 *ids;
        if (quest->panel.detailMode != 0) {
            cursor = quest->panel.alternate.cursor;
            ids = quest->cursor.alternate.ids;
        } else {
            cursor = &quest->cursor;
            ids = quest->list;
        }
        for (s32 index = 0; index < FUN_0029ee54(cursor); ++index) {
            if (ids[index] == questId) {
                FUN_0029eb5c(cursor, index);
                break;
            }
        }
        timerStart(quest->mainSprite, 0, 0);
    }
    uiFadeRequestClear();
    quest = g_uiQuest;
    quest->previousState = quest->state;
    quest->state = 20;
    quest->nextState = 0;
    buttonHelpSetPreset(26);
    FUN_002bf810(0x100025E);
}
}
