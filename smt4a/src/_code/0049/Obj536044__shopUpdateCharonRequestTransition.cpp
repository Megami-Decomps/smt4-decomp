#include "classes/Obj536044.h"
#include "code/Code0035_Smt4a.h"
#include "script/scrScriptProcess.h"

extern "C" {
s32 messageMainIsIdle();
u32 tableGroupFindEntryIndex(u32 table, const char *name);
void scrScriptProcessStartEntry(ScriptProcess *, u32);
void sysPlaySe(u32);
u32 gameDataBlocksGetWord();
u32 FUN_004d05b4();
void asdLoadFileAsyncSimple(const char *, void **, u32);
void slotSetRequest(u32, u32, u32);
s32 screenFadeIsBusy();
void messageDismissNumericBanner(u32);
}

// Run the shop exit and conditional second Charon request before returning to state 20.
void Obj536044::shopUpdateCharonRequestTransition()
{
    switch (substate) {
    case 0:
        if (messageMainIsIdle()) {
            u32 entry = tableGroupFindEntryIndex(tableGroup, "shop_exit");
            scrScriptProcessStartEntry(static_cast<ScriptProcess *>(controller), entry);
            sysPlaySe(0xa0);
            substate = 1;
            FUN_0035d03c(1);
        }
        return;
    case 1:
        if (scrRunOpcodesStub(static_cast<ScriptProcess *>(controller)) != 2) {
            return;
        }
        if (gameDataBlocksGetWord() == 0 || gameDataBlocksGetWord() > FUN_004d05b4()) {
            substate = 5;
            return;
        }
        substate = 2;
        return;
    case 5:
        slotSetRequest(0, 10, 0xff);
        slotSetRequest(1, 10, 0xff);
        FUN_0035d03c(0);
        substate = 6;
        return;
    case 6:
        if (!screenFadeIsBusy()) {
            messageDismissNumericBanner(1);
            changeState(20);
        }
        return;
    case 2:
        asdLoadFileAsyncSimple("battle/Result.bf", &resultTable, 0);
        asdLoadFileAsyncSimple("battle/ResultMsg.mbm", &resultMessages, 0);
        substate = 3;
        return;
    case 3:
        if (resultTable != NULL && resultMessages != NULL) {
            ScriptProcess *script = scrScriptProcessCreate(resultTable, resultMessages);
            resultScript = script;
            scriptProcessSetMode(script, 2);
            u32 entry = tableGroupFindEntryIndex(reinterpret_cast<u32>(resultTable), "ProcCharonRequestSecond");
            scrScriptProcessStartEntry(resultScript, entry);
            substate = 4;
        }
        return;
    case 4:
        if (scrRunOpcodesStub(resultScript) == 2)
            substate = 5;
        return;
    }
}
