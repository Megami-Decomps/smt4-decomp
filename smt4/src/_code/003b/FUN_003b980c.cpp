/* NON_MATCHING: slot addresses are now kept across the release calls like retail (slots indexed as an array); only the first slot address is formed as base+36 instead of one add of 3472. */
#include "script/scrScriptProcess.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct ScriptScreenBundleView {
    void *bytecode;
    void *messages;
    ScriptRunState *script;
};
struct ScriptScreenCleanupView {
    u8 unk000[0x9c];
    u8 sprites[0xcbc];
    u8 fileSlot[0x24]; /* 0xd58 */
    ScriptScreenBundleView primary; /* 0xd7c */
    ScriptScreenBundleView secondary; /* 0xd88 */
};
typedef char ScriptScreenCleanupOffsets[offsetof(ScriptScreenCleanupView, secondary.script) == 0xd90 ? 1 : -1];

extern "C" {
void scrScriptProcessDestroy(ScriptRunState *);
void asdMemFree(void *);
void spriteTable2aFree(void *);
void FUN_003bbafc(void *);
void soundRequestEnd();
s32 dialogIsActive();
void infoWinStartTimer(s32);
void FUN_002b827c(s32);
void buttonHelpRelease();
void buttonHelpTexturesUnref();
void uiFadeRelease();
}

struct ScriptScreenSlots {
    u8 unk000[0xd6c];
    void *slots[13];
};

static void releaseScript(ScriptScreenSlots *work, s32 index)
{
    if (work->slots[index] != NULL) {
        scrScriptProcessDestroy(static_cast<ScriptRunState *>(work->slots[index]));
        work->slots[index] = NULL;
    }
}
static void releaseBuffer(ScriptScreenSlots *work, s32 index)
{
    if (work->slots[index] != NULL) {
        asdMemFree(work->slots[index]);
        work->slots[index] = NULL;
    }
}

/* Release both script bundles and the screen's shared UI resources. */
extern "C" void FUN_003b980c(ScriptScreenCleanupView *work)
{
    ScriptScreenSlots *slots = reinterpret_cast<ScriptScreenSlots *>(work);
    releaseScript(slots, 9);
    releaseBuffer(slots, 7);
    releaseBuffer(slots, 8);
    releaseScript(slots, 6);
    releaseBuffer(slots, 4);
    releaseBuffer(slots, 5);
    spriteTable2aFree(work->sprites);
    FUN_003bbafc(work->fileSlot);
    soundRequestEnd();
    if (dialogIsActive())
        infoWinStartTimer(0);
    FUN_002b827c(3);
    buttonHelpRelease();
    buttonHelpTexturesUnref();
    uiFadeRelease();
    asdTMTexTableFreeEntry(0x21);
}
