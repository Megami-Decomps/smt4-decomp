#include <stdio.h>
#include "shard/W4_W4Match2_UiQuest.h"
#include "quest_center/QuestRecord.h"
#include "addon/aocMain.h"
#include "addon/AocSystem.h"

extern "C" {
void uiBindRecordRewardText(s32 quest, s32 mode, s32 enabled);
u32 dataSetFindRequestedFileByKey(AocSystem *system, s32 quest);
u32 asdLoadFileSyncDefault(const char *path);
void asdTextDrawDirectoryEntry(u32 text, s32 font, s32 mode, s32 x, s32 y, u32 directory, s32 index);
void asdTextDrawFormatted(u32 text, s32 font, s32 mode, s32 x, s32 y, const char *format, ...);
u8 questGetDetailPageCount(int index);
s32 FUN_003336dc(s32 quest, u32 state);
u8 *textConvertToGlyphPairs(const u8 *source, u8 *output);
void uiQuestCountDetailPages(s32 quest);

// Populate title, optional detail and reward text from add-on or retail quest directories.
void uiQuestLoadDetailText(u16 quest, u32 state)
{
    UiQuest *menu = g_uiQuest;
    if (quest != 0) {
        uiBindRecordRewardText(quest, 1, 1);
        u32 directory = dataSetFindRequestedFileByKey(g_aocSystem, quest);
        if (directory != 0) {
            menu->panelView.panel.entryDirectory = directory;
            menu->panelView.panel.entryOwnership.borrowed = 1;
        } else {
            char path[64];
            sprintf(path, "event/quest/quest%03d.mbm", quest);
            directory = asdLoadFileSyncDefault(path);
            menu->panelView.panel.entryDirectory = directory;
            menu->panelView.panel.entryOwnership.borrowed = 0;
        }
        asdTextDrawDirectoryEntry(menu->panelView.panel.texts[0], 3, -1, 0, 3, directory, 0);
        s32 detail = questGetDetailPageCount(quest);
        if (detail > 0)
            asdTextDrawDirectoryEntry(menu->panelView.panel.texts[2], 3, -1, 0, 3, menu->panelView.panel.entryDirectory, detail);
        uiBindRecordRewardText(quest, 1, 0);
        s32 reward = FUN_003336dc(quest, state);
        if (reward < 0) {
            QuestRecord *record = questDataGetRecord(quest);
            const u8 *text = textConvertToGlyphPairs(record->detail, NULL);
            asdTextDrawFormatted(menu->panelView.panel.texts[1], 3, -1, 0, 3, "%s", text);
        } else {
            asdTextDrawDirectoryEntry(menu->panelView.panel.texts[1], 3, -1, 0, 3, menu->panelView.panel.sysImages, reward);
        }
        uiQuestCountDetailPages(quest);
    }
}
}
