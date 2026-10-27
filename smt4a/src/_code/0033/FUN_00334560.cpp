/* NON_MATCHING: only the menu-state transition tail differs: retail stores the previous state, then the new state with a writeback store, then the zeroed timer; the build hoists the zero and merges the two state stores into one stm. */
#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {
void uiQuestSpritesCreate(void);
s32 resourceRunOperationIfUnblocked(void *cursor);
s32 FUN_002a4894(void *cursor);
void FUN_003d498c(u32 id, u32 mode);
u32 partyEntryBitsBit4(s32 id);
s32 questHasSpecialDetailPage(u32 id);
s32 FUN_002f7730(s32 index, u32 id);
void questMarkSelectedSpecialDetail(void);
void uiSpriteSetKeyframe(void *sprite, s32 frame, s32 flags);
void uiSpriteSetImageKeyframe(void *sprite, s32 image, s32 flags);
s32 campIsState85(void);
void FUN_00202400(void);

/* Moves the quest menu to `next`, remembering the state it left and restarting its timer. */
static __inline void uiQuestEnterMenuState(UiQuestApoc *quest, s32 next)
{
    quest->previousMenuState = quest->menuState;
    quest->menuState = next;
    quest->menuTimer = 0;
}

// Enter details from the alternate quest list, selecting a special detail page when available.
void FUN_00334560(void)
{
    UiQuestApoc *quest = g_uiQuest;
    quest->unk90c = 1;
    uiQuestSpritesCreate();
    u16 id = quest->alternateView()->list[resourceRunOperationIfUnblocked(quest->alternateView()->cursor) +
                                            FUN_002a4894(quest->alternateView()->cursor)];
    FUN_003d498c(id, 1);
    u16 selected = quest->selectedId = id;
    UiQuestApoc *current = g_uiQuest;
    if (!partyEntryBitsBit4(selected) && questHasSpecialDetailPage(selected)) {
        s32 index = 0;
        for (; index < current->listState.count; ++index) {
            if (FUN_002f7730(index, selected) == 3)
                break;
        }
        if (current->listState.count <= index)
            index = 0;
        current->listState.selection = index;
        current->listState.previousSelection = index;
    }
    if (quest->detailMode > 2)
        questMarkSelectedSpecialDetail();
    uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
    uiSpriteSetImageKeyframe(quest->mainSprite, 8, 0);
    if (campIsState85())
        FUN_00202400();
    uiQuestEnterMenuState(g_uiQuest, 1);
}
}
