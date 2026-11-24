/* NON_MATCHING: block layout and the page search match retail; only the special-page increment swaps registers (count in r2/r0 and the detail-mode offset in r1, retail r1 and r0). */
#include "quest_center/QuestRecordA.h"
#include "shard/W5_W5Match7_UiQuest.h"
#include "code/Code002f.h"

struct QuestPageMetadata {
    u8 unk00[6];
    u8 kind;
    u8 flags;
};

extern "C" {
u8 idIsAtLeast350(u32 id);
u32 questHasNewMark(s32 id);
s32 partyEntryGetByte1(s32 id);
u32 questHasSpecialDetailPage(u32 id);
void questMarkSelectedSpecialDetail(void);
}

static inline const QuestPageMetadata *questPageMetadata(s32 id)
{
    return reinterpret_cast<const QuestPageMetadata *>(questDataGetRecord(id));
}

extern "C" void uiQuestRefreshDetailPages(s32 id)
{
    UiQuestApoc *quest = g_uiQuest;
    struct DetailPageFlagsView {
        u8 prefix[0x90c];
        s8 fixedPages;
        u8 unk90d[0x37];
        s8 hasSpecialPage;
    };
    typedef char DetailPageFlagsOffsets[
        offsetof(DetailPageFlagsView, fixedPages) == 0x90c &&
        offsetof(DetailPageFlagsView, hasSpecialPage) == 0x944 ? 1 : -1];
    DetailPageFlagsView *flags = reinterpret_cast<DetailPageFlagsView *>(quest);
    if (id == 0) {
        return;
    }
    flags->hasSpecialPage = 0;
    quest->listState.count = 1;
    if (flags->fixedPages != 0) {
        if ((questPageMetadata(id)->flags & 0x20) != 0) {
            ++quest->listState.count;
        }
        if (partyEntryGetByte1(id) > 0) {
            ++quest->listState.count;
        }
    }
    if (flags->fixedPages == 0) {
        u32 unrestrictedDlc = 0;
        if (idIsAtLeast350(id) != 0 && questPageMetadata(id)->kind == 0) {
            unrestrictedDlc = 1;
        }
        if ((questHasNewMark(id) | unrestrictedDlc) != 0) {
            if ((questPageMetadata(id)->flags & 0x20) != 0) {
                ++quest->listState.count;
            }
            if (partyEntryGetByte1(id) > 0) {
                ++quest->listState.count;
            }
        }
        if (questHasSpecialDetailPage(id) != 0) {
            ++quest->listState.count;
            flags->hasSpecialPage = 1;
            if (quest->detailMode > 2) {
                questMarkSelectedSpecialDetail();
            }
        }
    }
    if (flags->hasSpecialPage != 0) {
        for (s32 page = 0; page < quest->listState.count; ++page) {
            if (questGetDisplayState(page, id) == 3) {
                quest->listState.selection = page;
                break;
            }
        }
    } else {
        quest->listState.selection = 0;
    }
    if (quest->listState.selection >= quest->listState.count) {
        quest->listState.selection = 0;
    }
}
