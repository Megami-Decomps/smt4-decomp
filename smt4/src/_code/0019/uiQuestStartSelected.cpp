#include "ui/UiSpriteApi.h"
#include "common.h"
#include "code/Code0029_VariantB.h"
#include "shard/W4_W4Match2_UiQuest.h"
#include "script/ScriptEntry.h"

extern "C" {

s32 uiBindRecordRewardText(u32 id, s32 a, s32 b);
void gameOptionsEnableAndReset(void);
void gameFlagEntryActivate(u32 id);
void uiQuestCountDetailPages(u32 id);
void uiQuestShowStatusHelp(void);
void gameGetOptionProgressStatus(void);
void buttonHelpSetPreset(s32 preset);
s32 resourceRunOperationIfUnblocked(const void *list);

/* Starts the selected quest's script entry 3; when it starts, enters state 0xc. */
void uiQuestStartSelected(void)
{
    UiQuest *quest = g_uiQuest;
    s32 base;
    s32 offset;
    u16 id;

    quest->panelView.panel.unkF3 = 1;
    base = resourceRunOperationIfUnblocked(&quest->cursor);
    offset = listCursorGetRowIfUnblocked(&quest->cursor);
    id = quest->list[offset + base];
    gameFlagEntryActivate(id);
    gameGetOptionProgressStatus();
    gameOptionsEnableAndReset();
    uiQuestCountDetailPages(id);
    spriteStartAnimationByIndex(&quest->sprites[4], 2);
    uiBindRecordRewardText(id, 0, 1);
    if (scrScriptProcessStartEntry(quest->script.process, 3) != 0) {
        buttonHelpSetPreset(0x9e);
        uiQuestShowStatusHelp();
        uiQuestEnterState(g_uiQuest, 0xc);
    }
}

} /* extern "C" */
