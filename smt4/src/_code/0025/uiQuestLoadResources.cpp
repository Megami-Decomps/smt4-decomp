#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {

u32 asdLoadFileSyncDefault(const char *path);
u32 asdTextCreate(s32 arg);
void FUN_002bd82c(u32 text, u32 color);
void positionStateSet(u32 text, s32 arg, u32 color, f32 value);

/* Loads the quest system images and creates the panel's three text objects. */
void uiQuestLoadResources(void)
{
    UiQuest *quest = g_uiQuest;

    quest->panel.sysImages = asdLoadFileSyncDefault("event/quest/QuestSys.mbm");
    quest->panel.texts[0] = asdTextCreate(0);
    FUN_002bd82c(quest->panel.texts[0], 0x320202ff);
    positionStateSet(quest->panel.texts[0], 0, 0x646464ff, 0.0f);
    quest->panel.texts[1] = asdTextCreate(0);
    FUN_002bd82c(quest->panel.texts[1], 0x323232ff);
    positionStateSet(quest->panel.texts[1], 0, 0x646464ff, 0.0f);
    quest->panel.texts[2] = asdTextCreate(0);
    FUN_002bd82c(quest->panel.texts[2], 0x320202ff);
    positionStateSet(quest->panel.texts[2], 0, 0x646464ff, 0.0f);
}

} /* extern "C" */
