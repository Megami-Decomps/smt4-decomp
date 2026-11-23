#include "ui/UiSpriteApi.h"
#include "common.h"
#include "font/ComWin/ComWin.h"
#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {

extern int buttonHelpSetPreset(int preset);
extern int soundPlaySeUnpanned(u32 arg);

/* Opens quest `questId`'s page on the quest screen: starts its sprite animations and enters state 17. */
void uiQuestOpenPage(u16 questId)
{
    UiQuest *quest = g_uiQuest;

    quest->questId = questId;
    quest->panelView.panel.detailFrames = 0;
    uiSpriteSetKeyframe(&quest->sprites[0], 1, 0);
    spriteStartAnimationByIndex(&quest->sprites[5], 2);
    spriteStartAnimationByIndex(&quest->sprites[6], 3);
    uiQuestEnterState(g_uiQuest, 17);
    buttonHelpSetPreset(26);
    soundPlaySeUnpanned(0x100025D);
}

}
