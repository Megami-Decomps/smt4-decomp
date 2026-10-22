/* NON_MATCHING: Retail ldr r7, [pc, #136] differs from recovered ldr r7, [pc, #132]. */
#include "common.h"

struct QuestStateView {
    u8 unk00[4];       // 0x000
    u32 unk04;         // 0x004
    u32 unk08;         // 0x008
    u32 unk0C;         // 0x00c
    u32 unk10;         // 0x010
    u8 unk14[0x20];    // 0x014
    u8 unk34[0x8D8];   // 0x034
    u8 unk90C;         // 0x90c
    u8 unk90D[3];      // 0x90d
    u32 unk910;        // 0x910
    u8 unk914[0x2A];   // 0x914
    u8 unk93E;         // 0x93e
    u8 unk93F[0x38B];  // 0x93f
    s16 unkCCA;        // 0xcca
};

struct QuestEntryView {
    u8 unk00[7];       // 0x00
    u8 unk07;          // 0x07
};

extern "C" {
extern QuestStateView* g_uiQuest;
u8 FUN_001bd100(void);
void uiQuestSpritesCreate(void);
void FUN_003d498c(s32 questId, s32 mode);
void uiSpriteSetKeyframe(void* sprite, s32 keyframe, s32 option);
void uiSpriteSetImageKeyframe(void* sprite, s32 keyframe, s32 option);
QuestEntryView* FUN_001ad9b4(s32 questId);

// Initialize the quest UI and select its mode from the quest entry's flag.
void FUN_002f1554(s32 questId)
{
    QuestStateView* questState = g_uiQuest;
    questState->unk93E = 1;
    questState->unk90C = FUN_001bd100();
    questState->unkCCA = (s16)questId;

    uiQuestSpritesCreate();
    FUN_003d498c(questId, 1);
    uiSpriteSetKeyframe(questState->unk34, 0, 0);
    uiSpriteSetImageKeyframe(questState->unk34, 8, 0);

    QuestStateView* currentState = g_uiQuest;
    currentState->unk08 = currentState->unk04;
    currentState->unk04 = 1;
    currentState->unk10 = 0;
    questState->unk0C = 29;

    QuestEntryView* questEntry = FUN_001ad9b4(questId);
    if (questEntry->unk07 & 0x20) {
        questState->unk910 = 2;
    } else {
        questState->unk910 = 1;
    }
}
}
