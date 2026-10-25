/* NON_MATCHING: global-pointer load and stack reservation exchange order in the prologue. */
#include "shard/W4_W4Match2_UiQuest.h"
#include "shard/W6_W6Match5_SecondarySort.h"
#include "addon/aocMain.h"

extern "C" {
extern AocSystem *g_aocSystem;
void uiBindRecordRewardText(s32 quest, s32 mode, s32 enabled);
u32 FUN_00385ccc(AocSystem *system, s32 quest);
void textFormatBuffer(char *output, const char *format, ...);
u32 asdLoadFileSyncDefault(const char *path);
void asdTextDrawDirectoryEntry(u32 text, s32 font, s32 mode, s32 x, s32 y, u32 directory, s32 index);
void asdTextDrawFormatted(u32 text, s32 font, s32 mode, s32 x, s32 y, const char *format, ...);
u8 FUN_00241c40(int index);
s32 FUN_003336dc(s32 quest, u32 state);
u8 *FUN_002bcfc0(const u8 *source, u8 *output);
void uiQuestCountDetailPages(s32 quest);

// Populate title, optional detail and reward text from add-on or retail quest directories.
void FUN_0028fe0c(u16 quest, u32 state)
{
    UiQuest *menu = g_uiQuest;
    if (quest != 0) {
        uiBindRecordRewardText(quest, 1, 1);
        u32 directory = FUN_00385ccc(g_aocSystem, quest);
        if (directory != 0) {
            menu->panel.entryDirectory = directory;
            menu->panel.entryOwnership.borrowed = 1;
        } else {
            char path[64];
            textFormatBuffer(path, "event/quest/quest%03d.mbm", quest);
            directory = asdLoadFileSyncDefault(path);
            menu->panel.entryDirectory = directory;
            menu->panel.entryOwnership.borrowed = 0;
        }
        asdTextDrawDirectoryEntry(menu->panel.texts[0], 3, -1, 0, 3, directory, 0);
        s32 detail = FUN_00241c40(quest);
        if (detail > 0)
            asdTextDrawDirectoryEntry(menu->panel.texts[2], 3, -1, 0, 3, menu->panel.entryDirectory, detail);
        uiBindRecordRewardText(quest, 1, 0);
        s32 reward = FUN_003336dc(quest, state);
        if (reward < 0) {
            SecondarySortRecord *record = dataTable1bOr1cGetRecord(quest);
            const u8 *text = FUN_002bcfc0(record->description.encoded, NULL);
            asdTextDrawFormatted(menu->panel.texts[1], 3, -1, 0, 3, "%s", text);
        } else {
            asdTextDrawDirectoryEntry(menu->panel.texts[1], 3, -1, 0, 3, menu->panel.sysImages, reward);
        }
        uiQuestCountDetailPages(quest);
    }
}
}
