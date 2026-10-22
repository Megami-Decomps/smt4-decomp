#include "common.h"

namespace {
// 18-byte record the task keeps a working and a committed copy of.
struct TaskRecord {
    u16 values[9];
};

struct ScriptMenuTask {
    /* 0x000 */ u8 unk000[0xb0];
    /* 0x0B0 */ TaskRecord current;
    /* 0x0C2 */ TaskRecord pending;
    /* 0x0D4 */ u8 unk0d4[0x580];
    /* 0x654 */ u32 scriptEntry;
    /* 0x658 */ u8 started;
};
}

extern "C" {

s32 buttonHelpGetState(void);
void FUN_002636d0(s32);
s32 scrRunOpcodesStub(u32 entry);
s32 messageMainGetChoiceResult(void);
void FUN_00296ee0(ScriptMenuTask *task, s32 state);
s32 sys43e188GetState(void);
void scrScriptProcessStartEntry(u32 entry, s32 mode);

/* Start the task's script once the system is ready, then run it; when it finishes, commit the pending record and advance. */
void scriptMenuTaskRunScript(ScriptMenuTask *task)
{
    if (task->started) {
        if (buttonHelpGetState() != 0) {
            FUN_002636d0(0);
        }
        if (scrRunOpcodesStub(task->scriptEntry) == 2) {
            if (messageMainGetChoiceResult() != 0) {
                task->current = task->pending;
            }
            FUN_00296ee0(task, 2);
        }
    } else if (sys43e188GetState() != 0) {
        scrScriptProcessStartEntry(task->scriptEntry, 3);
        task->started = 1;
    }
}

} /* extern "C" */
