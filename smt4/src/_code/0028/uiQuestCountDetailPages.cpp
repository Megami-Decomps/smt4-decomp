#include "shard/W4_W4Match2_UiQuest.h"
#include "shard/W6_W6Match5_SecondarySort.h"

extern "C" {
s32 FUN_00241c40(s32 id);
s32 FUN_00298dc8(s32 id);
s32 idIsAtLeast350(s32 id);

// Count available detail pages and reset a selection that is no longer valid.
void uiQuestCountDetailPages(u16 id)
{
    UiQuest* quest = g_uiQuest;
    if (id == 0)
        return;
    quest->panel.page = 1;
    if (quest->panel.detailMode != 0) {
        if (dataTable1bOr1cGetRecord(id)->classification.flags & 0x40)
            ++quest->panel.page;
        if (FUN_00241c40(id) > 0)
            ++quest->panel.page;
    }
    if (quest->panel.detailMode == 0) {
        u8 defaultKind = 0;
        if (idIsAtLeast350(id) && dataTable1bOr1cGetRecord(id)->classification.kind == 0)
            defaultKind = 1;
        if (FUN_00298dc8(id) | defaultKind) {
            if (dataTable1bOr1cGetRecord(id)->classification.flags & 0x40)
                ++quest->panel.page;
            if (FUN_00241c40(id) > 0)
                ++quest->panel.page;
        }
    }
    if (quest->panel.selection >= quest->panel.page)
        quest->panel.selection = 0;
}
}
