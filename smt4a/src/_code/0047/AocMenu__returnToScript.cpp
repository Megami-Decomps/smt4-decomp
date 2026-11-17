/* NON_MATCHING: layout, request snapshot (real AocMain::queueRequest), tst/tsteq and flag-bit tests match; retail keeps state=3/substate=0 as one STM per arm without hoisting, while the build hoists the constant 3 (two STRs) and the flags address. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match8_AocQuestReturn.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match5_QueuedRequest.h"

extern "C" {
void msgWindowReset();
void messageBannerRestartOrClear();
void ifTouchRegionRemove();

/* Bit `bit` of a flag word, as 0 or 1. */
static __inline u32 flagBit(u32 flags, u32 bit)
{
    return (flags & (1u << bit)) >> bit;
}

void AocMenu::returnToScript()
{
    AocMenu * object = reinterpret_cast<AocMenu *>(this);
    AocQuestReturnView *work = (AocQuestReturnView *)object;
    if (work->substate != 0) {
        if (work->substate != 1) {
            return;
        }
        u32 flags = g_aocMain->flags;
        if ((flags & 4) != 0) {
            return;
        }
        if ((flags & 8) != 0) {
            return;
        }
        scrScriptProcessDestroy(work->process);
        work->process = NULL;
        ScriptProcess *process = scrScriptProcessCreate(work->script, work->messages);
        work->process = process;
        process->mode = 2;
        msgWindowReset();
        messageBannerRestartOrClear();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        work->state = 3;
        work->substate = 0;
        if (work->child != NULL) {
            delete work->child;
            work->child = NULL;
        }
        return;
    }
    u32 closing = flagBit(g_aocMain->flags, 4);
    g_aocMain->flags &= ~0x70;
    if (closing) {
        work->state = 3;
        work->substate = 0;
        if (work->child != NULL) {
            delete work->child;
            work->child = NULL;
        }
        return;
    }
    RequestParameters parameters;
    parameters.kind = 1;
    parameters.word3 = 0;
    parameters.result = WindowStatusResult(parameters.word3);
    parameters.kind = 200;
    u32 argument;
    if (work->contentCode == 0x6a) {
        argument = work->argument;
    } else {
        argument = (g_aocMain->flags & 0x100) != 0 ? 2 : 1;
    }
    g_aocMain->queueRequest(parameters, argument, 0);
    work->substate = 1;
}
}
