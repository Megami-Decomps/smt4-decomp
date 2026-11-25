#include <stdio.h>
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "util/MemoryHelpers_VariantB.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"
#include "event/EventScriptScene.h"
#include "script/scrScriptProcess.h"
#include "battle/btlEvent.h"
#include "game/GameState.h"
#include "script/ScriptEntry.h"

extern "C" {
void transformInterpolationStep(EventScriptScene *scene);
void messageSetConfirmDisplayMode();
u32 tableGroupFindEntryIndex(void *script, const char *name);

// Load and run the selected event script, then release both script resources when it ends.
void eventUpdateScriptLaunch(EventScriptScene *scene)
{
    char path[128];
    transformInterpolationStep(scene);
    if (scene->substate == 0) {
        g_gameState.event.eventState = 0;
        messageSetConfirmDisplayMode();
        sprintf(path, "event/e%03d/e%03d.bf", g_gameState.event.eventId, g_gameState.event.eventId);
        scene->scriptData = asdLoadFileSyncDefault(path);
        sprintf(path, "event/e%03d/e%03d.mbm", g_gameState.event.eventId, g_gameState.event.eventId);
        scene->messageData = asdLoadFileSyncDefault(path);
        scene->process = scrScriptProcessCreate(scene->scriptData, scene->messageData);
        scriptProcessSetMode(scene->process, 2);
        u32 entry = tableGroupFindEntryIndex(scene->scriptData, g_gameState.event.eventEntryName);
        scrScriptProcessStartEntry(scene->process, entry);
        ++scene->substate;
    } else if (scene->substate == 1) {
        if (scrRunOpcodesStub(scene->process) == 2) {
            scrScriptProcessDestroy(scene->process);
            scene->process = NULL;
            asdMemFree(scene->scriptData);
            scene->scriptData = NULL;
            asdMemFree(scene->messageData);
            scene->messageData = NULL;
            scene->state = 5;
            scene->substate = 0;
        }
    }
}
}
