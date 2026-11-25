/* NON_MATCHING: retail predicates the request-files state store and shares the initial
 * state store with three later states; the build shares the request-files store instead. */
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "script/scrScriptProcess.h"
#include "shard/S2Scene3a.h"
#include "script/ScriptEntry.h"

extern "C" {
s32 tableGroupFindEntryIndex(void *table, const char *name);
void buttonHelpSetPreset(s32 preset);
s32 inputQueryButtonState(s32 first, s32 second);
s32 messageMainIsWindowActive(void);
void msgWindowReset(void);
u32 FUN_00292bf0(void);
u32 gameSlotTableGetHeader(void);
void slotSetRequest(s32 slot, s32 kind, s32 value);
s32 screenFadeIsBusy(void);
void messageDismissNumericBanner(s32 value);
}

/* Steps the shop-exit sequence: runs the exit script, then the second Charon request if needed. */
extern "C" void shopUpdateCharonRequestTransition(Scene3a *shop)
{
    enum {
        START_EXIT_SCRIPT, WAIT_FOR_EXIT_SCRIPT, REQUEST_RESULT_FILES, WAIT_FOR_RESULT_FILES,
        WAIT_FOR_RESULT_SCRIPT, START_FADE, WAIT_FOR_FADE, EXIT_PHASE = 18
    };
    switch (shop->pageTransition.substep) {
    case START_EXIT_SCRIPT:
        scrScriptProcessStartEntry(shop->process, tableGroupFindEntryIndex(shop->scriptTable, "shop_exit"));
        buttonHelpSetPreset(158);
        shop->pageTransition.substep = WAIT_FOR_EXIT_SCRIPT;
        return;
    case WAIT_FOR_EXIT_SCRIPT:
        if (scrRunOpcodesStub(shop->process) != 2) {
            if (inputQueryButtonState(1, 1) != 0 && messageMainIsWindowActive() != 0) {
                msgWindowReset();
            }
            return;
        }
        if (FUN_00292bf0() == 0 || FUN_00292bf0() > gameSlotTableGetHeader()) {
            shop->pageTransition.substep = START_FADE;
            return;
        }
        shop->pageTransition.substep = REQUEST_RESULT_FILES;
        return;
    case START_FADE:
        slotSetRequest(0, 10, 255);
        slotSetRequest(1, 10, 255);
        shop->pageTransition.substep = WAIT_FOR_FADE;
        return;
    case WAIT_FOR_FADE:
        if (screenFadeIsBusy() == 0) {
            messageDismissNumericBanner(1);
            shop->pageTransition.phase = EXIT_PHASE;
            shop->pageTransition.substep = START_EXIT_SCRIPT;
        }
        return;
    case REQUEST_RESULT_FILES:
        asdLoadFileAsyncSimple("battle/Result.bf", (u32 *)&shop->resultTable, 0);
        asdLoadFileAsyncSimple("battle/ResultMsg.mbm", (u32 *)&shop->resultMessages, 0);
        shop->pageTransition.substep = WAIT_FOR_RESULT_FILES;
        return;
    case WAIT_FOR_RESULT_FILES:
        if (shop->resultTable != NULL && shop->resultMessages != NULL) {
            ScriptProcess *script = scrScriptProcessCreate(shop->resultTable, shop->resultMessages);
            shop->resultProcess = script;
            scriptProcessSetMode(script, 2);
            scrScriptProcessStartEntry(shop->resultProcess,
                tableGroupFindEntryIndex(shop->resultTable, "ProcCharonRequestSecond"));
            shop->pageTransition.substep = WAIT_FOR_RESULT_SCRIPT;
        }
        return;
    case WAIT_FOR_RESULT_SCRIPT:
        if (scrRunOpcodesStub(shop->resultProcess) == 2) {
            shop->pageTransition.substep = START_FADE;
        }
        return;
    }
}
