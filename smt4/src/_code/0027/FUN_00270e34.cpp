/* NON_MATCHING: global load precedes the prologue; message/script branch registers and process-mode store scheduling differ. */
#include "map/mapMain.h"
#include "addon/aocMain.h"
#include "script/scrScriptProcess.h"
#include "gamedata/TableGroup.h"

extern "C" {
extern MapMain *g_mapMain;
extern AocSystem *g_aocSystem;
extern const char DAT_004044ec[];
extern const char DAT_004044d4[];
void FUN_002bff50(void);
s32 textFormatBuffer(char *buffer, const char *format, ...);
s32 aocPackageGrantsItem(AocSystem *system, u32 event, u32 kind);
void *FUN_00289de4(AocSystem *system, u32 event, u32 kind);
void *aocBufferQueueDisplay(AocSystem *system, u32 event, u32 kind);
void asdMemFree(void *memory);
void *asdLoadFileSyncDefault(const char *path);
ScriptRunState *FUN_00297060(void *script, void *messages);
s32 FUN_002897f0(u32 event, char *entryName);
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *entryName);
void scrScriptProcessStartEntry(ScriptRunState *process, u32 entry);

// Load a map event's script/messages from DLC or ROM and start its named entry.
u32 FUN_00270e34(void)
{
    // These fields sit in padding beginning at 0x3D; a word-aligned union would shift it.
    struct MapEventNameView {
        u8 unk00[0x64];
        u32 event;
        char entryName[0x24];
    };
    typedef char MapEventNameOffsetsCheck[
        offsetof(MapEventNameView, event) == 0x64 && offsetof(MapEventNameView, entryName) == 0x68 ? 1 : -1];
    MapMain *map = g_mapMain;
    MapEventNameView *event = reinterpret_cast<MapEventNameView *>(map);
    char scriptPath[128];
    char messagePath[128];
    FUN_002bff50();
    textFormatBuffer(scriptPath, DAT_004044ec, event->event, event->event);
    textFormatBuffer(messagePath, DAT_004044d4, event->event, event->event);
    void *messages;
    if (aocPackageGrantsItem(g_aocSystem, event->event, 0) != 0) {
        map->scriptData = FUN_00289de4(g_aocSystem, event->event, 0);
        messages = aocBufferQueueDisplay(g_aocSystem, event->event, 0);
        map->messageData = messages;
        if (map->scriptData == NULL || messages == NULL) {
            if (map->scriptData != NULL) {
                asdMemFree(map->scriptData);
                map->scriptData = NULL;
            }
            if (map->messageData != NULL) {
                asdMemFree(map->messageData);
                map->messageData = NULL;
            }
            return 0;
        }
    } else {
        map->scriptData = asdLoadFileSyncDefault(scriptPath);
        messages = asdLoadFileSyncDefault(messagePath);
        map->messageData = messages;
    }
    ScriptRunState *process = FUN_00297060(map->scriptData, messages);
    map->scriptProcess = process;
    process->mode = 2;
    map->completionFlag = FUN_002897f0(event->event, event->entryName);
    u32 entry = tableGroupFindEntryIndex(static_cast<TableGroupHeader *>(map->scriptData), event->entryName);
    scrScriptProcessStartEntry(static_cast<ScriptRunState *>(map->scriptProcess), entry);
    return 1;
}
}
