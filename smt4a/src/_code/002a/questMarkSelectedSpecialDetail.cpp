#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {
u32 questHasSpecialDetailPage(u32 id);
void partyEntrySetBitsBit4(u32 id);
s32 resourceRunOperationIfUnblocked(void *cursor);
s32 FUN_002a4894(void *cursor);
s32 FUN_002f7730(u32 selection, u32 id);

// Mark the selected special quest when its detail-page state permits it.
void questMarkSelectedSpecialDetail(void)
{
    UiQuestApoc *quest = g_uiQuest;
    void *cursor;
    u16 *list;
    if (quest->unk90c) {
        cursor = quest->alternateView()->cursor;
        list = quest->alternateView()->list;
    } else {
        cursor = quest->cursor;
        list = quest->list;
    }
    s32 scroll = resourceRunOperationIfUnblocked(cursor);
    s32 selection = FUN_002a4894(cursor);
    u32 id = list[selection + scroll];
    if (questHasSpecialDetailPage(id) &&
        FUN_002f7730(quest->listState.selection, id) == 3)
        partyEntrySetBitsBit4(id);
}
}
