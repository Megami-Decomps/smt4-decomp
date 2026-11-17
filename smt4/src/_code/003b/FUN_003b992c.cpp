/* NON_MATCHING: the hoisted script/message/process field addresses take different callee-saved registers, and the
 * message file is passed from the reloaded field instead of the load result (an extra mov). */
#include "event/EventScriptScene.h"
#include "battle/btlEvent.h"
#include "game/GameState.h"

extern "C" {
void FUN_0022b778(EventScriptScene *scene);
void scrScriptProcessDestroy(ScriptRunState *process);
void asdMemFree(void *allocation);
void messageSetConfirmDisplayMode();
s32 textFormatBuffer(char *destination, const char *format, ...);
void *asdLoadFileSyncDefault(const char *path);
ScriptRunState *scrScriptProcessCreate(void *script, void *messages);
void scriptProcessSetMode(ScriptRunState *process, s32 mode);
u32 tableGroupFindEntryIndex(void *script, const char *name);
void scrScriptProcessStartEntry(ScriptRunState *process, u32 entry);

// Load and run the selected event script, then release both script resources when it ends.
void FUN_003b992c(EventScriptScene *scene)
{
    char path[128];
    FUN_0022b778(scene);
    if (scene->substate != 0) {
        if (scene->substate == 1 && scrRunOpcodesStub(scene->process) == 2) {
            scrScriptProcessDestroy(scene->process);
            scene->process = NULL;
            asdMemFree(scene->scriptData);
            scene->scriptData = NULL;
            asdMemFree(scene->messageData);
            scene->messageData = NULL;
            scene->state = 5;
            scene->substate = 0;
        }
        return;
    }
    GameStateEventBlock *event = &g_gameState.event;
    event->eventState = 0;
    messageSetConfirmDisplayMode();
    textFormatBuffer(path, "event/e%03d/e%03d.bf", event->eventId, event->eventId);
    scene->scriptData = asdLoadFileSyncDefault(path);
    textFormatBuffer(path, "event/e%03d/e%03d.mbm", event->eventId, event->eventId);
    scene->messageData = asdLoadFileSyncDefault(path);
    scene->process = scrScriptProcessCreate(scene->scriptData, scene->messageData);
    scriptProcessSetMode(scene->process, 2);
    u32 entry = tableGroupFindEntryIndex(scene->scriptData, event->eventEntryName);
    scrScriptProcessStartEntry(scene->process, entry);
    ++scene->substate;
}
}
