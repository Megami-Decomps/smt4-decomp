#include "runtime/Stdio.h"
#include "battle/btlPartnerAttack.h"
#include "script/scrScriptProcess.h"
#include "script/ScriptEntry.h"
struct ScriptProcess;
extern "C" {
extern const char DAT_00529854[];
extern const char DAT_00529870[];
void asdMemFree(void *memory);
void FUN_00416610(void *entries);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
}
static inline void releasePartnerScript(BtlPartnerAttackA *work)
{
    if (work->scriptProcess) {
        scrScriptProcessDestroy(work->scriptResource);
        work->scriptProcess = 0;
    }
    if (work->scriptData) {
        asdMemFree(work->scriptData);
        work->scriptData = 0;
    }
}
extern "C" void btlPartnerUpdateScript(BtlPartnerAttackA *work)
{
    switch (work->scriptPhase) {
    case 0: {
        u32 kind = work->state;
        if (kind == 2) {
            FUN_00416610(work->entries);
            work->actionState = 6;
            return;
        }
        releasePartnerScript(work);
        char path[32] = {};
        switch (kind) {
        case 0:
            __2sprintf(path, DAT_00529854);
            break;
        case 1:
            __2sprintf(path, DAT_00529870);
            break;
        }
        asdLoadFileAsyncSimple(path, &work->scriptData, 0);
        break;
    }
    case 1:
        if (!work->scriptData)
            return;
        work->runState = scrScriptProcessCreate(work->scriptData, 0);
        scriptProcessSetMode(work->runState, 1);
        scrScriptProcessStartEntry(work->runState, 0);
        break;
    case 2:
        if (!work->scriptProcess || scrRunOpcodesStub(reinterpret_cast<ScriptProcess *>(work->scriptProcess)) == 2) {
            if (work->argument && work->selected >= 0) {
                FUN_00416610(work->entries);
                work->actionState = 5;
            } else {
                ++work->state;
                work->scriptPhase = 0;
            }
            releasePartnerScript(work);
        }
        return;
    default:
        return;
    }
    ++work->scriptPhase;
}
