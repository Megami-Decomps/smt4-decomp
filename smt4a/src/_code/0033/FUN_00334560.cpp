#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {
void uiQuestSpritesCreate(void);
s32 resourceRunOperationIfUnblocked(void *cursor);
s32 listCursorGetRowIfUnblocked(void *cursor);
void FUN_003d498c(u32 id, u32 mode);
u32 partyEntryBitsBit4(s32 id);
s32 questHasSpecialDetailPage(u32 id);
s32 FUN_002f7730(s32 index, u32 id);
void questMarkSelectedSpecialDetail(void);
void uiSpriteSetKeyframe(void *sprite, s32 frame, s32 flags);
void uiSpriteSetImageKeyframe(void *sprite, s32 image, s32 flags);
s32 campIsState85(void);
void FUN_00202400(void);

/* Opens a special quest's detail on its first special page (page 0 when it has none); the same block
 * is inlined in uiQuestReturnToList, FUN_00334560 and uiQuestListInput. */
static __inline void uiQuestSelectSpecialDetailPage(u16 id)
{
    UiQuestApoc *quest = g_uiQuest;
    if (!partyEntryBitsBit4(id) && questHasSpecialDetailPage(id)) {
        s32 index;
        for (index = 0; index < quest->listState.count; ++index) {
            if (FUN_002f7730(index, id) == 3)
                break;
        }
        if (index >= quest->listState.count)
            index = 0;
        quest->listState.selection = index;
        quest->listState.nextSelection = index;
    }
}

// Enter details from the alternate quest list, selecting a special detail page when available.
void FUN_00334560(void)
{
    UiQuestApoc *quest = g_uiQuest;
    quest->unk90c = 1;
    uiQuestSpritesCreate();
    u16 id = quest->alternateView()->list[resourceRunOperationIfUnblocked(quest->alternateView()->cursor) +
                                            listCursorGetRowIfUnblocked(quest->alternateView()->cursor)];
    FUN_003d498c(id, 1);
    quest->selectedId = id;
    uiQuestSelectSpecialDetailPage(id);
    if (quest->detailMode > 2)
        questMarkSelectedSpecialDetail();
    uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
    uiSpriteSetImageKeyframe(quest->mainSprite, 8, 0);
    if (campIsState85())
        FUN_00202400();
    uiQuestEnterMenuState(g_uiQuest, 1);
}
}
