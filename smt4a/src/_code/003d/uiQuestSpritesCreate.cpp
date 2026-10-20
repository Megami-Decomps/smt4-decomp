#include "common.h"

extern "C" {

typedef struct UiQuest003dc530 {
    /* 0x000 */ u8 unk000[0x91c];
    /* 0x91c */ u32 sprites[4];
    /* 0x92c */ u8 unk92c[4];
    /* 0x930 */ u32 messages;
} UiQuest003dc530;

u32 FUN_0020214c(const char *path);
u32 spriteHandleCreate(u32 type);
void FUN_001527d8(u32 sprite, u32 color);
void FUN_00151408(u32 sprite, s32 mode, u32 color, f32 value);

extern UiQuest003dc530 *g_uiQuest; /* 0x57f28c */

/* Loads the quest messages and creates the quest screen's four sprites (white, teal, white, white) each tinted 0x646464ff. */
void uiQuestSpritesCreate(void)
{
    UiQuest003dc530 *quest = g_uiQuest;

    quest->messages = FUN_0020214c("event/quest/QuestSys.mbm");
    quest->sprites[0] = spriteHandleCreate(0);
    FUN_001527d8(quest->sprites[0], 0xffffffff);
    FUN_00151408(quest->sprites[0], 0, 0x646464ff, 0.0f);
    quest->sprites[1] = spriteHandleCreate(0);
    FUN_001527d8(quest->sprites[1], 0x5eaabaff);
    FUN_00151408(quest->sprites[1], 0, 0x646464ff, 0.0f);
    quest->sprites[2] = spriteHandleCreate(0);
    FUN_001527d8(quest->sprites[2], 0xffffffff);
    FUN_00151408(quest->sprites[2], 0, 0x646464ff, 0.0f);
    quest->sprites[3] = spriteHandleCreate(0);
    FUN_001527d8(quest->sprites[3], 0xffffffff);
    FUN_00151408(quest->sprites[3], 0, 0x646464ff, 0.0f);
}

} /* extern "C" */
