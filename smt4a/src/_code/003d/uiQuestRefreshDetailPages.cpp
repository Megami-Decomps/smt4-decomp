/* NON_MATCHING: special-page reference uses a 0x944 base rather than grouped 0x900 byte loads; callback predication and page-selection success layout differ (105/107). */
#include "shard/W5_W5Match7_DataRecord.h"
#include "shard/W5_W5Match7_UiQuest.h"

struct QuestPageMetadata {
    u8 unk00[6];
    u8 kind;
    u8 flags;
};

extern "C" {
s32 idIsAtLeast350(s32 id);
u32 partyEntryFlagsBit1(s32 id);
s32 partyEntryGetByte1(s32 id);
u32 questHasSpecialDetailPage(u32 id);
void questMarkSelectedSpecialDetail(void);
s32 FUN_002f7730(s32 page, u32 id);
}

static inline const QuestPageMetadata *questPageMetadata(s32 id)
{
    return reinterpret_cast<const QuestPageMetadata *>(FUN_001ad9b4(id));
}

extern "C" void uiQuestRefreshDetailPages(s32 id)
{
    UiQuestApoc *quest = g_uiQuest;
    if (id == 0) {
        return;
    }
    u8 &hasSpecialPage = quest->unk942[2];
    hasSpecialPage = 0;
    quest->listState.count = 1;
    if (quest->unk90c != 0) {
        if ((questPageMetadata(id)->flags & 0x20) != 0) {
            ++quest->listState.count;
        }
        if (partyEntryGetByte1(id) > 0) {
            ++quest->listState.count;
        }
    }
    if (quest->unk90c == 0) {
        u32 unrestrictedDlc = 0;
        if (idIsAtLeast350(id) != 0 && questPageMetadata(id)->kind == 0) {
            unrestrictedDlc = 1;
        }
        if ((partyEntryFlagsBit1(id) | unrestrictedDlc) != 0) {
            if ((questPageMetadata(id)->flags & 0x20) != 0) {
                ++quest->listState.count;
            }
            if (partyEntryGetByte1(id) > 0) {
                ++quest->listState.count;
            }
        }
        if (questHasSpecialDetailPage(id) != 0) {
            ++quest->listState.count;
            hasSpecialPage = 1;
            if (quest->detailMode > 2) {
                questMarkSelectedSpecialDetail();
            }
        }
    }
    if (hasSpecialPage == 0) {
        quest->listState.selection = 0;
    } else {
        for (s32 page = 0; page < quest->listState.count; ++page) {
            if (FUN_002f7730(page, id) == 3) {
                quest->listState.selection = page;
                break;
            }
        }
    }
    if (quest->listState.selection >= quest->listState.count) {
        quest->listState.selection = 0;
    }
}
