/* NON_MATCHING: ARMCC hoists state constants into r7/r8 and emits separate final status/state stores instead of retail's stm; control flow and relocations are reconstructed. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct GameOverScriptProcess {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 enabled;
};

struct GameOverTransition {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 mode;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 status;
    /* 0x10 */ u32 state;
    /* 0x14 */ u8 unk14[4];
    /* 0x18 */ void* scriptData;
    /* 0x1C */ GameOverScriptProcess* process;
    /* 0x20 */ void* messageData;
};

extern "C" {
void asdLoadFileAsyncSimple(const char* path, void** destination, u32 flags);
void asdTMTexTableLoadTmx(u32 table, u32 flags);
void asdTMTexLoadMainHeap(u32 table, u32 index);
void asdTMTexTableReleaseNode(u32 table, u32 index);
s32 campButtonHelpIsActive(void);
void FUN_00342334(u32 enabled);
GameOverScriptProcess* FUN_00275bc8(void* script, void* messages);
void scrScriptProcessStartEntry(GameOverScriptProcess* process, u32 entry);
s32 scrRunOpcodesStub(GameOverScriptProcess* process);
s32 fountainCrazingSumahoUpdate(GameOverTransition* transition);
void scrScriptProcessDestroy(GameOverScriptProcess* process);
void asdMemFree(void* data);
extern const char DAT_00530edc[];
extern const char DAT_00530ebc[];
}

// Load, run, and release the game-over script and its texture bank.
extern "C" u32 FUN_004cef24(GameOverTransition* transition)
{
    switch (transition->state) {
    case 0:
        asdLoadFileAsyncSimple(DAT_00530edc, &transition->scriptData, 0);
        asdLoadFileAsyncSimple(DAT_00530ebc, &transition->messageData, 0);
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
            transition->process = FUN_00275bc8(transition->scriptData, transition->messageData);
            transition->process->enabled = 1;
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
