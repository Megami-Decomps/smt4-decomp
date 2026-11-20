#include "shard/W4_W4Match2_UiQuest.h"
#include "quest_center/QuestRecord.h"

extern "C" {
s32 questGetDetailPageCount(s32 id);
s32 FUN_00298dc8(s32 id);
s32 idIsAtLeast350(s32 id);

// Count available detail pages and reset a selection that is no longer valid.
void uiQuestCountDetailPages(u16 id)
{
    UiQuest* quest = g_uiQuest;
    if (id == 0)
        return;
    quest->panelView.panel.page = 1;
    if (quest->panelView.panel.detailMode != 0) {
        if (questDataGetRecord(id)->flags & 0x40)
            ++quest->panelView.panel.page;
        if (questGetDetailPageCount(id) > 0)
            ++quest->panelView.panel.page;
    }
    if (quest->panelView.panel.detailMode == 0) {
        u8 defaultKind = 0;
        if (idIsAtLeast350(id) && questDataGetRecord(id)->kind == 0)
            defaultKind = 1;
        if (FUN_00298dc8(id) | defaultKind) {
            if (questDataGetRecord(id)->flags & 0x40)
                ++quest->panelView.panel.page;
            if (questGetDetailPageCount(id) > 0)
                ++quest->panelView.panel.page;
        }
    }
    if (quest->panelView.panel.selection >= quest->panelView.panel.page)
        quest->panelView.panel.selection = 0;
}
}
