#include "ui/UiSpriteApi.h"
#include "code/Code002a_VariantA.h"
#include "quest_center/QuestRecordA.h"
#include "shard/W5_W5Match7_UiQuest.h"
#include "quest_center/QuestRequirement.h"
#include "shard/Shard0031.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"

extern "C" {
s32 resourceRunOperationIfUnblocked(void *cursor);
void rosterAddUnit(u32 questId);
void gameOptionsClassifyMode();
void optionsSetFlag1();
void uiQuestRefreshDetailPages(u32 questId);
void scrMessageSetSpeakerTitle(u32 questId, s32 state, s32 enabled);
s32 scrScriptProcessStartEntry(u32 script, u32 entry);
const char *dataFindKindRecordWithAocOverrides(u32 textId, s32 mode);
char *libc_strcpy(char *destination, const char *source);
void entryTableResetAndInit(s32 type, u32 message, s32 argument, s32 flags);
void sysPlaySe(s32 sound);
void FUN_003d474c();

// Accept the highlighted quest and enter its normal or special-script confirmation flow.
void FUN_0021a4b0()
{
    // A kind-11 record keeps a text id and a message id where the others keep their reward.
    struct SpecialQuestMetadata {
        u8 unk000[0xf2];
        u16 textId;
        u32 messageId;
    };
    typedef char SpecialQuestMetadataOffsets[offsetof(SpecialQuestMetadata, textId) == 0xf2 && offsetof(SpecialQuestMetadata, messageId) == 0xf4 ? 1 : -1];
    UiQuestApoc *quest = g_uiQuest;
    quest->state = 1;
    u32 questId = quest->list[resourceRunOperationIfUnblocked(quest->cursor) + listCursorGetRowIfUnblocked(reinterpret_cast<const Object *>(quest->cursor))];
    rosterAddUnit(questId);
    gameOptionsClassifyMode();
    optionsSetFlag1();
    uiQuestRefreshDetailPages(questId);
    uiSpriteSelectAnim((UiSpriteState *)quest->acceptance.sprite, 2);
    scrMessageSetSpeakerTitle(questId, 0, 1);
    QuestRecordA *definition = questDataGetRecord(questId);
    if (definition && definition->kind == 11) {
        char text[132];
        libc_strcpy(text, dataFindKindRecordWithAocOverrides(reinterpret_cast<const SpecialQuestMetadata *>(definition)->textId, 0));
        scrSetStringSlot(0, text);
        entryTableResetAndInit(0x18, reinterpret_cast<const SpecialQuestMetadata *>(definition)->messageId, -1, 0);
        if (!scrScriptProcessStartEntry(quest->acceptance.script, 0x13))
            return;
    } else {
        if (!scrScriptProcessStartEntry(quest->acceptance.script, 3))
            return;
    }
    sysPlaySe(0xa0);
    FUN_003d474c();
    uiQuestEnterMenuState(g_uiQuest, 12);
}
}
