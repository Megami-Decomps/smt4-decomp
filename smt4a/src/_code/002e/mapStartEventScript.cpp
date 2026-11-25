#include "common.h"
#include <stdio.h>
#include "game/GameStateA.h"
#include "addon/aocMain.h"
#include "addon/AocDrawText.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match8_MapMain.h"
#include "addon/AocSystemA.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntryLookup.h"
#include "event/EventCompletion.h"
#include "script/ScriptEntry.h"

extern "C" {
extern MapMainState *g_mapMain;
void messageSetScriptDisplayMode();
void asdMemFree(void *memory);
void *asdLoadFileSyncDefault(const char *path);
s32 tableGroupFindEntryIndex(void *script, const char *name);

/* Loads a map event's script and messages and starts its named or overridden entry. */
u32 mapStartEventScript()
{
    MapMainState *map = g_mapMain;
    char scriptPath[128];
    char messagePath[128];
    messageSetScriptDisplayMode();
    sprintf(scriptPath, "event/e%03d/e%03d.bf", map->eventId, map->eventId);
    sprintf(messagePath, "event/e%03d/e%03d.mbm", map->eventId, map->eventId);
    if (aocPackageGrantsItem(g_aocSystem, map->eventId, 0)) {
        map->script = aocDrawText7(g_aocSystem, map->eventId, 0);
        map->messages = aocDrawText8(g_aocSystem, map->eventId, 0);
        if (map->script == NULL || map->messages == NULL) {
            if (map->script != NULL) {
                asdMemFree(map->script);
                map->script = NULL;
            }
            if (map->messages != NULL) {
                asdMemFree(map->messages);
                map->messages = NULL;
            }
            return 0;
        }
    } else {
        map->script = asdLoadFileSyncDefault(scriptPath);
        map->messages = asdLoadFileSyncDefault(messagePath);
    }
    map->process = scrScriptProcessCreate(map->script, map->messages);
    map->process->mode = 2;
    if (g_gameState.scriptOverride == 0) {
        map->scriptState = eventScriptFindCompletionFlag(map->eventId, map->entryName);
        s32 entry = tableGroupFindEntryIndex(map->script, map->entryName);
        scrScriptProcessStartEntry(map->process, entry);
    } else {
        g_gameState.scriptOverride = 0;
        map->scriptState = eventScriptFindCompletionFlag(map->eventId,
            scrScriptProcessGetEntry(map->process, g_gameState.scriptEntry));
        scrScriptProcessStartEntry(map->process, g_gameState.scriptEntry);
    }
    return 1;
}
} /* extern "C" */
