/* NON_MATCHING: retail retains each release field's address across calls; built uses direct root-relative stores. */
#include "script/scrScriptProcess.h"
#include <stddef.h>

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
void FUN_00291998();
s32 dialogIsActive();
void infoWinStartTimer(s32);
void FUN_002b827c(s32);
void buttonHelpRelease();
void buttonHelpTexturesUnref();
void uiFadeRelease();
void asdTMTexTableFreeEntry(s32);
}

static void releaseScript(ScriptRunState *&script)
{
    if (script != NULL) {
        scrScriptProcessDestroy(script);
        script = NULL;
    }
}
static void releaseBuffer(void *&buffer)
{
    if (buffer != NULL) {
        asdMemFree(buffer);
        buffer = NULL;
    }
}

/* Release both script bundles and the screen's shared UI resources. */
extern "C" void FUN_003b980c(ScriptScreenCleanupView *work)
{
    releaseScript(work->secondary.script);
    releaseBuffer(work->secondary.bytecode);
    releaseBuffer(work->secondary.messages);
    releaseScript(work->primary.script);
    releaseBuffer(work->primary.bytecode);
    releaseBuffer(work->primary.messages);
    spriteTable2aFree(work->sprites);
    FUN_003bbafc(work->fileSlot);
    FUN_00291998();
    if (dialogIsActive())
        infoWinStartTimer(0);
    FUN_002b827c(3);
    buttonHelpRelease();
    buttonHelpTexturesUnref();
    uiFadeRelease();
    asdTMTexTableFreeEntry(0x21);
}
