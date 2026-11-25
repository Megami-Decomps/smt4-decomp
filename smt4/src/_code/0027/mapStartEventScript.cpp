#include <stdio.h>
#include "map/mapMain.h"
#include "addon/aocMain.h"
#include "script/scrScriptProcess.h"
#include "gamedata/TableGroup.h"
#include "addon/AocSystem.h"
#include "addon/AocFileBufferApi.h"
#include "script/ScriptEntry.h"

extern "C" {
extern MapMain *g_mapMain;
/* The two retail formats are contiguous; the script format starts at the next word boundary. */
static const struct EventPathFormats {
    char message[24];
    char script[21];
} s_eventPathFormats = {"event/e%03d/e%03d.mbm", "event/e%03d/e%03d.bf"};
void messageSetConfirmDisplayMode(void);
s32 aocPackageGrantsItem(AocSystem *system, u32 event, u32 kind);
void asdMemFree(void *memory);
void *asdLoadFileSyncDefault(const char *path);
s32 eventScriptFindCompletionFlag(u32 event, char *entryName);
s32 tableGroupFindEntryIndex(TableGroupHeader *table, const char *entryName);

/* Loads a map event's script and messages from DLC or ROM and starts its named entry. */
u32 mapStartEventScript(void)
{
    MapMain *map = g_mapMain;
    char scriptPath[128];
    char messagePath[128];
    messageSetConfirmDisplayMode();
    sprintf(scriptPath, s_eventPathFormats.script, map->eventId, map->eventId);
    sprintf(messagePath, s_eventPathFormats.message, map->eventId, map->eventId);
    if (aocPackageGrantsItem(g_aocSystem, map->eventId, 0) != 0) {
        map->scriptData = aocDrawText7(g_aocSystem, map->eventId, NULL);
        map->messageData = aocBufferQueueDisplay(g_aocSystem, map->eventId, NULL);
        if (map->scriptData == NULL || map->messageData == NULL) {
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
        map->messageData = asdLoadFileSyncDefault(messagePath);
    }
    map->scriptProcess = scrScriptProcessCreate(map->scriptData, map->messageData);
    scriptProcessSetMode(map->scriptProcess, 2);
    map->completionFlag = eventScriptFindCompletionFlag(map->eventId, map->entryName);
    u32 entry = tableGroupFindEntryIndex((TableGroupHeader *)map->scriptData, map->entryName);
    scrScriptProcessStartEntry(map->scriptProcess, entry);
    return 1;
}
} /* extern "C" */
