#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {


u32 FUN_0020214c(const char *path);
u32 spriteHandleCreate(u32 type);
void FUN_001527d8(u32 sprite, u32 color);
void positionStateSet(u32 sprite, s32 mode, u32 color, f32 value);


/* Loads the quest messages and creates the quest screen's four sprites (white, teal, white, white) each tinted 0x646464ff. */
void uiQuestSpritesCreate(void)
{
    UiQuestApoc *quest = g_uiQuest;

    quest->messages = FUN_0020214c("event/quest/QuestSys.mbm");
    quest->sprites[0] = spriteHandleCreate(0);
    FUN_001527d8(quest->sprites[0], 0xffffffff);
    positionStateSet(quest->sprites[0], 0, 0x646464ff, 0.0f);
    quest->sprites[1] = spriteHandleCreate(0);
    FUN_001527d8(quest->sprites[1], 0x5eaabaff);
    positionStateSet(quest->sprites[1], 0, 0x646464ff, 0.0f);
    quest->sprites[2] = spriteHandleCreate(0);
    FUN_001527d8(quest->sprites[2], 0xffffffff);
    positionStateSet(quest->sprites[2], 0, 0x646464ff, 0.0f);
    quest->sprites[3] = spriteHandleCreate(0);
    FUN_001527d8(quest->sprites[3], 0xffffffff);
    positionStateSet(quest->sprites[3], 0, 0x646464ff, 0.0f);
}

} /* extern "C" */
