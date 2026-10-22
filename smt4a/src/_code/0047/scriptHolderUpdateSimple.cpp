/* NON_MATCHING: script-holder state dispatch saves extra registers and uses different branch sharing. */
/* Loads the quest script and system images, runs its entry, and finalizes the screen on completion. */
#include "shard/Shard0047.h"
#include "script/scrScriptProcess.h"

extern "C" {
ScriptRunState *FUN_00275bc8(void *script, void *images);
void scrScriptProcessStartEntry(ScriptRunState *process, u32 entry);
void asdLoadFileAsyncSimple(const char *path, void **destination, s32 flags);
s32 scrRunOpcodesStub(ScriptRunState *process);
u32 FUN_004186e0(void);
void FUN_00418070(u32 object, s32 value);
void optionsClearFlag1(void);
void FUN_003a36b4(void);
void FUN_004731d8(void);

u32 scriptHolderUpdateSimple(ScriptHolder *holder)
{
    switch (holder->phase.state) {
    case 0:
        asdLoadFileAsyncSimple("event/quest/QuestScr.bf", &holder->buf0C, 0);
        asdLoadFileAsyncSimple("event/quest/QuestSys.mbm", &holder->buf10, 0);
        holder->phase.state = 1;
        break;
    case 1:
        if (holder->buf0C != NULL && holder->buf10 != NULL) {
            holder->process = FUN_00275bc8(holder->buf0C, holder->buf10);
            holder->process->mode = 2;
            scrScriptProcessStartEntry(holder->process, holder->phase.entry);
            holder->phase.state = 2;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(holder->process) == 2) {
            FUN_00418070(FUN_004186e0(), 0);
            optionsClearFlag1();
            FUN_003a36b4();
            FUN_004731d8();
            holder->phase.state = 4;
        }
        break;
    case 4:
        return 1;
    }
    return 0;
}
}
