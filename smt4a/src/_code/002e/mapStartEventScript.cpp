/* NON_MATCHING: retail retains discarded event-ID argument moves and different start-entry tail placement; resource-loading body matches. */
#include "common.h"
#include "addon/aocMain.h"
#include "shard/W5_W5Match7_SceneState.h"
#include "shard/W6_W6Match8_MapMain.h"

struct MapScriptProcess {
    u8 unk00[0x108];
    u32 mode;
};

extern "C" {
extern MapMainState *g_mapMain;
extern AocSystemA *g_aocSystem;
void FUN_001695a0();
s32 textFormatBuffer(char *buffer, const char *format, ...);
s32 FUN_0046e08c(AocSystemA *system, u32 id, s32 flags);
void *aocDrawText7(AocSystemA *system, u32 id, s32 flags);
void *aocDrawText8(AocSystemA *system, u32 id, s32 flags);
void asdMemFree(void *memory);
void *FUN_0020214c(const char *path);
MapScriptProcess *FUN_00275bc8(void *script, void *messages);
s32 scrScriptProcessGetEntry(MapScriptProcess *process, s32 entry);
s32 tableGroupFindEntryIndex(void *script, const char *name);
u32 scrScriptProcessStartEntry(MapScriptProcess *process, s32 entry);

// Load map-event script/message resources and start the requested override or named entry.
u32 mapStartEventScript()
{
    MapMainState *map = g_mapMain;
    char scriptPath[128];
    char messagePath[128];
    FUN_001695a0();
    textFormatBuffer(scriptPath, "event/e%03d/e%03d.bf", map->eventId, map->eventId);
    textFormatBuffer(messagePath, "event/e%03d/e%03d.mbm", map->eventId, map->eventId);
    if (FUN_0046e08c(g_aocSystem, map->eventId, 0)) {
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
        map->script = FUN_0020214c(scriptPath);
        map->messages = FUN_0020214c(messagePath);
    }
    map->process = FUN_00275bc8(map->script, map->messages);
    map->process->mode = 2;
    if (g_gameState.scriptOverride) {
        g_gameState.scriptOverride = 0;
        scrScriptProcessGetEntry(map->process, g_gameState.scriptEntry.entry);
        map->scriptState = 0;
        scrScriptProcessStartEntry(map->process, g_gameState.scriptEntry.entry);
    } else {
        map->scriptState = 0;
        s32 entry = tableGroupFindEntryIndex(map->script, map->entryName);
        scrScriptProcessStartEntry(map->process, entry);
    }
    return 1;
}
}
