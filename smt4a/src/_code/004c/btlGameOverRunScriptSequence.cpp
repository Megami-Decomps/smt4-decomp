/* NON_MATCHING: the mode store is the linker-inlined scriptProcessSetMode call; armcc still hoists the state constant 3 into r7 (retail keeps 0 there and rematerialises 3) and schedules the final status/state stores differently. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "event/eventCommand.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "script/scrScriptProcess.h"

struct GameOverTransition {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 mode;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 status;
    /* 0x10 */ u32 state;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ void* scriptData;
    /* 0x1C */ ScriptProcess* process;
    /* 0x20 */ void* messageData;
};

extern "C" {
void asdTMTexTableLoadTmx(u32 table, u32 flags);
void asdTMTexTableReleaseNode(u32 table, u32 index);
s32 campButtonHelpIsActive(void);
void scrScriptProcessStartEntry(ScriptProcess* process, u32 entry);
s32 fountainCrazingSumahoUpdate(GameOverTransition* transition);
void asdMemFree(void* data);
extern const char DAT_00530edc[];
extern const char DAT_00530ebc[];
}

// Load, run, and release the game-over script and its texture bank.
extern "C" u32 btlGameOverRunScriptSequence(GameOverTransition* transition)
{
    switch (transition->state) {
    case 0:
        asdLoadFileAsyncSimple(DAT_00530edc, reinterpret_cast<u32 *>(&transition->scriptData), 0);
        asdLoadFileAsyncSimple(DAT_00530ebc, reinterpret_cast<u32 *>(&transition->messageData), 0);
        asdTMTexTableLoadTmx(0x22, 0);
        for (s32 index = 1; index < 7; ++index) {
            asdTMTexLoadMainHeap(0x22, index);
        }
        transition->state = 1;
        if (transition->mode == 3 && campButtonHelpIsActive()) {
            FUN_00342334(0);
        }
        // Fall through while the asynchronous resources are already available.
    case 1:
        if (transition->scriptData != NULL && transition->messageData != NULL) {
            for (s32 index = 1; index < 7; ++index) {
                if (!asdTMTexTableNodeIsLoaded(0x22, index)) {
                    return 0;
                }
            }
            transition->process = scrScriptProcessCreate(transition->scriptData, transition->messageData);
            scriptProcessSetMode(transition->process, 1);
            scrScriptProcessStartEntry(transition->process, 0);
            if (transition->mode != 2) {
                transition->state = 4;
            } else {
                scrScriptProcessStartEntry(transition->process, 4);
                transition->state = 2;
            }
        }
        break;
    case 2:
        if (scrRunOpcodesStub(transition->process) == 2) {
            scrScriptProcessStartEntry(transition->process, 3);
            transition->state = 3;
        }
        break;
    case 3:
        if (scrRunOpcodesStub(transition->process) != 2) {
            return 0;
        }
        transition->state = 4;
        // Fall through to the game-over interaction.
    case 4:
        if (fountainCrazingSumahoUpdate(transition)) {
            return 0;
        }
        transition->state = 5;
        break;
    case 5:
        if (transition->mode == 3 && campButtonHelpIsActive()) {
            FUN_00342334(1);
        }
        for (s32 index = 1; index < 7; ++index) {
            asdTMTexTableReleaseNode(0x22, index);
        }
        asdTMTexTableFreeEntry(0x22);
        if (transition->process != NULL) {
            scrScriptProcessDestroy(transition->process);
            transition->process = NULL;
        }
        if (transition->scriptData != NULL) {
            asdMemFree(transition->scriptData);
            transition->scriptData = NULL;
        }
        if (transition->messageData != NULL) {
            asdMemFree(transition->messageData);
            transition->messageData = NULL;
        }
        transition->status = 3;
        transition->state = 0;
        break;
    }
    return 0;
}
