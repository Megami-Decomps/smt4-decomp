/* Loads the quest script and system images, runs its entry, and finalizes the screen on completion. */
#include "shard/Shard0047.h"
#include "script/scrScriptProcess.h"
#include "code/Code0041_Smt4a.h"

extern "C" {
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void asdLoadFileAsyncSimple(const char *path, void **destination, u32 flags);
s32 scrRunOpcodesStub(ScriptProcess *process);
void optionsClearFlag1(void);
u32 FUN_003a36b4(void);
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
            holder->process = scrScriptProcessCreate(holder->buf0C, holder->buf10);
            scriptProcessSetMode(holder->process, 2);
            scrScriptProcessStartEntry(holder->process, holder->phase.entry);
            holder->phase.state = 2;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(holder->process) == 2) {
            FUN_00418070(rosterGetLeaderId(), 0);
            optionsClearFlag1();
            FUN_003a36b4();
            FUN_004731d8();
            holder->phase.state = 4;
        }
        return 0;
    case 4:
        return 1;
    }
    return 0;
}
}
