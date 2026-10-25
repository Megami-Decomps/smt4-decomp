/* NON_MATCHING: cursor/list addressing restored; selected-id register lifetime and menu-state store/constant scheduling differ. */
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

// Enter details from the alternate quest list, selecting a special detail page when available.
void FUN_00334560(void)
{
    UiQuestApoc *quest = g_uiQuest;
    quest->unk90c = 1;
    uiQuestSpritesCreate();
    void *cursorWork = quest->alternateView()->cursor;
    s32 page = resourceRunOperationIfUnblocked(cursorWork);
    s32 cursor = FUN_002a4894(cursorWork);
    u16 id = quest->alternateView()->list[cursor + page];
    FUN_003d498c(id, 1);
    quest->selectedId = id;
    UiQuestApoc *current = g_uiQuest;
    if (!partyEntryBitsBit4(id) && questHasSpecialDetailPage(id)) {
        s32 index = 0;
        for (; index < current->listState.count; ++index) {
            if (FUN_002f7730(index, id) == 3)
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
    current = g_uiQuest;
    current->previousMenuState = current->menuState;
    current->menuState = 1;
    current->menuTimer = 0;
}
}
