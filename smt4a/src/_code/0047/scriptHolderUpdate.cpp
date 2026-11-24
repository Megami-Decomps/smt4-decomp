#include "shard/Shard0047.h"
#include "script/scrScriptProcess.h"
#include "code/Code0041_Smt4a.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
void sysPlaySe(u32 sound);
void asdLoadFileAsyncSimple(const char *path, void **buffer, s32 flags);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void optionsClearFlag1();
u32 FUN_003a36b4(void);
s32 gameBlockByte27E98Is1To3();
extern const char g_questScriptFilePath[];
extern const char g_questSystemMessagesPath[];

/* Loads the quest script and its messages, runs the requested entry, then runs the follow-up entry when one is pending
 * (the Apocalypse twin of questSysLoadStep). */
u32 scriptHolderUpdate(ScriptHolder *holder)
{
    switch (holder->phase.state) {
    case 0:
        asdLoadFileAsyncSimple(g_questScriptFilePath, &holder->buf0C, 0);
        asdLoadFileAsyncSimple(g_questSystemMessagesPath, &holder->buf10, 0);
        holder->phase.state = 1;
        break;
    case 1:
        if (holder->buf0C != NULL && holder->buf10 != NULL) {
            if (holder->unk08) {
                sysPlaySe(0x92);
            }
            holder->process = scrScriptProcessCreate(holder->buf0C, holder->buf10);
            scriptProcessSetMode(holder->process, 2);
            scrScriptProcessStartEntry(holder->process, holder->phase.entry);
            holder->phase.state = 2;
        }
        break;
    case 2:
        if (scrRunOpcodesStub(holder->process) == 2) {
            u32 owner = rosterGetLeaderId();
            if (questHasNewMark(owner)) {
                FUN_00418070(owner, 0);
            }
            optionsClearFlag1();
            FUN_003a36b4();
            if (gameBlockByte27E98Is1To3()) {
                scrScriptProcessStartEntry(holder->process, 14);
                holder->phase.state = 3;
            } else {
                holder->phase.state = 4;
            }
        }
        break;
    case 3:
        if (scrRunOpcodesStub(holder->process) == 2) {
            holder->phase.state = 4;
        }
        return 0;
    case 4:
        return 1;
    }
    return 0;
}
} /* extern "C" */
