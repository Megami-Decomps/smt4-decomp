/* NON_MATCHING: only the saved zero/global-pointer registers are swapped (r6/r7 versus retail r7/r6). */
#include "gfx/TransformInterpolation.h"
#include "script/scrScriptProcess.h"

struct EventScriptLaunchWorkView {
    TransformInterpolation transform;
    u8 unk090[0x10e0];
    void *bytecode; /* 0x1170 */
    void *messages; /* 0x1174 */
    ScriptRunState *script; /* 0x1178 */
};
struct EventScriptLaunchGlobalsView {
    u8 unk00[0x98];
    u16 result;
    s16 eventId;
    char entryName[1];
};
typedef char EventScriptLaunchWorkOffsets[offsetof(EventScriptLaunchWorkView, bytecode) == 0x1170 &&
    offsetof(EventScriptLaunchGlobalsView, entryName) == 0x9c ? 1 : -1];

extern "C" {
extern EventScriptLaunchGlobalsView DAT_005f16fc;
void FUN_004b75d0(TransformInterpolation *);
s32 scrRunOpcodesStub(ScriptRunState *);
void scrScriptProcessDestroy(ScriptRunState *);
void asdMemFree(void *);
void FUN_001695a0();
void textFormatBuffer(char *, const char *, ...);
void *asdLoadFileSyncDefault(const char *);
ScriptRunState *FUN_00275bc8(void *, void *);
void scriptProcessSetMode(ScriptRunState *process, s32 mode);
u32 tableGroupFindEntryIndex(void *, const char *);
void scrScriptProcessStartEntry(ScriptRunState *, u32);

/* Load and run an event entry, releasing both resources after the script completes. */
void FUN_004b88e0(EventScriptLaunchWorkView *work)
{
    char path[132];
    FUN_004b75d0(&work->transform);
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
    DAT_005f16fc.result = 0;
    FUN_001695a0();
    textFormatBuffer(path, "event/e%03d/e%03d.bf", DAT_005f16fc.eventId, DAT_005f16fc.eventId);
    work->bytecode = asdLoadFileSyncDefault(path);
    textFormatBuffer(path, "event/e%03d/e%03d.mbm", DAT_005f16fc.eventId, DAT_005f16fc.eventId);
    work->messages = asdLoadFileSyncDefault(path);
    work->script = FUN_00275bc8(work->bytecode, work->messages);
    scriptProcessSetMode(work->script, 2);
    u32 entry = tableGroupFindEntryIndex(work->bytecode, DAT_005f16fc.entryName);
    scrScriptProcessStartEntry(work->script, entry);
    ++work->transform.runtime.phase;
}
}
