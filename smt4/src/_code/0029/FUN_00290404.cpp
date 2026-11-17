/* NON_MATCHING: retail's constant-false path is omitted; label lookup and panel-address scheduling differ. */
#include "shard/W4_W4Match2_UiQuest.h"
#include "quest_center/QuestRecord.h"
#include "gamedata/DataTable.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"

namespace {
struct QuestStatusLabel {
    u8 key;
    u8 text[0x49];
};
typedef char QuestStatusLabelSizeCheck[sizeof(QuestStatusLabel) == 0x4A ? 1 : -1];
}

extern "C" {
u32 FUN_00298dc8(s32 quest);
u32 FUN_00298e00(u32 quest);
u32 questIsCompleted(s32 quest);
bool questIsOfferable(u16 quest);
u32 resourceRunOperationIfUnblocked(const void *cursor);
u32 listCursorGetRowIfUnblocked(const void *cursor);
void buttonHelpSetText(const u8 *text, u32 color);

void FUN_00290404()
{
    UiQuest *menu = g_uiQuest;
    UiQuestPanel *panel = &menu->panel;
    u16 quest;
    if (panel->detailMode) {
        const void *cursor = panel->alternate.cursor;
        u32 row = resourceRunOperationIfUnblocked(cursor);
        row += listCursorGetRowIfUnblocked(cursor);
        quest = menu->cursor.alternate.ids[row];
    } else {
        u32 row = resourceRunOperationIfUnblocked(&menu->cursor);
        row += listCursorGetRowIfUnblocked(&menu->cursor);
        quest = menu->list[row];
    }
    if (quest == 0) {
        return;
    }

    u32 status;
    if (panel->detailMode) {
        if (FUN_00298dc8(quest)) {
            status = rosterGetLeaderId() ? 6 : 0;
        } else {
            if (!questIsCompleted(quest)) {
                return;
            }
            status = 3;
        }
    } else if (dataTable1bOr1cGetRecord(quest)->kind) {
        if (questIsOfferable(quest)) {
            if (rosterGetLeaderId() == quest) {
                status = 0;
            } else {
                status = questIsCompleted(quest) ? 2 : 1;
            }
        } else {
            status = questIsCompleted(quest) ? 3 : 5;
        }
    } else if (questIsCompleted(quest)) {
        status = FUN_00298e00(quest) ? 4 : 3;
    } else {
        status = 0;
    }
    DataTableView<QuestStatusLabel> labels(0x34, 0);
    const u8 *text = status < labels.count ? labels.entries[status].text : NULL;
    buttonHelpSetText(text, 0x323232FF);
}
}
