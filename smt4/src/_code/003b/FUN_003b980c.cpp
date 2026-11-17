#include "script/scrScriptProcess.h"
#include <stddef.h>
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

struct ScriptScreenBundleView {
    /* 0x0 */ void *bytecode;
    /* 0x4 */ void *messages;
    /* 0x8 */ ScriptProcess *script;
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
void asdMemFree(void *);
void spriteTable2aFree(void *);
void FUN_003bbafc(void *);
void soundRequestEnd();
s32 dialogIsActive();
void infoWinStartTimer(s32);
void buttonHelpSetContext(s32);
void buttonHelpRelease();
void buttonHelpTexturesUnref();
void uiFadeRelease();
}

/* Release both script bundles and the screen's shared UI resources. */
extern "C" void FUN_003b980c(ScriptScreenCleanupView *work)
{
    if (work->secondary.script != NULL) {
        scrScriptProcessDestroy(work->secondary.script);
        work->secondary.script = NULL;
    }
    if (work->secondary.bytecode != NULL) {
        asdMemFree(work->secondary.bytecode);
        work->secondary.bytecode = NULL;
    }
    if (work->secondary.messages != NULL) {
        asdMemFree(work->secondary.messages);
        work->secondary.messages = NULL;
    }
    if (work->primary.script != NULL) {
        scrScriptProcessDestroy(work->primary.script);
        work->primary.script = NULL;
    }
    if (work->primary.bytecode != NULL) {
        asdMemFree(work->primary.bytecode);
        work->primary.bytecode = NULL;
    }
    if (work->primary.messages != NULL) {
        asdMemFree(work->primary.messages);
        work->primary.messages = NULL;
    }
    spriteTable2aFree(work->sprites);
    FUN_003bbafc(work->fileSlot);
    soundRequestEnd();
    if (dialogIsActive())
        infoWinStartTimer(0);
    buttonHelpSetContext(3);
    buttonHelpRelease();
    buttonHelpTexturesUnref();
    uiFadeRelease();
    asdTMTexTableFreeEntry(0x21);
}
