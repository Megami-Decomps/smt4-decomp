/* NON_MATCHING: script phase increment path duplication and branch direction differ. */
#include "battle/btlPartnerAttack.h"
#include "script/scrScriptProcess.h"
struct ScriptState;
extern "C" {
extern const char DAT_00529854[];
extern const char DAT_00529870[];
void textFormatBuffer(char *output, const char *format, ...);
void scrScriptProcessDestroy(ScriptResource *script);
void asdMemFree(void *memory);
void FUN_00416610(void *entries);
void asdLoadFileAsyncSimple(const char *path, void **output, u32 flags);
ScriptRunState *FUN_00275bc8(void *data, u32 flags);
void scrScriptProcessStartEntry(ScriptRunState *state, u32 entry);
u32 scrRunOpcodesStub(ScriptState *state);
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
extern "C" void FUN_004119fc(BtlPartnerAttackA *work)
{
    switch (work->scriptPhase) {
    case 0: {
        u32 kind = work->state;
        if (kind == 2) {
            FUN_00416610(work->entries);
            work->actionState = 6;
            break;
        }
        releasePartnerScript(work);
        char path[32] = {};
        if (kind == 0)
            textFormatBuffer(path, DAT_00529854);
        else if (kind == 1)
            textFormatBuffer(path, DAT_00529870);
        asdLoadFileAsyncSimple(path, &work->scriptData, 0);
        ++work->scriptPhase;
        break;
    }
    case 1:
        if (work->scriptData) {
            work->runState = FUN_00275bc8(work->scriptData, 0);
            work->runState->mode = 1;
            scrScriptProcessStartEntry(work->runState, 0);
            ++work->scriptPhase;
        }
        break;
    case 2:
        if (!work->scriptProcess || scrRunOpcodesStub(reinterpret_cast<ScriptState *>(work->scriptProcess)) == 2) {
            if (work->argument && work->selected >= 0) {
                FUN_00416610(work->entries);
                work->actionState = 5;
            } else {
                ++work->state;
                work->scriptPhase = 0;
            }
            releasePartnerScript(work);
        }
        break;
    }
}
