/* NON_MATCHING: message/process pointers exchange r6/r7 and script creation introduces one additional MOV. */
#include "event/EventScriptScene.h"
#include "battle/btlEvent.h"

extern "C" {
extern EventScriptGlobals DAT_0049fa1c;
void FUN_0022b778();
void scrScriptProcessDestroy(ScriptRunState *process);
void asdMemFree(void *allocation);
void FUN_002bff50();
s32 textFormatBuffer(char *destination, const char *format, ...);
void *asdLoadFileSyncDefault(const char *path);
ScriptRunState *FUN_00297060(void *script, void *messages);
u32 tableGroupFindEntryIndex(void *script, const char *name);
void scrScriptProcessStartEntry(ScriptRunState *process, u32 entry);

// Load and run the selected event script, then release both script resources when it ends.
void FUN_003b992c(EventScriptScene *scene)
{
    FUN_0022b778();
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
    char path[128];
    DAT_0049fa1c.state = 0;
    FUN_002bff50();
    textFormatBuffer(path, "event/e%03d/e%03d.bf", DAT_0049fa1c.eventId, DAT_0049fa1c.eventId);
    scene->scriptData = asdLoadFileSyncDefault(path);
    textFormatBuffer(path, "event/e%03d/e%03d.mbm", DAT_0049fa1c.eventId, DAT_0049fa1c.eventId);
    scene->messageData = asdLoadFileSyncDefault(path);
    scene->process = FUN_00297060(scene->scriptData, scene->messageData);
    scene->process->mode = 2;
    u32 entry = tableGroupFindEntryIndex(scene->scriptData, DAT_0049fa1c.entryName);
    scrScriptProcessStartEntry(scene->process, entry);
    ++scene->substate;
}
}
