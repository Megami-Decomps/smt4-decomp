/* NON_MATCHING: state-constant lifetimes and switch-tail merging differ, retaining 2 in a saved register across entry startup; candidate -O2. */
#include "shard/Shard0047.h"
#include "shard/Shard0032.h"
#include "shard/W6_W6Match8_ScriptStateMode.h"

struct ScriptHolderFlow {
    u32 state;
    s32 entry;
};
extern "C" {
void sysPlaySe(u32 sound);
void asdLoadFileAsyncSimple(const char *path, void **buffer, s32 flags);
ScriptState *FUN_00275bc8(void *script, void *messages);
u32 scrScriptProcessStartEntry(ScriptState *process, s32 entry);
u32 scrRunOpcodesStub(ScriptState *process);
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
    ScriptHolderFlow *flow = (ScriptHolderFlow *)holder;
    switch (flow->state) {
    case 0:
        asdLoadFileAsyncSimple(g_questScriptFilePath, &holder->buf0C, 0);
        asdLoadFileAsyncSimple(g_questSystemMessagesPath, &holder->buf10, 0);
        flow->state = 1;
        break;
    case 1: {
        if (holder->buf0C == NULL || holder->buf10 == NULL) {
            return 0;
        }
        if (holder->unk08) {
            sysPlaySe(0x92);
        }
        ScriptState *process = FUN_00275bc8(holder->buf0C, holder->buf10);
        holder->proc14 = (u32)process;
        ((ScriptStateModeView *)process)->mode = 2;
        scrScriptProcessStartEntry((ScriptState *)holder->proc14, flow->entry);
        flow->state = 2;
        break;
    }
    case 2: {
        if (scrRunOpcodesStub((ScriptState *)holder->proc14) != 2) {
            return 0;
        }
        u32 owner = FUN_004186e0();
        if (partyEntryFlagsBit1()) {
            FUN_00418070(owner, 0);
        }
        optionsClearFlag1();
        FUN_003a36b4();
        if (!gameBlockByte27E98Is1To3()) {
            flow->state = 4;
            break;
        }
        scrScriptProcessStartEntry((ScriptState *)holder->proc14, 14);
        flow->state = 3;
        break;
    }
    case 3:
        if (scrRunOpcodesStub((ScriptState *)holder->proc14) != 2) {
            return 0;
        }
        flow->state = 4;
        break;
    case 4:
        return 1;
    }
    return 0;
}
}
