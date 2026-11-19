#include "shard/W5_W5Match7_UiQuest.h"
#include "code/Code002a_Smt4a.h"

extern "C" {
void uiSpriteSetKeyframe(void *sprite, s32 frame, s32 flags);
void uiSpriteSetImageKeyframe(void *sprite, s32 image, s32 flags);
void uiQuestSpritesCreate(void);
s32 listCursorGetRowIfUnblocked(void *cursor);
void FUN_003d498c(u32 id, s32 enabled);
void buttonHelpSetSelectedId(s32 sound);
s32 partyEntryBitsBit4(u32 id);
u32 questHasSpecialDetailPage(u32 id);
s32 FUN_002f7730(s32 index, u32 id);
void questMarkSelectedSpecialDetail(void);
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

// Return to the quest list and restore the selected unit/detail state.
void uiQuestReturnToList(void)
{
    UiQuestApoc *quest = g_uiQuest;
    quest->unk90c = 0;
    if (quest->menuState == 0xd) {
        uiSpriteSetKeyframe(quest->mainSprite, 2, 0);
        uiSpriteSetImageKeyframe(quest->mainSprite, 9, 0);
        uiQuestEnterMenuState(g_uiQuest, 3);
        buttonHelpSetSelectedId(0xa2);
        return;
    }
    uiQuestSpritesCreate();
    u16 id = quest->list[resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(quest->cursor)) + listCursorGetRowIfUnblocked(quest->cursor)];
    FUN_003d498c(id, 1);
    uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
    uiSpriteSetImageKeyframe(quest->mainSprite, 8, 0);
    quest->selectedId = id;
    uiQuestSelectSpecialDetailPage(id);
    if (quest->detailMode > 2) {
        questMarkSelectedSpecialDetail();
    }
    if (campIsState85()) {
        FUN_00202400();
    }
    uiQuestEnterMenuState(g_uiQuest, 1);
}
}
