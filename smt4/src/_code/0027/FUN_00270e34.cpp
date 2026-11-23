/* NON_MATCHING: the DLC branch keeps the message pointer in r1 (retail: r0, loading scriptData into r1) and the ROM branch copies the message pointer before its store; everything else matches. */
#include <stdio.h>
#include "map/mapMain.h"
#include "addon/aocMain.h"
#include "script/scrScriptProcess.h"
#include "gamedata/TableGroup.h"
#include "addon/AocSystem.h"
#include "addon/AocFileBufferApi.h"

extern "C" {
extern MapMain *g_mapMain;
static const char s_eventScriptPathFormat[] = "event/e%03d/e%03d.bf";
static const char s_eventMessagePathFormat[] = "event/e%03d/e%03d.mbm";
void messageSetConfirmDisplayMode(void);
s32 aocPackageGrantsItem(AocSystem *system, u32 event, u32 kind);
void asdMemFree(void *memory);
void *asdLoadFileSyncDefault(const char *path);
s32 eventScriptFindCompletionFlag(u32 event, char *entryName);
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *entryName);
void scrScriptProcessStartEntry(ScriptProcess *process, u32 entry);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);

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
    messageSetConfirmDisplayMode();
    sprintf(scriptPath, s_eventScriptPathFormat, event->event, event->event);
    sprintf(messagePath, s_eventMessagePathFormat, event->event, event->event);
    void *messages;
    if (aocPackageGrantsItem(g_aocSystem, event->event, 0) != 0) {
        map->scriptData = aocDrawText7(g_aocSystem, event->event, 0);
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
    ScriptProcess *process = scrScriptProcessCreate(map->scriptData, messages);
    map->scriptProcess = process;
    scriptProcessSetMode(process, 2);
    map->completionFlag = eventScriptFindCompletionFlag(event->event, event->entryName);
    u32 entry = tableGroupFindEntryIndex(static_cast<TableGroupHeader *>(map->scriptData), event->entryName);
    scrScriptProcessStartEntry(static_cast<ScriptProcess *>(map->scriptProcess), entry);
    return 1;
}
}
