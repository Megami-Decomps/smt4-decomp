/* NON_MATCHING: counter-sprite address registers and menu-state stores differ; both versions have 71 instructions. */
#include "shard/W5_W5Match7_UiQuest.h"
#include "ui/UiSpriteState.h"
#include <stddef.h>

extern "C" {
void uiSpriteSetKeyframe(UiSpriteState *, s32 animation, s32 frame);
void uiSpriteSetImageKeyframe(UiSpriteState *, s32 animation, s32 frame);
void uiSpriteSelectAnim(UiSpriteState *, s32 animation);
void spriteSetLayer(UiSpriteState *, u16 layer);
void sysPlaySe(u32 sound);
void sysPlayVoice(u32 voice);

// Reset the quest detail animations, select the quest, and enter the confirmation state.
void FUN_002c8778(u16 questId)
{
    // The trailing counters are beyond the currently documented UiQuestApoc layout.
    struct QuestEntryView {
        u8 unk000[0x34];
        UiSpriteState mainSprite;
        u8 unk0c0[0x4ec];
        UiSpriteState details[6]; // 0x5ac
        u8 unk8f4[0x40];
        u32 detailTimer; // 0x934
        u8 unk938[0x392];
        u16 questId; // 0xcca
        u8 unkccc[0x7c];
        u32 firstCounter; // 0xd48
        u32 secondCounter; // 0xd4c
    };
    typedef char QuestEntryViewOffsetCheck[offsetof(QuestEntryView, details) == 0x5ac && offsetof(QuestEntryView, questId) == 0xcca && offsetof(QuestEntryView, firstCounter) == 0xd48 ? 1 : -1];
    QuestEntryView *menu = reinterpret_cast<QuestEntryView *>(g_uiQuest);
    menu->questId = questId;
    menu->detailTimer = 0;
    uiSpriteSetKeyframe(&menu->mainSprite, 1, 0);
    uiSpriteSetImageKeyframe(&menu->mainSprite, 8, 0);
    if (menu) {
        uiSpriteSetKeyframe(&menu->details[0], 7, 0);
        uiSpriteSetImageKeyframe(&menu->details[0], 11, 0);
        uiSpriteSetKeyframe(&menu->details[1], 8, 0);
        uiSpriteSetImageKeyframe(&menu->details[1], 11, 0);
        uiSpriteSelectAnim(&menu->details[2], 6);
        uiSpriteSelectAnim(&menu->details[3], 7);
        UiSpriteState *counterSprite = &menu->details[4];
        uiSpriteSelectAnim(counterSprite, 8);
        spriteSetLayer(counterSprite, 2);
        uiSpriteSelectAnim(&menu->details[5], 10);
        menu->firstCounter = 0;
        menu->secondCounter = 0;
    }
    UiQuestApoc *state = g_uiQuest;
    state->previousMenuState = state->menuState;
    state->menuState = 0x11;
    state->menuTimer = 0;
    sysPlaySe(0x1a);
    sysPlayVoice(0x10000ca);
}
}
