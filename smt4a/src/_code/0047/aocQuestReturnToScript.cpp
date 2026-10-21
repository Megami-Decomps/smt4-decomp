/* NON_MATCHING: retail makes a20-byte argument snapshot before queueing; canonical const-pointer API does not model the unresolved invisible-reference value ABI. No steering-only copy added. */
#include "addon/aocMain.h"
#include "shard/W6_W6Match8_AocQuestReturn.h"
#include "shard/W6_W6Match8_ScriptStateMode.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "shard/W5_W5Match2_TimedState.h"

extern "C" {
extern AocMain *g_aocMain;
RequestParameters *timeInitializeActiveState(RequestParameters *parameters);
TimeWords *resultPairInitialize(TimeWords *result, u32 code);
void FUN_001ba1c0(QueuedRequestState *state, const RequestParameters *parameters, u32 argument, s32 mode);
void scrScriptProcessDestroy(ScriptState *process);
ScriptState *FUN_00275bc8(void *script, void *messages);
void msgWindowReset();
void messageBannerRestartOrClear();
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
        ScriptState *process = FUN_00275bc8(work->script, work->messages);
        work->process = process;
        ((ScriptStateModeView *)process)->mode = 2;
        msgWindowReset();
        messageBannerRestartOrClear();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
    } else {
        u32 flags = g_aocMain->flags;
        g_aocMain->flags = flags & ~0x70;
        if ((flags & 0x10) == 0) {
            RequestParameters parameters;
            timeInitializeActiveState(&parameters);
            u8 &requestKind = *(u8 *)parameters.words;
            requestKind = 1;
            parameters.words[3] = 0;
            TimeWords result;
            const TimeWords *converted = resultPairInitialize(&result, 0);
            parameters.words[1] = converted->low;
            parameters.words[2] = converted->high;
            requestKind = 200;
            u32 argument;
            if (work->contentCode == 0x6a) {
                argument = work->argument;
            } else {
                argument = (g_aocMain->flags & 0x100) != 0 ? 2 : 1;
            }
            FUN_001ba1c0((QueuedRequestState *)g_aocMain, &parameters, argument, 0);
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
