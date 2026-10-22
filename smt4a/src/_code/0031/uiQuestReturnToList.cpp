/* NON_MATCHING: cursor-address lifetime and selected-ID registers differ; menu-state stores use an explicit base adjustment and reorder the timer clear. */
#include "shard/W5_W5Match7_UiQuest.h"

static __inline void setQuestMenuState(UiQuestApoc *quest, s32 state)
{
    s32 previous = quest->menuState;
    quest->menuState = state;
    quest->previousMenuState = previous;
    quest->menuTimer = 0;
}

extern "C" {
void uiSpriteSetKeyframe(void *sprite, s32 frame, s32 flags);
void uiSpriteSetImageKeyframe(void *sprite, s32 image, s32 flags);
void uiQuestSpritesCreate(void);
s32 resourceRunOperationIfUnblocked(void);
s32 FUN_002a4894(void *cursor);
void FUN_003d498c(u32 id, s32 enabled);
void buttonHelpSetSelectedId(s32 sound);
s32 partyEntryBitsBit4(u32 id);
u32 questHasSpecialDetailPage(u32 id);
s32 FUN_002f7730(s32 index, u32 id);
void questMarkSelectedSpecialDetail(void);
s32 campIsState85(void);
void FUN_00202400(void);

// Return to the quest list and restore the selected unit/detail state.
void uiQuestReturnToList(void)
{
    UiQuestApoc *quest = g_uiQuest;
    quest->unk90c = 0;
    if (quest->menuState == 0xd) {
        uiSpriteSetKeyframe(quest->mainSprite, 2, 0);
        uiSpriteSetImageKeyframe(quest->mainSprite, 9, 0);
        setQuestMenuState(g_uiQuest, 3);
        buttonHelpSetSelectedId(0xa2);
        return;
    }
    uiQuestSpritesCreate();
    s32 page = resourceRunOperationIfUnblocked();
    s32 cursor = FUN_002a4894(quest->cursor);
    u16 id = quest->list[page + cursor];
    FUN_003d498c(id, 1);
    uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
    uiSpriteSetImageKeyframe(quest->mainSprite, 8, 0);
    quest->selectedId = id;
    UiQuestApoc *current = g_uiQuest;
    if (!partyEntryBitsBit4(id) && questHasSpecialDetailPage(id)) {
        s32 index;
        for (index = 0; index < current->listState.count; ++index) {
            if (FUN_002f7730(index, id) == 3) {
                break;
            }
        }
        if (index >= current->listState.count) {
            index = 0;
        }
        current->listState.selection = index;
        current->listState.previousSelection = index;
    }
    if (quest->detailMode > 2) {
        questMarkSelectedSpecialDetail();
    }
    if (campIsState85()) {
        FUN_00202400();
    }
    setQuestMenuState(g_uiQuest, 1);
}
}
