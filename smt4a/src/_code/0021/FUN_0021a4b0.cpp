#include "code/Code002a_VariantA.h"
/* NON_MATCHING: cursor/definition pointer lifetimes differ, and the final state update uses strd rather than separate writeback stores; 80 instructions each. */
#include "shard/W5_W5Match7_UiQuest.h"
#include "quest_center/QuestRequirement.h"
#include "shard/Shard0031.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
s32 resourceRunOperationIfUnblocked(void *cursor);
void FUN_00417e08(u32 questId);
void gameOptionsClassifyMode();
void optionsSetFlag1();
void uiQuestRefreshDetailPages(u32 questId);
void uiSpriteSelectAnim(void *sprite, s32 animation);
void FUN_003dea6c(u32 questId, s32 state, s32 enabled);
QuestRequirementDefinition *FUN_001ad9b4(u32 questId);
s32 scrScriptProcessStartEntry(u32 script, u32 entry);
const char *FUN_0015f858(u32 textId, s32 mode);
char *libc_strcpy(char *destination, const char *source);
void FUN_00359974(s32 type, u32 message, s32 argument, s32 flags);
void sysPlaySe(s32 sound);
void FUN_003d474c();

// Accept the highlighted quest and enter its normal or special-script confirmation flow.
void FUN_0021a4b0()
{
    // The existing definition's byte-aligned padding cannot contain an aligned metadata union.
    struct SpecialQuestMetadata {
        u8 unk000[0xf2];
        u16 textId;
        u32 messageId;
    };
    typedef char SpecialQuestMetadataOffsets[offsetof(SpecialQuestMetadata, textId) == 0xf2 && offsetof(SpecialQuestMetadata, messageId) == 0xf4 ? 1 : -1];
    UiQuestApoc *quest = g_uiQuest;
    quest->state = 1;
    s32 page = resourceRunOperationIfUnblocked(quest->cursor);
    s32 selection = FUN_002a4894(reinterpret_cast<const Object *>(quest->cursor));
    u32 questId = quest->list[selection + page];
    FUN_00417e08(questId);
    gameOptionsClassifyMode();
    optionsSetFlag1();
    uiQuestRefreshDetailPages(questId);
    uiSpriteSelectAnim(quest->acceptance.sprite, 2);
    FUN_003dea6c(questId, 0, 1);
    QuestRequirementDefinition *definition = FUN_001ad9b4(questId);
    if (definition && definition->kind == 11) {
        const SpecialQuestMetadata *metadata = reinterpret_cast<const SpecialQuestMetadata *>(definition);
        char text[132];
        libc_strcpy(text, FUN_0015f858(metadata->textId, 0));
        FUN_003180c4(0, text);
        FUN_00359974(0x18, metadata->messageId, -1, 0);
        if (!scrScriptProcessStartEntry(quest->acceptance.script, 0x13))
            return;
    } else {
        if (!scrScriptProcessStartEntry(quest->acceptance.script, 3))
            return;
    }
    sysPlaySe(0xa0);
    FUN_003d474c();
    quest = g_uiQuest;
    quest->previousMenuState = quest->menuState;
    quest->menuState = 12;
    quest->menuTimer = 0;
}
}
