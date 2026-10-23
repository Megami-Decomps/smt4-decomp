/* NON_MATCHING: two instruction-order swaps remain in stack/global setup and fallback-name arguments. */
#include "shard/W5_W5Match7_UiQuest.h"
#include "shard/W5_W5Match7_DataRecord.h"
struct AocSystemA;
extern "C" {
extern AocSystemA *g_aocSystem;
void FUN_003dea6c(u32 id, s32 enabled, s32 flags);
void *FUN_0046c0f8(AocSystemA *system, u32 id);
void textFormatBuffer(char *output, const char *format, ...);
void *asdLoadFileSyncDefault(const char *path);
void asdTextDrawDirectoryEntry(u32 window, s32 mode, u32 color, u32 flags, s32 type, const void *data, s32 entry);
s32 partyEntryGetByte1(u32 id);
s32 FUN_003de464(u32 id, u32 mode);
char *FUN_001654f8(const char *name, char *output, s32 size);
void FUN_0023723c(u32 window, s32 mode, u32 color, u32 flags, s32 type, const char *format, const char *text);
s32 questHasSpecialDetailPage(u32 id);
s32 itemDataGetCategory(u32 id);
void uiQuestRefreshDetailPages(u32 id);

void FUN_003d498c(u32 id, u32 mode)
{
    UiQuestApoc *work = g_uiQuest;
    if (!id)
        return;
    FUN_003dea6c(id, 1, 1);
    void *messages = FUN_0046c0f8(g_aocSystem, id);
    if (messages) {
        work->detailMessages = messages;
        work->messageOwnership.addonOwned = 1;
    } else {
        char path[64];
        textFormatBuffer(path, "event/quest/quest%03d.mbm", id);
        messages = asdLoadFileSyncDefault(path);
        work->detailMessages = messages;
        work->messageOwnership.addonOwned = 0;
    }
    asdTextDrawDirectoryEntry(work->sprites[0], 3, 0xFFFFFFFF, 0, 3, messages, 0);
    s32 extraPage = partyEntryGetByte1(id);
    if (extraPage > 0)
        asdTextDrawDirectoryEntry(work->sprites[2], 3, 0xFFFFFFFF, 0, 3, work->detailMessages, extraPage);
    FUN_003dea6c(id, 1, 0);
    s32 detail = FUN_003de464(id, mode);
    if (detail < 0) {
        const char *name = FUN_001654f8(FUN_001ad9b4(id)->name.encoded, 0, 0);
        FUN_0023723c(work->sprites[1], 3, 0xFFFFFFFF, 0, 3, "%s", name);
    } else {
        asdTextDrawDirectoryEntry(work->sprites[1], 3, 0xFFFFFFFF, 0, 3, reinterpret_cast<const void *>(work->messages), detail);
    }
    if (questHasSpecialDetailPage(id))
        asdTextDrawDirectoryEntry(work->sprites[3], 3, 0xFFFFFFFF, 0, 3, work->detailMessages, itemDataGetCategory(id));
    uiQuestRefreshDetailPages(id);
}
}
