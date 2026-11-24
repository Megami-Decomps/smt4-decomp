#include "shard/W5_W5Match7_UiQuest.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Gfx/Text/AsdTextA.h"

extern "C" {

u32 asdLoadFileSyncDefault(const char *path);

/* Loads the quest messages and creates the quest screen's four sprites (white, teal, white, white) each tinted 0x646464ff. */
void uiQuestSpritesCreate(void)
{
    UiQuestApoc *quest = g_uiQuest;

    quest->messages = asdLoadFileSyncDefault("event/quest/QuestSys.mbm");
    quest->sprites[0] = (u32)spriteHandleCreate(0);
    uiObjectSetColorRgb(quest->sprites[0], 0xffffffff);
    positionStateSet((AsdText *)quest->sprites[0], 0, 0x646464ff, 0.0f);
    quest->sprites[1] = (u32)spriteHandleCreate(0);
    uiObjectSetColorRgb(quest->sprites[1], 0x5eaabaff);
    positionStateSet((AsdText *)quest->sprites[1], 0, 0x646464ff, 0.0f);
    quest->sprites[2] = (u32)spriteHandleCreate(0);
    uiObjectSetColorRgb(quest->sprites[2], 0xffffffff);
    positionStateSet((AsdText *)quest->sprites[2], 0, 0x646464ff, 0.0f);
    quest->sprites[3] = (u32)spriteHandleCreate(0);
    uiObjectSetColorRgb(quest->sprites[3], 0xffffffff);
    positionStateSet((AsdText *)quest->sprites[3], 0, 0x646464ff, 0.0f);
}

} /* extern "C" */
