#include <stdio.h>
#include "game/GameStateA.h"
#include "gfx/TransformInterpolation.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntry.h"

struct EventScriptLaunchWorkView {
    TransformInterpolation transform;
    u8 unk090[0x10e0];
    void *bytecode; /* 0x1170 */
    void *messages; /* 0x1174 */
    ScriptProcess *script; /* 0x1178 */
};
typedef char EventScriptLaunchWorkOffsets[offsetof(EventScriptLaunchWorkView, bytecode) == 0x1170 ? 1 : -1];

extern "C" {
void transformInterpolationStep(TransformInterpolation *);
void asdMemFree(void *);
void messageSetScriptDisplayMode();
void *asdLoadFileSyncDefault(const char *);
u32 tableGroupFindEntryIndex(void *, const char *);

/* Load and run an event entry, releasing both resources after the script completes. */
void eventUpdateScriptLaunch(EventScriptLaunchWorkView *work)
{
    char path[132];
    transformInterpolationStep(&work->transform);
    if (work->transform.runtime.phase != 0) {
        if (work->transform.runtime.phase == 1 && scrRunOpcodesStub(work->script) == 2) {
            scrScriptProcessDestroy(work->script);
            work->script = NULL;
            asdMemFree(work->bytecode);
            work->bytecode = NULL;
            asdMemFree(work->messages);
            work->messages = NULL;
            work->transform.runtime.state = 5;
            work->transform.runtime.phase = 0;
        }
        return;
    }
    g_gameState.eventResult = 0;
    messageSetScriptDisplayMode();
    sprintf(path, "event/e%03d/e%03d.bf", g_gameState.eventId, g_gameState.eventId);
    work->bytecode = asdLoadFileSyncDefault(path);
    sprintf(path, "event/e%03d/e%03d.mbm", g_gameState.eventId, g_gameState.eventId);
    work->messages = asdLoadFileSyncDefault(path);
    work->script = scrScriptProcessCreate(work->bytecode, work->messages);
    scriptProcessSetMode(work->script, 2);
    u32 entry = tableGroupFindEntryIndex(work->bytecode, g_gameState.eventEntryName);
    scrScriptProcessStartEntry(work->script, entry);
    ++work->transform.runtime.phase;
}
} /* extern "C" */
