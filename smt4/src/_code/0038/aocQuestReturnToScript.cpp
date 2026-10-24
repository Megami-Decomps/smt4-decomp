/* NON_MATCHING: retail makes a20-byte argument snapshot before queueing; canonical const-pointer API does not model the unresolved invisible-reference value ABI. No steering-only copy added. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match8_AocQuestReturn.h"
#include "shard/W6_W6Match8_ScriptStateMode.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "shard/W5_W5Match2_TimedState.h"

extern "C" {
extern AocMain *g_aocMain;
void _ZN7AocMain12queueRequestE17RequestParametersji(QueuedRequestState *state, const RequestParameters *parameters, u32 argument, s32 mode);
void scrScriptProcessDestroy(ScriptState *process);
ScriptState *FUN_00297060(void *script, void *messages);
void msgWindowReset();
void messageBannerBeginClose();
void ifTouchRegionRemove();

void aocQuestReturnToScript(Obj526238 *object)
{
    AocQuestReturnView *work = (AocQuestReturnView *)object;
    if (work->substate != 0) {
        if (work->substate != 1) {
            return;
        }
        u32 flags = g_aocMain->flags;
        if ((flags & 4) != 0 || (flags & 8) != 0) {
            return;
        }
        scrScriptProcessDestroy(work->process);
        work->process = NULL;
        ScriptState *process = FUN_00297060(work->script, work->messages);
        work->process = process;
        ((ScriptStateModeView *)process)->mode = 2;
        msgWindowReset();
        messageBannerBeginClose();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
    } else {
        u32 flags = g_aocMain->flags;
        g_aocMain->flags = flags & ~0x70;
        if ((flags & 0x10) == 0) {
            RequestParameters parameters;
            parameters.kind = 1;
            parameters.word3 = 0;
            parameters.result = WindowStatusResult(0);
            parameters.kind = 200;
            u32 argument;
            if (work->contentCode == 0x6a) {
                argument = work->argument;
            } else {
                argument = (g_aocMain->flags & 0x100) != 0 ? 2 : 1;
            }
            _ZN7AocMain12queueRequestE17RequestParametersji((QueuedRequestState *)g_aocMain, &parameters, argument, 0);
            work->substate = 1;
            return;
        }
    }
    work->state = 3;
    work->substate = 0;
    if (work->child != NULL) {
        delete work->child;
        work->child = NULL;
    }
}
}
