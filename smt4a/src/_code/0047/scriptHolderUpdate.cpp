/* NON_MATCHING: process setter call recovered; switch cases merge state stores into different tails. */
#include "shard/Shard0047.h"
#include "script/scrScriptProcess.h"
extern "C" {
void sysPlaySe(u32 sound);
void asdLoadFileAsyncSimple(const char *path, void **buffer, s32 flags);
ScriptRunState *FUN_00275bc8(void *script, void *messages);
u32 scrScriptProcessStartEntry(ScriptRunState *process, s32 entry);
u32 scrRunOpcodesStub(ScriptRunState *process);
void scriptProcessSetMode(ScriptRunState *process, s32 mode);
u32 FUN_004186e0();
s32 partyEntryFlagsBit1();
void FUN_00418070(u32 owner, s32 state);
void optionsClearFlag1();
void FUN_003a36b4();
s32 gameBlockByte27E98Is1To3();
extern const char g_questScriptFilePath[];
extern const char g_questSystemMessagesPath[];

u32 scriptHolderUpdate(ScriptHolder *holder)
{
    switch (holder->phase.state) {
    case 0:
        asdLoadFileAsyncSimple(g_questScriptFilePath, &holder->buf0C, 0);
        asdLoadFileAsyncSimple(g_questSystemMessagesPath, &holder->buf10, 0);
        holder->phase.state = 1;
        break;
    case 1: {
        if (holder->buf0C == NULL || holder->buf10 == NULL) {
            return 0;
        }
        if (holder->unk08) {
            sysPlaySe(0x92);
        }
        holder->process = FUN_00275bc8(holder->buf0C, holder->buf10);
        scriptProcessSetMode(holder->process, 2);
        scrScriptProcessStartEntry(holder->process, holder->phase.entry);
        holder->phase.state = 2;
        break;
    }
    case 2: {
        if (scrRunOpcodesStub(holder->process) != 2) {
            return 0;
        }
        u32 owner = FUN_004186e0();
        if (partyEntryFlagsBit1()) {
            FUN_00418070(owner, 0);
        }
        optionsClearFlag1();
        FUN_003a36b4();
        if (!gameBlockByte27E98Is1To3()) {
            holder->phase.state = 4;
            break;
        }
        scrScriptProcessStartEntry(holder->process, 14);
        holder->phase.state = 3;
        break;
    }
    case 3:
        if (scrRunOpcodesStub(holder->process) == 2) {
            holder->phase.state = 4;
        }
        break;
    case 4:
        return 1;
    }
    return 0;
}
}
