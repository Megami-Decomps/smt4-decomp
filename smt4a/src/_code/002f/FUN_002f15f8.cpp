/* NON_MATCHING: speed-store scheduling, reposition constant register and paired menu-state stores differ. */
#include "shard/W5_W5Match7_UiQuest.h"

/* Local view avoids increasing the alignment/extent of the shared nine-byte unk934 region. */
struct QuestFocusAnimationView {
    u8 unk000[0x408];
    u8 sprite[0x8C];
    u8 unk494[0x938 - 0x494];
    f32 speed;
    u8 reposition;
};
typedef char QuestFocusAnimationViewOffsetsCheck[
    offsetof(QuestFocusAnimationView, sprite) == 0x408 &&
    offsetof(QuestFocusAnimationView, speed) == 0x938 &&
    offsetof(QuestFocusAnimationView, reposition) == 0x93C ? 1 : -1];

extern "C" {
u8 FUN_001bd100(u32 questId);
void uiSpriteSetKeyframe(void *sprite, s32 frame, s32 flags);
void uiSpriteSetImageKeyframe(void *sprite, s32 image, s32 flags);
s32 objectApplyIfUnblocked(void *cursor);
void FUN_002a4964(void *cursor, s32 index);
void uiFadeRequestClear(void);
void sysPlaySe(u32 sound);
void sysPlayVoice(u32 voice);

// Focus a quest, optionally reposition its list cursor, and enter the voiced transition state.
void FUN_002f15f8(u32 questId, s32 reposition)
{
    UiQuestApoc *quest = g_uiQuest;
    QuestFocusAnimationView *animation = (QuestFocusAnimationView *)quest;
    quest->questId = questId;
    quest->unk90c = FUN_001bd100(questId);
    animation->speed = 0.2088f;
    uiSpriteSetKeyframe(animation->sprite, 0, 0);
    uiSpriteSetImageKeyframe(animation->sprite, 8, 0);
    if (!reposition) {
        animation->reposition = 0;
    } else {
        animation->reposition = 1;
        void *cursor;
        const u16 *list;
        if (quest->unk90c) {
            cursor = quest->alternateView()->cursor;
            list = quest->alternateView()->list;
        } else {
            cursor = quest->cursor;
            list = quest->list;
        }
        for (s32 index = 0; index < objectApplyIfUnblocked(cursor); ++index) {
            if (list[index] == questId) {
                FUN_002a4964(cursor, index);
                break;
            }
        }
        uiSpriteSetKeyframe(quest->mainSprite, 0, 0);
        uiSpriteSetImageKeyframe(quest->mainSprite, 8, 0);
    }
    uiFadeRequestClear();
    UiQuestApoc *current = g_uiQuest;
    s32 previous = current->menuState;
    current->menuState = 20;
    current->previousMenuState = previous;
    current->menuTimer = 0;
    sysPlaySe(26);
    sysPlayVoice(0x10000CB);
}
}
