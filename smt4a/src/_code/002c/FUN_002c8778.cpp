#include "shard/W5_W5Match7_UiQuest.h"
#include "ui/UiSpriteApi.h"
#include <stddef.h>

extern "C" {
void sysPlaySe(u32 sound);
void sysPlayVoice(u32 voice);

// Reset the quest detail animations, select the quest, and enter the confirmation state.
void FUN_002c8778(u16 questId)
{
    UiQuestApoc *menu = g_uiQuest;
    menu->questId = questId;
    menu->detailTimer = 0;
    uiSpriteSetKeyframe(menu->sprite(0), 1, 0);
    uiSpriteSetImageKeyframe(menu->sprite(0), 8, 0);
    if (menu) {
        uiSpriteSetKeyframe(menu->sprite(10), 7, 0);
        uiSpriteSetImageKeyframe(menu->sprite(10), 11, 0);
        uiSpriteSetKeyframe(menu->sprite(11), 8, 0);
        uiSpriteSetImageKeyframe(menu->sprite(11), 11, 0);
        uiSpriteSelectAnim(menu->sprite(12), 6);
        uiSpriteSelectAnim(menu->sprite(13), 7);
        uiSpriteSelectAnim(menu->sprite(14), 8);
        spriteSetLayer(menu->sprite(14), 2);
        uiSpriteSelectAnim(menu->sprite(15), 10);
        menu->firstCounter = 0;
        menu->secondCounter = 0;
    }
    uiQuestEnterMenuState(g_uiQuest, 0x11);
    sysPlaySe(0x1a);
    sysPlayVoice(0x10000ca);
}
}
